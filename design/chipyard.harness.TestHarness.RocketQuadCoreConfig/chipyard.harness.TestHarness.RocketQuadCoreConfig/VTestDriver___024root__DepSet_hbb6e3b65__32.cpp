// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6137(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6137\n"); );
    // Body
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7b5bf47c__0 
        = (IData)(((0x200000U == (0x600000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_ha1020d91__0)));
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
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6138(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6138\n"); );
    // Body
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7b5bf47c__0 
        = (IData)(((0x200000U == (0x600000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_ha1020d91__0)));
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
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6139(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6139\n"); );
    // Body
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h7b5bf47c__0 
        = (IData)(((0x200000U == (0x600000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_ha1020d91__0)));
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

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6140(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6140\n"); );
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
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT____VdfgTmp_h318af565__0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4deint__DOT__locked) 
            & (7U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__b_delay))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__r_holds_d));
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc));
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rocc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rxs2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mem 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_slow_bypass 
            = (1U & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                     | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size) 
                           >> 1U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_load 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & (((((((((((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                             | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                            | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_store 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & ((((((((((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                            | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_mem_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6141(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6141\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h7667347e__0;
    // Body
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2)) 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_sfence)))))))) {
        __Vtemp_h7667347e__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                         << 0x18U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                            << 0x10U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                               << 8U) 
                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))));
        __Vtemp_h7667347e__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                          << 0x18U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                             << 0x10U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                                << 8U) 
                                                               | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))) 
                                            >> 0x20U));
        __Vtemp_h7667347e__0[2U] = (IData)((((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))));
        __Vtemp_h7667347e__0[3U] = (IData)(((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))) 
                                            >> 0x20U));
        __Vtemp_h7667347e__0[4U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))));
        __Vtemp_h7667347e__0[5U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))) 
                                            >> 0x20U));
        __Vtemp_h7667347e__0[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1);
        __Vtemp_h7667347e__0[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1 
                                            >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rs2 
            = (((QData)((IData)(__Vtemp_h7667347e__0[
                                (((IData)(0x3fU) + 
                                  (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                      ? 3U
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                         ? 3U
                                                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                      ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(__Vtemp_h7667347e__0[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                               ? 3U
                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                     ? 3U
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                   << 6U))))) 
                  | ((QData)((IData)(__Vtemp_h7667347e__0[
                                     (6U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 1U))])) 
                     >> (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                    ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                  << 6U)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)));
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc));
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rocc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rxs2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mem 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_slow_bypass 
            = (1U & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                     | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size) 
                           >> 1U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_load 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & (((((((((((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                             | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                            | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_store 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & ((((((((((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                            | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_mem_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6142(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6142\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_hc1ea8a0a__0;
    // Body
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2)) 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_sfence)))))))) {
        __Vtemp_hc1ea8a0a__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                         << 0x18U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                            << 0x10U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                               << 8U) 
                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))));
        __Vtemp_hc1ea8a0a__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                          << 0x18U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                             << 0x10U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                                << 8U) 
                                                               | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))) 
                                            >> 0x20U));
        __Vtemp_hc1ea8a0a__0[2U] = (IData)((((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))));
        __Vtemp_hc1ea8a0a__0[3U] = (IData)(((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))) 
                                            >> 0x20U));
        __Vtemp_hc1ea8a0a__0[4U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))));
        __Vtemp_hc1ea8a0a__0[5U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))) 
                                            >> 0x20U));
        __Vtemp_hc1ea8a0a__0[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1);
        __Vtemp_hc1ea8a0a__0[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1 
                                            >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rs2 
            = (((QData)((IData)(__Vtemp_hc1ea8a0a__0[
                                (((IData)(0x3fU) + 
                                  (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                      ? 3U
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                         ? 3U
                                                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                      ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(__Vtemp_hc1ea8a0a__0[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                               ? 3U
                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                     ? 3U
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                   << 6U))))) 
                  | ((QData)((IData)(__Vtemp_hc1ea8a0a__0[
                                     (6U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 1U))])) 
                     >> (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                    ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                  << 6U)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)));
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc));
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rocc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rxs2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mem 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_slow_bypass 
            = (1U & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                     | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size) 
                           >> 1U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_load 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & (((((((((((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                             | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                            | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_store 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & ((((((((((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                            | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_mem_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6143(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6143\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h6fffa216__0;
    // Body
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2)) 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_sfence)))))))) {
        __Vtemp_h6fffa216__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                         << 0x18U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                            << 0x10U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                               << 8U) 
                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))));
        __Vtemp_h6fffa216__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                          << 0x18U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                             << 0x10U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                                << 8U) 
                                                               | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))) 
                                            >> 0x20U));
        __Vtemp_h6fffa216__0[2U] = (IData)((((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))));
        __Vtemp_h6fffa216__0[3U] = (IData)(((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))) 
                                            >> 0x20U));
        __Vtemp_h6fffa216__0[4U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))));
        __Vtemp_h6fffa216__0[5U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))) 
                                            >> 0x20U));
        __Vtemp_h6fffa216__0[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1);
        __Vtemp_h6fffa216__0[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1 
                                            >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rs2 
            = (((QData)((IData)(__Vtemp_h6fffa216__0[
                                (((IData)(0x3fU) + 
                                  (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                      ? 3U
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                         ? 3U
                                                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                      ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(__Vtemp_h6fffa216__0[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                               ? 3U
                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                     ? 3U
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                   << 6U))))) 
                  | ((QData)((IData)(__Vtemp_h6fffa216__0[
                                     (6U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 1U))])) 
                     >> (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                    ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                  << 6U)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)));
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc));
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid)))))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rocc 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_rxs2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_mem 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_slow_bypass 
            = (1U & ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                     | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size) 
                           >> 1U))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_load 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & (((((((((((((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                             | (0x10U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                            | (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_store 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
               & ((((((((((((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd)) 
                            | (0x11U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                          | (4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                         | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                        | (0xaU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                       | (0xbU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                      | (8U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                     | (0xcU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                    | (0xdU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                   | (0xeU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))) 
                  | (0xfU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem_cmd))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_mem_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6144(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6144\n"); );
    // Init
    VlWide<8>/*255:0*/ __Vtemp_h681df07c__0;
    // Body
    if ((1U & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_69) 
                  | (~ (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_pc_valid) 
                         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rxs2)) 
                        & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_mem) 
                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)) 
                           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_sfence)))))))) {
        __Vtemp_h681df07c__0[0U] = (IData)((((QData)((IData)(
                                                             (0xffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x38U) 
                                            | (((QData)((IData)(
                                                                (0xffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x30U) 
                                               | (((QData)((IData)(
                                                                   (0xffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x28U) 
                                                  | (((QData)((IData)(
                                                                      (0xffU 
                                                                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                      << 0x20U) 
                                                     | (((QData)((IData)(
                                                                         (0xffU 
                                                                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                         << 0x18U) 
                                                        | (((QData)((IData)(
                                                                            (0xffU 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                            << 0x10U) 
                                                           | (((QData)((IData)(
                                                                               (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                               << 8U) 
                                                              | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))));
        __Vtemp_h681df07c__0[1U] = (IData)(((((QData)((IData)(
                                                              (0xffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x38U) 
                                             | (((QData)((IData)(
                                                                 (0xffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x30U) 
                                                | (((QData)((IData)(
                                                                    (0xffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x28U) 
                                                   | (((QData)((IData)(
                                                                       (0xffU 
                                                                        & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                       << 0x20U) 
                                                      | (((QData)((IData)(
                                                                          (0xffU 
                                                                           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                          << 0x18U) 
                                                         | (((QData)((IData)(
                                                                             (0xffU 
                                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                             << 0x10U) 
                                                            | (((QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                                << 8U) 
                                                               | (QData)((IData)(
                                                                                (0xffU 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))))))) 
                                            >> 0x20U));
        __Vtemp_h681df07c__0[2U] = (IData)((((QData)((IData)(
                                                             (0xffffU 
                                                              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                             << 0x30U) 
                                            | (((QData)((IData)(
                                                                (0xffffU 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                << 0x20U) 
                                               | (((QData)((IData)(
                                                                   (0xffffU 
                                                                    & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                   << 0x10U) 
                                                  | (QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))));
        __Vtemp_h681df07c__0[3U] = (IData)(((((QData)((IData)(
                                                              (0xffffU 
                                                               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                              << 0x30U) 
                                             | (((QData)((IData)(
                                                                 (0xffffU 
                                                                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                 << 0x20U) 
                                                | (((QData)((IData)(
                                                                    (0xffffU 
                                                                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)))) 
                                                    << 0x10U) 
                                                   | (QData)((IData)(
                                                                     (0xffffU 
                                                                      & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))))))) 
                                            >> 0x20U));
        __Vtemp_h681df07c__0[4U] = (IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                             << 0x20U) 
                                            | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))));
        __Vtemp_h681df07c__0[5U] = (IData)(((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1)) 
                                              << 0x20U) 
                                             | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1))) 
                                            >> 0x20U));
        __Vtemp_h681df07c__0[6U] = (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1);
        __Vtemp_h681df07c__0[7U] = (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_rs_1 
                                            >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rs2 
            = (((QData)((IData)(__Vtemp_h681df07c__0[
                                (((IData)(0x3fU) + 
                                  (0xffU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 6U))) 
                                 >> 5U)])) << ((0U 
                                                == 
                                                (0x1fU 
                                                 & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                      ? 3U
                                                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                    << 6U)))
                                                ? 0x20U
                                                : ((IData)(0x40U) 
                                                   - 
                                                   (0x1fU 
                                                    & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                         ? 3U
                                                         : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                       << 6U))))) 
               | (((0U == (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                      ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                    << 6U))) ? 0ULL
                    : ((QData)((IData)(__Vtemp_h681df07c__0[
                                       (((IData)(0x1fU) 
                                         + (0xffU & 
                                            (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                               ? 3U
                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                             << 6U))) 
                                        >> 5U)])) << 
                       ((IData)(0x20U) - (0x1fU & (
                                                   ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                                     ? 3U
                                                     : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                                   << 6U))))) 
                  | ((QData)((IData)(__Vtemp_h681df07c__0[
                                     (6U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                              ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                            << 1U))])) 
                     >> (0x1fU & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_rocc)
                                    ? 3U : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_mem_size)) 
                                  << 6U)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT___T_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__tlb__DOT__r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s1_pc 
                                     >> 0xcU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_cfiType_T_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr 
            = (0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_44));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_br_target_T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_cfi_taken_T)
            ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                            >> 0x1fU))) << 0xcU) | 
               ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                           << 4U)) | ((0x7e0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 7U)))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal)
                ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                >> 0x1fU))) << 0x14U) 
                   | ((0xff000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst) 
                      | ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 0x14U)))))
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rvc)
                    ? 2U : 4U)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6145(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6145\n"); );
    // Body
    if ((1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___csr_io_interrupt)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_replay)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)) 
                 & ((IData)(1U) << (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc 
                                                  >> 1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_pc
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_cfiType_T_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr 
            = (0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_44));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_br_target_T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_cfi_taken_T)
            ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                            >> 0x1fU))) << 0xcU) | 
               ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                           << 4U)) | ((0x7e0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 7U)))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal)
                ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                >> 0x1fU))) << 0x14U) 
                   | ((0xff000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst) 
                      | ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 0x14U)))))
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rvc)
                    ? 2U : 4U)));
    if ((1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___csr_io_interrupt)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_replay)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6146(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6146\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)) 
                 & ((IData)(1U) << (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc 
                                                  >> 1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_pc
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_cfiType_T_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr 
            = (0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_44));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_br_target_T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_cfi_taken_T)
            ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                            >> 0x1fU))) << 0xcU) | 
               ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                           << 4U)) | ((0x7e0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 7U)))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal)
                ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                >> 0x1fU))) << 0x14U) 
                   | ((0xff000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst) 
                      | ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 0x14U)))))
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rvc)
                    ? 2U : 4U)));
    if ((1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___csr_io_interrupt)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_replay)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)) 
                 & ((IData)(1U) << (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc 
                                                  >> 1U))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6147(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6147\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_pc
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___io_imem_btb_update_bits_cfiType_T_9 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jalr));
    if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_ctrl_jalr 
            = (0x3ffU == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___id_ctrl_decoder_decoded_T_44));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_br_target_T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___mem_cfi_taken_T)
            ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                            >> 0x1fU))) << 0xcU) | 
               ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                           << 4U)) | ((0x7e0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                 >> 0x14U)) 
                                      | (0x1eU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 7U)))))
            : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_ctrl_jal)
                ? (((- (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                >> 0x1fU))) << 0x14U) 
                   | ((0xff000U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst) 
                      | ((0x800U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                    >> 9U)) | (0x7feU 
                                               & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_inst 
                                                  >> 0x14U)))))
                : ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_rvc)
                    ? 2U : 4U)));
    if ((1U & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ctrl_killd)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___csr_io_interrupt)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_replay)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__ex_reg_inst 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___ibuf_io_inst_0_bits_inst_bits;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_valid 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__taken_prevRVI)) 
                 & ((IData)(1U) << (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc 
                                                  >> 1U))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_pc 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_pc
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_pc);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6148(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6148\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_337 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_336 
        = (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_335 
        = (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__inWriteback 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_4_valid 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___canAcceptCachedGrant_T_4 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
              | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_hit_way;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_state_state 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_68;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 1U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked) 
             & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                                >> 2U))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 3U;
        } else if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                            - (IData)(1U)));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_276) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit)
                    ? 0x4fU : 0U);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_37 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6149(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6149\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_36 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_35 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_38 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_u;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_34 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_ppn;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_imem_sfence_valid) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated) 
              & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6150(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6150\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count 
            = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                      ? ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_d 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 7U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_a 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 6U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_g 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 5U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_u 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 4U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_x 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_w 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 2U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_r 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 1U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) {
                if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
                } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
                    }
                } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
                    }
                } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
                }
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___max_count_T) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
            }
        } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
            }
        } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
            }
        } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
        }
        if (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count = 0U;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6151(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6151\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__ae;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x52ULL == (0x52ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0xd4ULL == (0xd4ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x58ULL == (0x58ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6152(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6152\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) 
           | ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2)
                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final 
        = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse))) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_vstage1)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__l2_refill 
        = ((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__success)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_237)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_need_gpa))) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_vstage1)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_stage2))) 
              | (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_both_stages) 
                    & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count))) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                  & (0xdcULL == (0xdcULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                 & (((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                              >> 1U)) | (IData)((8ULL 
                                                 == 
                                                 (0xcULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))) 
                    & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                >> 1U)) | (IData)((8ULL 
                                                   == 
                                                   (0xcULL 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6153(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6153\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_337 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_336 
        = (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_335 
        = (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__inWriteback 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_4_valid 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___canAcceptCachedGrant_T_4 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
              | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_hit_way;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_state_state 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_68;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 1U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked) 
             & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                                >> 2U))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 3U;
        } else if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                            - (IData)(1U)));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_276) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit)
                    ? 0x4fU : 0U);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6154(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6154\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_37 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_36 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_35 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_38 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_u;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_34 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_ppn;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_imem_sfence_valid) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated) 
              & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6155(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6155\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count 
            = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                      ? ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_d 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 7U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_a 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 6U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_g 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 5U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_u 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 4U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_x 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_w 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 2U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_r 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 1U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) {
                if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
                } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
                    }
                } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
                    }
                } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
                }
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___max_count_T) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
            }
        } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
            }
        } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
            }
        } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
        }
        if (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count = 0U;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6156(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6156\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__ae;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x52ULL == (0x52ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0xd4ULL == (0xd4ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x58ULL == (0x58ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6157(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6157\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) 
           | ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2)
                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final 
        = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse))) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_vstage1)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__l2_refill 
        = ((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__success)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_237)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_need_gpa))) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_vstage1)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_stage2))) 
              | (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_both_stages) 
                    & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count))) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                  & (0xdcULL == (0xdcULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                 & (((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                              >> 1U)) | (IData)((8ULL 
                                                 == 
                                                 (0xcULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))) 
                    & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                >> 1U)) | (IData)((8ULL 
                                                   == 
                                                   (0xcULL 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6158(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6158\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_337 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_336 
        = (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_335 
        = (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__inWriteback 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_4_valid 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___canAcceptCachedGrant_T_4 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
              | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_hit_way;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_state_state 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_68;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 1U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked) 
             & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                                >> 2U))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 3U;
        } else if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                            - (IData)(1U)));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_276) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit)
                    ? 0x4fU : 0U);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6159(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6159\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_37 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_36 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_35 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_38 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_u;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_34 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_ppn;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___core_io_imem_sfence_valid) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated) 
              & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6160(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6160\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count 
            = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                      ? ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_d 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 7U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_a 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 6U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_g 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 5U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_u 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 4U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_x 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_w 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 2U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_r 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 1U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) {
                if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
                } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
                    }
                } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
                    }
                } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
                }
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___max_count_T) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
            }
        } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
            }
        } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
            }
        } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
        }
        if (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count = 0U;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6161(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6161\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__ae;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x52ULL == (0x52ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0xd4ULL == (0xd4ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x58ULL == (0x58ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6162(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6162\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) 
           | ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2)
                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final 
        = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse))) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_vstage1)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__l2_refill 
        = ((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__success)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_237)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_need_gpa))) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_vstage1)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_stage2))) 
              | (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_both_stages) 
                    & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count))) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                  & (0xdcULL == (0xdcULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                 & (((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                              >> 1U)) | (IData)((8ULL 
                                                 == 
                                                 (0xcULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))) 
                    & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                >> 1U)) | (IData)((8ULL 
                                                   == 
                                                   (0xcULL 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6163(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6163\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_337 
        = (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_336 
        = (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_335 
        = (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__inWriteback 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_4_valid 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___canAcceptCachedGrant_T_4 
        = ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
           | ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state)) 
              | (9U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__release_state))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_hit_way;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe_state_state 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_68;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
    } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_probe) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 1U;
    } else {
        if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_valid_masked) 
             & (0U != (0x1fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                                >> 2U))))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount = 3U;
        } else if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = (0x7fU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount) 
                            - (IData)(1U)));
        } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_276) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__lrscCount 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit)
                    ? 0x4fU : 0U);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_probe = 0U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6164(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6164\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_37 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_1_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_36 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_2_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_35 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_3_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_38 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_superpage_entries_0_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_u 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_u;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___GEN_34 
        = (IData)((0ULL != (0x60000ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_special_entry_data_0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_pte_ppn 
        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT____Vcellinp__r_pte_barrier__io_x_ppn;
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_sfence_valid) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__invalidated) 
              & (0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_0 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_valid_1 
        = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
             & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)) 
           | ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_17)) 
              & ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))
                  ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_0_s2_xcpt_ae_ld) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest))
                  : ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_dest)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6165(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6165\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count 
            = (3U & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)
                      ? ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count))
                      : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_d 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 7U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_a 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 6U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_g 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 5U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_u 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 4U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_x 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 3U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_w 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 2U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_r 
            = (1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                             >> 1U)));
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
    } else {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = (3U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count)));
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) {
                if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                        = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
                } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
                    }
                } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
                    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
                    }
                } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
                    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
                }
            } else if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___max_count_T) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count;
            }
        } else if ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 0U;
            }
        } else if ((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state))) {
            if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pte_cache_hit) {
                vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count 
                    = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___count_T_2;
            }
        } else if ((1U & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_18)))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__count = 2U;
        }
        if (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__state)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_141))) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count = 0U;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6166(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6166\n"); );
    // Body
    if ((1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11)))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_ae_final 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__ae;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_pf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_gf 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hr 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x52ULL == (0x52ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hw 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0xd4ULL == (0xd4ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__resp_hx 
            = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)) 
                     | (((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__pf)) 
                           & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__gf))) 
                          & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                         & (0x58ULL == (0x58ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                        & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                    >> 1U)) | (IData)(
                                                      (8ULL 
                                                       == 
                                                       (0xcULL 
                                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6167(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6167\n"); );
    // Body
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_switch) 
           | ((((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid)) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse)) 
               | (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176) 
                     & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2)))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2)
                  : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final 
        = (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__traverse))) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_176)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2))) 
           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_8)
               ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_stage2) 
                  & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___arb_io_out_bits_bits_vstage1)))
               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__stage2_final)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__l2_refill 
        = ((((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_valid) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___GEN_11))) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__success)) 
             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT___T_237)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_need_gpa))) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_vstage1)) 
               & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__r_req_stage2))) 
              | (((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__do_both_stages) 
                    & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_count))) 
                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__aux_pte_pte_v)) 
                  & (0xdcULL == (0xdcULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))) 
                 & (((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                              >> 1U)) | (IData)((8ULL 
                                                 == 
                                                 (0xcULL 
                                                  & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data)))) 
                    & ((IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data 
                                >> 1U)) | (IData)((8ULL 
                                                   == 
                                                   (0xcULL 
                                                    & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__ptw__DOT__mem_resp_data))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6168(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6168\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb___05FT_50) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tlb_r_refill_tag 
            = (0x7ffffffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_tlb_req_vaddr 
                                     >> 0xcU)));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__maybe_full) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt 
            = (1U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
                     [0U][2U] >> 0x11U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_opcode 
            = (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__InclusiveCache_inner_TLBuffer__DOT__bundleIn_0_d_q__DOT__ram_ext__DOT__Memory
               [0U][0U]);
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_corrupt 
            = (1U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_corrupt));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_coherent_jbar_in_d_bits_opcode 
            = (7U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1697 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1832) 
           & ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode)) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1784 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1832) 
           & ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_2)) 
              & (6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT___T_1701 
        = ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_opcode)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_valid_d) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_latch_bypass 
        = (1U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___s1_valid_T)) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_ready)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___l2_auto_in_d_bits_data 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_bypass)
            ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_bypass_data_REG)
                ? vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wdat_data
                : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_bypass_data_REG_1)
            : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT___queue_io_deq_bits_data);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_wadr_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_full) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s4_need_bs));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_latch) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s3_need_bs 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_need_pb;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_beat 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT___sourceD_io_bs_radr_bits_beat;
    }
    vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_last))) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_valid) 
                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6169(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6169\n"); );
    // Body
    if (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy)) 
         & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_valid))) {
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_0;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_2 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_2;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_opcode 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_opcode;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_param 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_param;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_size 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_size;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_source 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_source;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_offset 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_offset;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_put 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_put;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_set 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_set;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_sink 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__schedule_d_bits_sink;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_way 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_way;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_bad 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_bad;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_latch) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__busy) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_0;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_2 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_prio_2;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_opcode 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_opcode;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_param 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_param;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_size 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_size;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_source 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_source;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_put;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_set 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_set;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_sink 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_sink;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_way 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_way;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_bad 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s1_req_reg_bad;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_0;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_prio_2 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_prio_2;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_opcode 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_opcode;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_param 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_param;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_size 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_size;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_source 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_source;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_put 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_put;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_set 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_set;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_sink 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__schedule_d_bits_sink;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_way 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__directory__io_write_bits_way;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceD__DOT__s2_req_bad 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT____Vcellinp__sourceD__io_req_bits_bad;
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6170(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6170\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT___T_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_in_w_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT___in_w_deq_io_deq_valid) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT____VdfgTmp_h78c22a9c__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT____Vcellinp__in_w_deq__io_deq_ready 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4buf_auto_in_w_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT____VdfgTmp_h78c22a9c__0));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_3 
        = (0xfU & (~ (((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3)) 
                       | ((4U & ((0x7ffffffcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_7) 
                                                 >> 1U)) 
                                 | (0xfffffffcU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3)))) 
                          | ((2U & ((0x7ffffffeU & 
                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_11) 
                                      >> 1U)) | (0xfffffffeU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3)))) 
                             | (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_11) 
                                       >> 1U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_7) 
                                                  >> 3U) 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_3))))))) 
                      & (((IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_11)))) 
                          << 3U) | ((4U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_12) 
                                            << 2U) 
                                           | (0xfffffffcU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_11) 
                                                 << 1U)))) 
                                    | ((2U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_e_valid) 
                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_e_valid) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_11))) 
                                              << 1U)) 
                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_e_valid) 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_e_valid) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_12)))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__do_enq 
        = ((~ ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
               & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT____Vcellinp__deq_1__io_deq_ready))) 
           & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4frag__DOT__deq_1__DOT__maybe_full)) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT___axi4xbar_auto_out_aw_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__freeOH 
        = (0x1ffffffffULL & ((1ULL | (0x3fffffffeULL 
                                      & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_15 
                                             | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT___freeOH_T_15 
                                                << 0x20U))) 
                                         << 1U))) & 
                             (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__requests__DOT__used)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6171(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6171\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__a_d_ext 
        = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_d_0_data 
            & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__wide_mask) 
           | (((QData)((IData)((0xffU & (- (IData)((IData)(
                                                           (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_6) 
                                                             >> 3U) 
                                                            | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___signext_d_T_24)))))))) 
               << 0x38U) | (((QData)((IData)((0xffU 
                                              & (- (IData)(
                                                           (1U 
                                                            & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_6) 
                                                                >> 2U) 
                                                               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_5)))))))) 
                             << 0x30U) | (((QData)((IData)(
                                                           (0xffU 
                                                            & (- (IData)(
                                                                         (1U 
                                                                          & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_6) 
                                                                              >> 1U) 
                                                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_2)))))))) 
                                           << 0x28U) 
                                          | (((QData)((IData)(
                                                              (0xffU 
                                                               & (- (IData)(
                                                                            (1U 
                                                                             & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_6))))))) 
                                              << 0x20U) 
                                             | (QData)((IData)(
                                                               (((- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___signext_d_T_24))) 
                                                                 << 0x18U) 
                                                                | ((0xff0000U 
                                                                    & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_5)))) 
                                                                       << 0x10U)) 
                                                                   | (0xff00U 
                                                                      & ((- (IData)(
                                                                                (1U 
                                                                                & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_2)))) 
                                                                         << 8U)))))))))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_history)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_history)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_history)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___frontend_io_cpu_resp_bits_btb_bht_history 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__valid_0)
            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__fq__DOT__elts_0_btb_bht_history)
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__s2_btb_resp_bits_bht_history));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6172(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6172\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_1089 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__x1_a_q__DOT__do_deq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN_8 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_ready) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_earlyValid) 
              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___GEN) 
                 & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_out_a_valid 
        = ((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__beatsLeft))
            ? ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_earlyValid))
            : (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_0) 
                & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state))) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__state_1) 
                  & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_earlyValid))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__earlyWinner_1 
        = ((2U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__cam_s_0_state)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__out_1_earlyValid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT___T_55 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__d_first_counter)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT___T_1098 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_deq) 
           & ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT___T_1108 
        = ((6U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_bits_opcode)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__atomics__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer_1__DOT__bundleIn_0_d_q__DOT__do_enq 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___buffer_1_auto_out_d_ready) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___atomics_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__freeOH 
        = (0xffffffffffULL & ((1ULL | (0x1fffffffffeULL 
                                       & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_15 
                                              | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT___freeOH_T_15 
                                                 << 0x20U))) 
                                          << 1U))) 
                              & (~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkA__DOT__putbuffer__DOT__used)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_33 
        = (0x1ffU & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                       ? (~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                     >> 1U))) : 0x1ffU) 
                     & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                          ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                              << 8U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                         << 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip)))
                          : 0U) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                           >> 1U)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6173(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6173\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
        = (0xffffffffffffULL & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                                  ? (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                        >> 0xcU)) : 0xffffffffffffULL) 
                                & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                                     ? (0x80000000000ULL 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                                            << 0x2fU) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))))
                                     : 0ULL) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                >> 0xcU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           | ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
              | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((IData)(((0x10000000U == (0x1fc00000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_ha860a3f3__0))) 
              | (IData)((0x40000000U == (0xc0000000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6174(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6174\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ae_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_33 
        = (0x1ffU & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                       ? (~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                     >> 1U))) : 0x1ffU) 
                     & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                          ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                              << 8U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                         << 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip)))
                          : 0U) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                           >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
        = (0xffffffffffffULL & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                                  ? (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                        >> 0xcU)) : 0xffffffffffffULL) 
                                & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                                     ? (0x80000000000ULL 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                                            << 0x2fU) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))))
                                     : 0ULL) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                >> 0xcU))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6175(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6175\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           | ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
              | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((IData)(((0x10000000U == (0x1fc00000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_ha860a3f3__0))) 
              | (IData)((0x40000000U == (0xc0000000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_st));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6176(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6176\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ae_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_33 
        = (0x1ffU & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                       ? (~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                     >> 1U))) : 0x1ffU) 
                     & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                          ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                              << 8U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                         << 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip)))
                          : 0U) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                           >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
        = (0xffffffffffffULL & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                                  ? (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                        >> 0xcU)) : 0xffffffffffffULL) 
                                & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                                     ? (0x80000000000ULL 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                                            << 0x2fU) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))))
                                     : 0ULL) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                >> 0xcU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           | ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
              | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6177(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6177\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((IData)(((0x10000000U == (0x1fc00000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_ha860a3f3__0))) 
              | (IData)((0x40000000U == (0xc0000000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_ld));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6178(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6178\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ae_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_33 
        = (0x1ffU & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                       ? (~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                     >> 1U))) : 0x1ffU) 
                     & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                          ? (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_seip) 
                              << 8U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_stip) 
                                         << 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_mip_ssip)))
                          : 0U) | (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                           >> 1U)))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT___GEN_28 
        = (0xffffffffffffULL & (((3U == (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)))
                                  ? (~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                        >> 0xcU)) : 0xffffffffffffULL) 
                                & (((2U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))
                                     ? (0x80000000000ULL 
                                        | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_dmode)) 
                                            << 0x2fU) 
                                           | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__reg_bp_0_control_action))))
                                     : 0ULL) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_wdata 
                                                >> 0xcU))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__csr_wen 
        = ((6U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           | ((7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
              | (5U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_ret 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((IData)(((0x10000000U == (0x1fc00000U 
                                        & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)) 
                       & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_ha860a3f3__0))) 
              | (IData)((0x40000000U == (0xc0000000U 
                                         & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst)))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6179(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6179\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_call 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
                  >> 0x14U)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT__insn_break 
        = ((4U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT____Vcellinp__csr__io_rw_cmd)) 
           & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__wb_reg_inst 
               >> 0x14U) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__csr__DOT____VdfgTmp_h06912dea__0)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_97 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_99 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_pf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_101 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_103 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_gf_ld));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_105 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ae_st));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_109 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT___T_110) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_xcpt_ma_st));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6180(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6180\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___T_1193 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) 
           & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__a_first_counter_1)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT__same_cycle_resp 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__monitor__DOT___same_cycle_resp_T_1) 
           & ((0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__inDes__DOT__data_4 
                       >> 0xbU)) == (0xfU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                             >> 9U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_0 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut) 
              | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_0 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut) 
              | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_0 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut) 
              | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT___GEN_0 
        = ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__state)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__eOut) 
              | (7U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__div__DOT__count))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___out_w_valid_T_3 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT___queue_arw_deq_io_enq_ready) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__doneAW));
    if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en 
            = (0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_way));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state 
            = (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en 
            = (0xfU & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state 
            = (3U & (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                       ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r 
                          >> 0x14U) : 0U) | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                               ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_1 
                                                  >> 0x14U)
                                               : 0U) 
                                             | (((2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                  ? 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_2 
                                                  >> 0x14U)
                                                  : 0U) 
                                                | ((3U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                    ? 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_3 
                                                    >> 0x14U)
                                                    : 0U)))));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6181(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6181\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_tlb_req_vaddr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_114 
        = (IData)((0ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_115 
        = (IData)((2ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_116 
        = (IData)((4ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_117 
        = (IData)((6ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_112 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_113 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
              & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                         >> 2U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_word_bypass_shifted 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                              >> 0x20U))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6182(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6182\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | ((0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
              | (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->__VdfgTmp_h30b15d4e__0 = (IData)((4U == 
                                              (6U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1 
        = ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_324 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockUncachedGrant) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached 
        = ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en 
        = (0xfU & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state))
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_way)
                    : ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6183(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6183\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state 
        = (3U & ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state))
                  ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state)
                  : (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                       ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r 
                          >> 0x14U) : 0U) | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                               ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_1 
                                                  >> 0x14U)
                                               : 0U) 
                                             | (((2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                  ? 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_2 
                                                  >> 0x14U)
                                                  : 0U) 
                                                | ((3U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                    ? 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_3 
                                                    >> 0x14U)
                                                    : 0U))))));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_tlb_req_vaddr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_114 
        = (IData)((0ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_115 
        = (IData)((2ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_116 
        = (IData)((4ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_117 
        = (IData)((6ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_112 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6184(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6184\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_113 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
              & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                         >> 2U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_word_bypass_shifted 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                              >> 0x20U))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | ((0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
              | (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->__VdfgTmp_h5d94bcb9__0 = (IData)((4U == 
                                              (6U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1 
        = ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6185(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6185\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_324 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockUncachedGrant) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached 
        = ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT___buffer_auto_in_d_valid));
    if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en 
            = (0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_way));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state 
            = (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en 
            = (0xfU & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state 
            = (3U & (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                       ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r 
                          >> 0x14U) : 0U) | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                               ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_1 
                                                  >> 0x14U)
                                               : 0U) 
                                             | (((2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                  ? 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_2 
                                                  >> 0x14U)
                                                  : 0U) 
                                                | ((3U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                    ? 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_3 
                                                    >> 0x14U)
                                                    : 0U)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_tlb_req_vaddr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_114 
        = (IData)((0ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6186(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6186\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_115 
        = (IData)((2ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_116 
        = (IData)((4ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_117 
        = (IData)((6ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_112 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_113 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
              & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                         >> 2U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_word_bypass_shifted 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                              >> 0x20U))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | ((0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
              | (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6187(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6187\n"); );
    // Body
    vlSelf->__VdfgTmp_h6ee15b0a__0 = (IData)((4U == 
                                              (6U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1 
        = ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_324 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockUncachedGrant) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached 
        = ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_readys_2 
        = (0xfU & (~ (((8U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2)) 
                       | ((4U & ((0x7ffffffcU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_5) 
                                                 >> 1U)) 
                                 | (0xfffffffcU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2)))) 
                          | ((2U & ((0x7ffffffeU & 
                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_9) 
                                      >> 1U)) | (0xfffffffeU 
                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2)))) 
                             | (1U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_9) 
                                       >> 1U) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___readys_filter_T_5) 
                                                  >> 3U) 
                                                 | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT__readys_mask_2))))))) 
                      & (((IData)((0U != (5U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_9)))) 
                          << 3U) | ((4U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_10) 
                                            << 2U) 
                                           | (0xfffffffcU 
                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_9) 
                                                 << 1U)))) 
                                    | ((2U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_c_valid) 
                                               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_3_auto_tl_master_clock_xing_out_c_valid) 
                                                  | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_9))) 
                                              << 1U)) 
                                       | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_1_auto_tl_master_clock_xing_out_c_valid) 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___tile_prci_domain_2_auto_tl_master_clock_xing_out_c_valid) 
                                             | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__system_bus_xbar__DOT___GEN_10)))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6188(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6188\n"); );
    // Body
    if ((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state))) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en 
            = (0xfU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_way));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state 
            = (3U & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_hit_state_state));
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__metaArb_io_in_2_bits_way_en 
            = (0xfU & ((IData)(1U) << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_state_state 
            = (3U & (((0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                       ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r 
                          >> 0x14U) : 0U) | (((1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                               ? (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_1 
                                                  >> 0x14U)
                                               : 0U) 
                                             | (((2U 
                                                  == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                  ? 
                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_2 
                                                  >> 0x14U)
                                                  : 0U) 
                                                | ((3U 
                                                    == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_victim_way_r))
                                                    ? 
                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_meta_corrected_r_3 
                                                    >> 0x14U)
                                                    : 0U)))));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_clk_en) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_req_addr 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s0_tlb_req_vaddr;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_114 
        = (IData)((0ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_115 
        = (IData)((2ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_116 
        = (IData)((4ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_eq_117 
        = (IData)((6ULL == (6ULL & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6189(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6189\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_112 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((~ (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__atomics_a_mask_acc_113 
        = ((3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
           | ((2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_size)) 
              & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                         >> 2U))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__io_cpu_resp_bits_data_word_bypass_shifted 
        = ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_req_addr 
                          >> 2U))) ? (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data 
                                              >> 0x20U))
            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s2_data));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__monitor__DOT___T_2406 
        = ((6U != (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT___buffer_auto_in_d_valid) 
              & (0U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__monitor__DOT__d_first_counter_1))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsUncached 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | ((0U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
              | (2U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U]))));
    vlSelf->__VdfgTmp_h36b1ad63__0 = (IData)((4U == 
                                              (6U & 
                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_1_d_valid 
        = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT___buffer_auto_in_d_valid) 
           & (0x400U == (0x600U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__beats1 
        = ((1U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])
            ? (0x1ffU & (~ (0xffffffU & (((IData)(0xfffU) 
                                          << (0xfU 
                                              & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                                                 >> 5U))) 
                                         >> 3U)))) : 0U);
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6190(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6190\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT___T_324 
        = ((1U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__blockUncachedGrant) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__s1_valid)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__grantIsCached 
        = ((4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])) 
           | (5U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U])));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___tlMasterXbar_auto_in_0_d_valid 
        = ((~ (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
               >> 0xaU)) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT___buffer_auto_in_d_valid));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_4 
        = (7U & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_3) 
                  >> 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sinkC__DOT__putbuffer__DOT___GEN_3)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__do_enq 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full)) 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__maybe_full) 
              & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iready)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___subsystem_l2_wrapper_auto_l2_ctl_in_a_ready 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__maybe_full)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_iready));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_out_sig_T_1 
        = (0xfffffffffffffULL & ((0U == (0x7ffU & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                           >> 0x34U))))
                                  ? (0xffffffffffffeULL 
                                     & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                         << ((1U & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                            >> 0x33U)))
                                              ? 0U : 
                                             ((1U & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                             >> 0x32U)))
                                               ? 1U
                                               : ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                              >> 0x31U)))
                                                   ? 2U
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0x30U)))
                                                    ? 3U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0x2fU)))
                                                     ? 4U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0x2eU)))
                                                      ? 5U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                  >> 0x2dU)))
                                                       ? 6U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                   >> 0x2cU)))
                                                        ? 7U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                    >> 0x2bU)))
                                                         ? 8U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                     >> 0x2aU)))
                                                          ? 9U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                      >> 0x29U)))
                                                           ? 0xaU
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                       >> 0x28U)))
                                                            ? 0xbU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                        >> 0x27U)))
                                                             ? 0xcU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                         >> 0x26U)))
                                                              ? 0xdU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                          >> 0x25U)))
                                                               ? 0xeU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                           >> 0x24U)))
                                                                ? 0xfU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                            >> 0x23U)))
                                                                 ? 0x10U
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                             >> 0x22U)))
                                                                  ? 0x11U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                              >> 0x21U)))
                                                                   ? 0x12U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                               >> 0x20U)))
                                                                    ? 0x13U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1fU)))
                                                                     ? 0x14U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1eU)))
                                                                      ? 0x15U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1dU)))
                                                                       ? 0x16U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1cU)))
                                                                        ? 0x17U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1bU)))
                                                                         ? 0x18U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1aU)))
                                                                          ? 0x19U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x19U)))
                                                                           ? 0x1aU
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x18U)))
                                                                            ? 0x1bU
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x17U)))
                                                                             ? 0x1cU
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x16U)))
                                                                              ? 0x1dU
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x15U)))
                                                                               ? 0x1eU
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x14U)))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x13U)))
                                                                                 ? 0x20U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x12U)))
                                                                                 ? 0x21U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x11U)))
                                                                                 ? 0x22U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x10U)))
                                                                                 ? 0x23U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xfU)))
                                                                                 ? 0x24U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xeU)))
                                                                                 ? 0x25U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xdU)))
                                                                                 ? 0x26U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xcU)))
                                                                                 ? 0x27U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xbU)))
                                                                                 ? 0x28U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xaU)))
                                                                                 ? 0x29U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 9U)))
                                                                                 ? 0x2aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 8U)))
                                                                                 ? 0x2bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 7U)))
                                                                                 ? 0x2cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 6U)))
                                                                                 ? 0x2dU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 5U)))
                                                                                 ? 0x2eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 4U)))
                                                                                 ? 0x2fU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 3U)))
                                                                                 ? 0x30U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 2U)))
                                                                                 ? 0x31U
                                                                                 : 
                                                                                (0x32U 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 1U)))))))))))))))))))))))))))))))))))))))))))))))))))))))) 
                                        << 1U)) : vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6191(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6191\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_rawIn_subnormFract_T_2 
        = (0x3fffffffffffffULL & ((QData)((IData)((0x7fffffU 
                                                   & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2)))) 
                                  << ((1U & (IData)(
                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                     >> 0x16U)))
                                       ? 0U : ((1U 
                                                & (IData)(
                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                           >> 0x15U)))
                                                ? 1U
                                                : (
                                                   (1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0x14U)))
                                                    ? 2U
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0x13U)))
                                                     ? 3U
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0x12U)))
                                                      ? 4U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                  >> 0x11U)))
                                                       ? 5U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                   >> 0x10U)))
                                                        ? 6U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                    >> 0xfU)))
                                                         ? 7U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                     >> 0xeU)))
                                                          ? 8U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                      >> 0xdU)))
                                                           ? 9U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                       >> 0xcU)))
                                                            ? 0xaU
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                        >> 0xbU)))
                                                             ? 0xbU
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                         >> 0xaU)))
                                                              ? 0xcU
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                          >> 9U)))
                                                               ? 0xdU
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                           >> 8U)))
                                                                ? 0xeU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                            >> 7U)))
                                                                 ? 0xfU
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                             >> 6U)))
                                                                  ? 0x10U
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                              >> 5U)))
                                                                   ? 0x11U
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                               >> 4U)))
                                                                    ? 0x12U
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 3U)))
                                                                     ? 0x13U
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 2U)))
                                                                      ? 0x14U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 1U)))
                                                                       ? 0x15U
                                                                       : 0x16U))))))))))))))))))))))));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__6192(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__6192\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT__mux_data_rawIn_adjustedExp 
        = (0xfffU & (((0U == (0x7ffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                >> 0x34U))))
                       ? (0xfc0U | ((1U & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                   >> 0x33U)))
                                     ? 0x3fU : ((1U 
                                                 & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                            >> 0x32U)))
                                                 ? 0x3eU
                                                 : 
                                                ((1U 
                                                  & (IData)(
                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                             >> 0x31U)))
                                                  ? 0x3dU
                                                  : 
                                                 ((1U 
                                                   & (IData)(
                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                              >> 0x30U)))
                                                   ? 0x3cU
                                                   : 
                                                  ((1U 
                                                    & (IData)(
                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                               >> 0x2fU)))
                                                    ? 0x3bU
                                                    : 
                                                   ((1U 
                                                     & (IData)(
                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                >> 0x2eU)))
                                                     ? 0x3aU
                                                     : 
                                                    ((1U 
                                                      & (IData)(
                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                 >> 0x2dU)))
                                                      ? 0x39U
                                                      : 
                                                     ((1U 
                                                       & (IData)(
                                                                 (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                  >> 0x2cU)))
                                                       ? 0x38U
                                                       : 
                                                      ((1U 
                                                        & (IData)(
                                                                  (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                   >> 0x2bU)))
                                                        ? 0x37U
                                                        : 
                                                       ((1U 
                                                         & (IData)(
                                                                   (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                    >> 0x2aU)))
                                                         ? 0x36U
                                                         : 
                                                        ((1U 
                                                          & (IData)(
                                                                    (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                     >> 0x29U)))
                                                          ? 0x35U
                                                          : 
                                                         ((1U 
                                                           & (IData)(
                                                                     (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                      >> 0x28U)))
                                                           ? 0x34U
                                                           : 
                                                          ((1U 
                                                            & (IData)(
                                                                      (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                       >> 0x27U)))
                                                            ? 0x33U
                                                            : 
                                                           ((1U 
                                                             & (IData)(
                                                                       (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                        >> 0x26U)))
                                                             ? 0x32U
                                                             : 
                                                            ((1U 
                                                              & (IData)(
                                                                        (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                         >> 0x25U)))
                                                              ? 0x31U
                                                              : 
                                                             ((1U 
                                                               & (IData)(
                                                                         (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                          >> 0x24U)))
                                                               ? 0x30U
                                                               : 
                                                              ((1U 
                                                                & (IData)(
                                                                          (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                           >> 0x23U)))
                                                                ? 0x2fU
                                                                : 
                                                               ((1U 
                                                                 & (IData)(
                                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                            >> 0x22U)))
                                                                 ? 0x2eU
                                                                 : 
                                                                ((1U 
                                                                  & (IData)(
                                                                            (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                             >> 0x21U)))
                                                                  ? 0x2dU
                                                                  : 
                                                                 ((1U 
                                                                   & (IData)(
                                                                             (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                              >> 0x20U)))
                                                                   ? 0x2cU
                                                                   : 
                                                                  ((1U 
                                                                    & (IData)(
                                                                              (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                               >> 0x1fU)))
                                                                    ? 0x2bU
                                                                    : 
                                                                   ((1U 
                                                                     & (IData)(
                                                                               (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1eU)))
                                                                     ? 0x2aU
                                                                     : 
                                                                    ((1U 
                                                                      & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1dU)))
                                                                      ? 0x29U
                                                                      : 
                                                                     ((1U 
                                                                       & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1cU)))
                                                                       ? 0x28U
                                                                       : 
                                                                      ((1U 
                                                                        & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1bU)))
                                                                        ? 0x27U
                                                                        : 
                                                                       ((1U 
                                                                         & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x1aU)))
                                                                         ? 0x26U
                                                                         : 
                                                                        ((1U 
                                                                          & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x19U)))
                                                                          ? 0x25U
                                                                          : 
                                                                         ((1U 
                                                                           & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x18U)))
                                                                           ? 0x24U
                                                                           : 
                                                                          ((1U 
                                                                            & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x17U)))
                                                                            ? 0x23U
                                                                            : 
                                                                           ((1U 
                                                                             & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x16U)))
                                                                             ? 0x22U
                                                                             : 
                                                                            ((1U 
                                                                              & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x15U)))
                                                                              ? 0x21U
                                                                              : 
                                                                             ((1U 
                                                                               & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x14U)))
                                                                               ? 0x20U
                                                                               : 
                                                                              ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x13U)))
                                                                                ? 0x1fU
                                                                                : 
                                                                               ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x12U)))
                                                                                 ? 0x1eU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x11U)))
                                                                                 ? 0x1dU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0x10U)))
                                                                                 ? 0x1cU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xfU)))
                                                                                 ? 0x1bU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xeU)))
                                                                                 ? 0x1aU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xdU)))
                                                                                 ? 0x19U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xcU)))
                                                                                 ? 0x18U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xbU)))
                                                                                 ? 0x17U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 0xaU)))
                                                                                 ? 0x16U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 9U)))
                                                                                 ? 0x15U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 8U)))
                                                                                 ? 0x14U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 7U)))
                                                                                 ? 0x13U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 6U)))
                                                                                 ? 0x12U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 5U)))
                                                                                 ? 0x11U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 4U)))
                                                                                 ? 0x10U
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 3U)))
                                                                                 ? 0xfU
                                                                                 : 
                                                                                ((1U 
                                                                                & (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 2U)))
                                                                                 ? 0xeU
                                                                                 : 
                                                                                (0x3fU 
                                                                                & (~ 
                                                                                (0x32U 
                                                                                | (1U 
                                                                                & (~ (IData)(
                                                                                (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                                                >> 1U))))))))))))))))))))))))))))))))))))))))))))))))))))))))))
                       : (0x7ffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                            >> 0x34U)))) 
                     + (0x400U | ((0U == (0x7ffU & (IData)(
                                                           (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__fpuOpt__DOT__ifpu__DOT___mux_data_T_2 
                                                            >> 0x34U))))
                                   ? 2U : 1U))));
}
