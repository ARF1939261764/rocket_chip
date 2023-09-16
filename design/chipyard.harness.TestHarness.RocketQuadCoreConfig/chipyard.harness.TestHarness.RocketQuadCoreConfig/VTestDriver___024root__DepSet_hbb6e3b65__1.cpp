// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VTestDriver.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "VTestDriver___024root.h"

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4339(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4339\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4340(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4340\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4341(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4341\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4342(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4342\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4343(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4343\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4344(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4344\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4345(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4345\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4346(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4346\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4347(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4347\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4348(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4348\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4349(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4349\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4350(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4350\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_31__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_30__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_29__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_28__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4351(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4351\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_27__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_26__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_25__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_24__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_23__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4352(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4352\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_22__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_21__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_20__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_19__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_18__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4353(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4353\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_17__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_16__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_15__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_14__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_13__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4354(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4354\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_12__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_11__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_10__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_9__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_8__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4355(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4355\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4356(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4356\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4357(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4357\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4358(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4358\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4359(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4359\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fff0c2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x38U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_7__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4360(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4360\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2fcc677__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x30U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_6__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e09268__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x28U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_5__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2e4e29d__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x20U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_4__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc2ef0047__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x18U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc21351d2__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 0x10U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4361(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4361\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25020ed__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0xffU & (IData)((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata 
                                >> 8U)));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT____VdfgTmp_hc25cf078__0) 
            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_way_en)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0xffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_wdata));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__data__DOT__data_arrays_0__DOT__data_arrays_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = (0x1ffU & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__data__io_req_bits_addr) 
                         >> 3U));
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT____Vlvbound_hd50c7b2d__0[0U] 
            = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                          [0U][3U])) 
                          << 0x2cU) | (((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][2U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][1U])) 
                                        >> 0x14U)))) 
                << 0xaU) | ((0x3feU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                       [0U][0U] >> 0x14U)) 
                            | (4U == (7U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                      [0U][0U]))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT____Vlvbound_hd50c7b2d__0[1U] 
            = (((IData)((((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                          [0U][3U])) 
                          << 0x2cU) | (((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][2U])) 
                                        << 0xcU) | 
                                       ((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][1U])) 
                                        >> 0x14U)))) 
                >> 0x16U) | ((IData)(((((QData)((IData)(
                                                        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                        [0U][3U])) 
                                        << 0x2cU) | 
                                       (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][2U])) 
                                         << 0xcU) | 
                                        ((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                         [0U][1U])) 
                                         >> 0x14U))) 
                                      >> 0x20U)) << 0xaU));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT____Vlvbound_hd50c7b2d__0[2U] 
            = ((0x30000000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                               [0U][0U] << 0x16U)) 
               | ((0xffc0000U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                 [0U][0U] << 0xaU)) 
                  | ((0x3fc00U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                  [0U][1U] >> 2U)) 
                     | ((IData)(((((QData)((IData)(
                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                   [0U][3U])) 
                                   << 0x2cU) | (((QData)((IData)(
                                                                 vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                 [0U][2U])) 
                                                 << 0xcU) 
                                                | ((QData)((IData)(
                                                                   vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__ram_ext__DOT__Memory
                                                                   [0U][1U])) 
                                                   >> 0x14U))) 
                                 >> 0x20U)) >> 0x16U))));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT____Vlvbound_hd50c7b2d__0[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT____Vlvbound_hd50c7b2d__0[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT____Vlvbound_hd50c7b2d__0[2U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__out_back__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4362(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4362\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_hfd57977f__0) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_hfd57977f__0) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_hfd57977f__0) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | (IData)(vlSelf->__VdfgTmp_hfd57977f__0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_hc75f4584__0) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_hc75f4584__0) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4363(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4363\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_hc75f4584__0) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | (IData)(vlSelf->__VdfgTmp_hc75f4584__0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_h7486c9c0__0) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_h7486c9c0__0) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_h7486c9c0__0) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | (IData)(vlSelf->__VdfgTmp_h7486c9c0__0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4364(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4364\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_h01f9d1e7__0) 
               >> 3U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_h01f9d1e7__0) 
               >> 2U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | ((IData)(vlSelf->__VdfgTmp_h01f9d1e7__0) 
               >> 1U)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__resetting) 
            | (IData)(vlSelf->__VdfgTmp_h01f9d1e7__0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0_RW0_wdata;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT__tag_array__DOT__tag_array_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__dcache__DOT____Vcellinp__tag_array__RW0_addr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_ar_deq__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_ar_deq__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_ar_deq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_ar_deq__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_11__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_10__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4365(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4365\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_9__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_8__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_7__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_6__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_5__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_4__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_3__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_2__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_1__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue_12__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4yank__DOT__Queue__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4366(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4366\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_aw_deq__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_ar_deq__DOT____Vcellinp__ram_ext__W0_data;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_aw_deq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__axi4buf__DOT__x1_aw_deq__DOT__enq_ptr_value;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_fifoId 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT___GEN_11)) 
           & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__cam_a_0_fifoId));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[2U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[3U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_b_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[2U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[3U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_b_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[2U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[3U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[2U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0[3U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_b_q__DOT____Vcellinp__ram_ext__W0_data[3U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_b_q__DOT__enq_ptr_value;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_4 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_deq) 
            & (0x800U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_4));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_3 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_deq) 
            & (0x600U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_3));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_2 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_deq) 
            & (0x400U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_2));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_0 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_deq) 
            & (0U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_0));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4367(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4367\n"); );
    // Init
    VlWide<3>/*95:0*/ __Vtemp_hf4ca9094__0;
    VlWide<3>/*95:0*/ __Vtemp_h4ebecc85__0;
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_1 
        = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT__do_deq) 
            & (0x200U == (0xe00U & vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U]))) 
           | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__wSourceVec_1));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__do_enq) {
        __Vtemp_hf4ca9094__0[1U] = (((IData)((((QData)((IData)(
                                                               ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7_R0_data)
                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_7)))) 
                                               << 0x38U) 
                                              | (((QData)((IData)(
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6_R0_data)
                                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_6)))) 
                                                  << 0x30U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5_R0_data)
                                                                       : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_5)))) 
                                                     << 0x28U) 
                                                    | (((QData)((IData)(
                                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4_R0_data)
                                                                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_4)))) 
                                                        << 0x20U) 
                                                       | (QData)((IData)(
                                                                         ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3_R0_data)
                                                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_3)) 
                                                                           << 0x18U) 
                                                                          | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2_R0_data)
                                                                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_2)) 
                                                                              << 0x10U) 
                                                                             | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_1)) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_0)))))))))))) 
                                     >> 0x1cU) | ((IData)(
                                                          ((((QData)((IData)(
                                                                             ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                               ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7_R0_data)
                                                                               : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_7)))) 
                                                             << 0x38U) 
                                                            | (((QData)((IData)(
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_6)))) 
                                                                << 0x30U) 
                                                               | (((QData)((IData)(
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_5)))) 
                                                                   << 0x28U) 
                                                                  | (((QData)((IData)(
                                                                                ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_4)))) 
                                                                      << 0x20U) 
                                                                     | (QData)((IData)(
                                                                                ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_3)) 
                                                                                << 0x18U) 
                                                                                | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_2)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_1)) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_0))))))))))) 
                                                           >> 0x20U)) 
                                                  << 4U));
        __Vtemp_h4ebecc85__0[2U] = ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__r_sel1)
                                       ? 0U : 3U) << 4U) 
                                    | ((IData)(((((QData)((IData)(
                                                                  ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7_R0_data)
                                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_7)))) 
                                                  << 0x38U) 
                                                 | (((QData)((IData)(
                                                                     ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6_R0_data)
                                                                       : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_6)))) 
                                                     << 0x30U) 
                                                    | (((QData)((IData)(
                                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5_R0_data)
                                                                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_5)))) 
                                                        << 0x28U) 
                                                       | (((QData)((IData)(
                                                                           ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                             ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4_R0_data)
                                                                             : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_4)))) 
                                                           << 0x20U) 
                                                          | (QData)((IData)(
                                                                            ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3_R0_data)
                                                                                : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_3)) 
                                                                              << 0x18U) 
                                                                             | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_2)) 
                                                                                << 0x10U) 
                                                                                | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_1)) 
                                                                                << 8U) 
                                                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0_R0_data)
                                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_0))))))))))) 
                                                >> 0x20U)) 
                                       >> 0x1cU));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (((IData)((((QData)((IData)(((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                            ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_7_R0_data)
                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_7)))) 
                          << 0x38U) | (((QData)((IData)(
                                                        ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                          ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_6_R0_data)
                                                          : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_6)))) 
                                        << 0x30U) | 
                                       (((QData)((IData)(
                                                         ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                           ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_5_R0_data)
                                                           : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_5)))) 
                                         << 0x28U) 
                                        | (((QData)((IData)(
                                                            ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                              ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_4_R0_data)
                                                              : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_4)))) 
                                            << 0x20U) 
                                           | (QData)((IData)(
                                                             ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                 ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_3_R0_data)
                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_3)) 
                                                               << 0x18U) 
                                                              | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_2_R0_data)
                                                                    : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_2)) 
                                                                  << 0x10U) 
                                                                 | ((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                       ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_1_R0_data)
                                                                       : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_1)) 
                                                                     << 8U) 
                                                                    | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_REG)
                                                                        ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__mem__DOT__mem_ext__DOT__mem_0_0_R0_data)
                                                                        : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__rdata_r_0)))))))))))) 
                << 4U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__r_id));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_ext__DOT__Memory__v0[1U] 
            = __Vtemp_hf4ca9094__0[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_ext__DOT__Memory__v0[2U] 
            = (0x80U | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__srams__DOT__r_echo_real_last) 
                         << 6U) | __Vtemp_h4ebecc85__0[2U]));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__mmio_mem__DOT__axi4buf__DOT__bundleIn_0_r_deq__DOT__enq_ptr_value;
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_req_ready)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_perf_grant))) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_dmem_req_valid)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_nack)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_req_ready)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_perf_grant))) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_dmem_req_valid)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_nack)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_req_ready)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_perf_grant))) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___core_io_dmem_req_valid)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_nack)));
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4368(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4368\n"); );
    // Body
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked 
        = (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_req_ready)) 
            & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_perf_grant))) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__dcache_blocked_blocked) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_dmem_req_valid)) 
              | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___dcacheArb_io_requestor_1_s2_nack)));
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (4U | (0x7e0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[0U] 
                               >> 1U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory__v0[1U] = 0U;
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory__v0[2U] = 0U;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q_1__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_19__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_18__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_17__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_16__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_15__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4369(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4369\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_14__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_13__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_12__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_11__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_10__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_9__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_8__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4370(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4370\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_7__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_6__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_5__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_4__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_3__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_2__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue_1__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4371(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4371\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0 
            = (0xffU & ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                         [0U][2U] << 3U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory
                                            [0U][1U] 
                                            >> 0x1dU)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT____Vlvbound_h864d90d9__0;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__axi4yank__DOT__Queue__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT____Vlvbound_h743ac6ca__0[0U] 
            = (IData)((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0)
                         ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U])) 
                             << 0x34U) | (((QData)((IData)(
                                                           vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[2U])) 
                                           << 0x14U) 
                                          | ((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U])) 
                                             >> 0xcU)))
                         : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1)
                                     ? (((QData)((IData)(
                                                         vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U])) 
                                         << 0x2cU) 
                                        | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[2U])) 
                                            << 0xcU) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U])) 
                                              >> 0x14U)))
                                     : 0ULL)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT____Vlvbound_h743ac6ca__0[1U] 
            = (IData)(((((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_0)
                          ? (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[3U])) 
                              << 0x34U) | (((QData)((IData)(
                                                            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[2U])) 
                                            << 0x14U) 
                                           | ((QData)((IData)(
                                                              vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[1U])) 
                                              >> 0xcU)))
                          : 0ULL) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__muxStateEarly_1)
                                      ? (((QData)((IData)(
                                                          vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[3U])) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[2U])) 
                                             << 0xcU) 
                                            | ((QData)((IData)(
                                                               vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceA__DOT__io_a_q__DOT___ram_ext_R0_data[1U])) 
                                               >> 0x14U)))
                                      : 0ULL)) >> 0x20U));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT____Vlvbound_h743ac6ca__0[2U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__out_w_bits_last) 
                << 8U) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_mask));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT____Vlvbound_h743ac6ca__0[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT____Vlvbound_h743ac6ca__0[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT____Vlvbound_h743ac6ca__0[2U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__deq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h086b0097__0[0U] 
            = (IData)((0x40800000000000ULL | (((QData)((IData)(
                                                               ((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                                                 ? 3U
                                                                 : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (~ 
                                                                      (0x7fffU 
                                                                       & (((IData)(0x7ffU) 
                                                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                          >> 3U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                     << 4U) 
                                                    | (QData)((IData)(
                                                                      (0xfU 
                                                                       & (IData)(
                                                                                (0x9876543210ULL 
                                                                                >> 
                                                                                (0x3fU 
                                                                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                                << 2U))))))))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h086b0097__0[1U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                << 0x1dU) | (IData)(((0x40800000000000ULL 
                                      | (((QData)((IData)(
                                                          ((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size))
                                                            ? 3U
                                                            : (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)))) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (~ 
                                                                 (0x7fffU 
                                                                  & (((IData)(0x7ffU) 
                                                                      << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size)) 
                                                                     >> 3U)))))) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_address)) 
                                                << 4U) 
                                               | (QData)((IData)(
                                                                 (0xfU 
                                                                  & (IData)(
                                                                            (0x9876543210ULL 
                                                                             >> 
                                                                             (0x3fU 
                                                                              & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                                                                << 2U))))))))))) 
                                     >> 0x20U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h086b0097__0[2U] 
            = ((0x20U & ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT____VdfgTmp_he7c815ba__0)) 
                         << 5U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_source) 
                                     << 1U) | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT___cork_auto_out_a_bits_size) 
                                               >> 3U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h086b0097__0[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h086b0097__0[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h086b0097__0[2U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_mbus__DOT__coupler_to_memory_controller_port_named_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory__v0[0U] 
            = (6U | (0x7e0U & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__inclusive_cache_bank_sched__DOT__sourceC__DOT__queue__DOT___ram_ext_R0_data[0U] 
                               >> 1U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory__v0[1U] = 0U;
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory__v0[2U] = 0U;
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__cork__DOT__q__DOT__enq_ptr_value;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4372(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4372\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                   >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT____VdfgTmp_hf8d03f08__0)))) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_5) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & ((~ (IData)((0x1fffffffffULL 
                                         & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                            >> 2U)))) 
                             ^ ((3U & (~ (IData)((0xfffffffULL 
                                                  & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                                     >> 0xbU))))) 
                                ^ (0x1c0U & (((IData)(0xddU) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history)) 
                                             << 1U)))));
        } else {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 0U;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr));
        }
    }
    if ((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                   >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT____VdfgTmp_hf8d03f08__0)))) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_5) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & ((~ (IData)((0x1fffffffffULL 
                                         & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                            >> 2U)))) 
                             ^ ((3U & (~ (IData)((0xfffffffULL 
                                                  & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                                     >> 0xbU))))) 
                                ^ (0x1c0U & (((IData)(0xddU) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history)) 
                                             << 1U)))));
        } else {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 0U;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4373(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4373\n"); );
    // Body
    if ((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                   >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT____VdfgTmp_hf8d03f08__0)))) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_5) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & ((~ (IData)((0x1fffffffffULL 
                                         & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                            >> 2U)))) 
                             ^ ((3U & (~ (IData)((0xfffffffULL 
                                                  & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                                     >> 0xbU))))) 
                                ^ (0x1c0U & (((IData)(0xddU) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history)) 
                                             << 1U)))));
        } else {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 0U;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr));
        }
    }
    if ((1U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr) 
                   >> 9U)) | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT____VdfgTmp_hf8d03f08__0)))) {
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT___GEN_5) {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_br_taken;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & ((~ (IData)((0x1fffffffffULL 
                                         & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                            >> 2U)))) 
                             ^ ((3U & (~ (IData)((0xfffffffULL 
                                                  & ((~ vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT___core_io_imem_btb_update_bits_br_pc) 
                                                     >> 0xbU))))) 
                                ^ (0x1c0U & (((IData)(0xddU) 
                                              * (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__core__DOT__mem_reg_btb_resp_bht_history)) 
                                             << 1U)))));
        } else {
            vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 0U;
            vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__table_ext__DOT__Memory__v0 
                = (0x1ffU & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__btb__DOT__reset_waddr));
        }
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4374(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4374\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__do_enq) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h92dba452__0[0U] 
            = (IData)((0x40800000000000ULL | (((QData)((IData)(
                                                               ((2U 
                                                                 < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size))
                                                                 ? 3U
                                                                 : 
                                                                (7U 
                                                                 & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size))))) 
                                               << 0x2cU) 
                                              | (((QData)((IData)(
                                                                  (0xffU 
                                                                   & (~ 
                                                                      (0x7fffffU 
                                                                       & (((IData)(0x7ffU) 
                                                                           << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size)) 
                                                                          >> 3U)))))) 
                                                  << 0x24U) 
                                                 | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_address)) 
                                                     << 5U) 
                                                    | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)))))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h92dba452__0[1U] 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size) 
                << 0x1dU) | (IData)(((0x40800000000000ULL 
                                      | (((QData)((IData)(
                                                          ((2U 
                                                            < (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size))
                                                            ? 3U
                                                            : 
                                                           (7U 
                                                            & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size))))) 
                                          << 0x2cU) 
                                         | (((QData)((IData)(
                                                             (0xffU 
                                                              & (~ 
                                                                 (0x7fffffU 
                                                                  & (((IData)(0x7ffU) 
                                                                      << (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size)) 
                                                                     >> 3U)))))) 
                                             << 0x24U) 
                                            | (((QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_address)) 
                                                << 5U) 
                                               | (QData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__out_arw_bits_id)))))) 
                                     >> 0x20U)));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h92dba452__0[2U] 
            = ((0x40U & ((~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_opcode) 
                             >> 2U)) << 6U)) | (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_source) 
                                                 << 1U) 
                                                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT___system_bus_xbar_auto_out_2_a_bits_size) 
                                                   >> 3U)));
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h92dba452__0[0U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[1U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h92dba452__0[1U];
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0[2U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT____Vlvbound_h92dba452__0[2U];
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__queue_arw_deq__DOT__ram_ext__DOT__Memory__v0 = 1U;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4375(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4375\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_3__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4376(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4376\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_2__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4377(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4377\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4378(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4378\n"); );
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain_1__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[2U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_1__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
}

extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h902eb634_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4379(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4379\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hd83b54bd__0;
    VlWide<17>/*543:0*/ __Vtemp_hf0c1d232__0;
    // Body
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (3U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_3__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (2U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_2__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (1U == (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_1__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram_RW_0_w_en) 
         & (~ (IData)((0U != (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__repl_way_v0)))))) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[1U] 
                << 0x11U) | (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__buffer__DOT__bundleIn_0_d_q__DOT___ram_ext_R0_data[0U] 
                             >> 0xfU));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT__data_arrays_0__DOT__data_arrays_0_0_ext__DOT__mem_0_0__DOT__ram__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__tile_prci_domain__DOT__tile_reset_domain_tile__DOT__frontend__DOT__icache__DOT____Vcellinp__data_arrays_0__RW0_addr;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__do_enq) {
        vlSelf->__Vdlyvval__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 
            = (0xffU & (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__buffer__DOT__x1_a_q__DOT___ram_ext_R0_data[1U] 
                        >> 0x16U));
        vlSelf->__Vdlyvset__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 = 1U;
        vlSelf->__Vdlyvdim0__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__ram_ext__DOT__Memory__v0 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__txq__DOT__enq_ptr_value;
    }
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        __Vtemp_hd83b54bd__0[1U] = VTestDriver__ConstPool__CONST_h902eb634_0[1U];
        __Vtemp_hd83b54bd__0[2U] = VTestDriver__ConstPool__CONST_h902eb634_0[2U];
        __Vtemp_hd83b54bd__0[3U] = VTestDriver__ConstPool__CONST_h902eb634_0[3U];
        __Vtemp_hd83b54bd__0[4U] = VTestDriver__ConstPool__CONST_h902eb634_0[4U];
        __Vtemp_hd83b54bd__0[5U] = VTestDriver__ConstPool__CONST_h902eb634_0[5U];
        __Vtemp_hd83b54bd__0[6U] = VTestDriver__ConstPool__CONST_h902eb634_0[6U];
        __Vtemp_hd83b54bd__0[7U] = VTestDriver__ConstPool__CONST_h902eb634_0[7U];
        __Vtemp_hd83b54bd__0[8U] = VTestDriver__ConstPool__CONST_h902eb634_0[8U];
        __Vtemp_hd83b54bd__0[9U] = VTestDriver__ConstPool__CONST_h902eb634_0[9U];
        __Vtemp_hd83b54bd__0[0xaU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xaU];
        __Vtemp_hd83b54bd__0[0xbU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xbU];
        __Vtemp_hd83b54bd__0[0xcU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xcU];
        __Vtemp_hd83b54bd__0[0xdU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xdU];
        __Vtemp_hd83b54bd__0[0xeU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xeU];
        __Vtemp_hd83b54bd__0[0xfU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xfU];
        __Vtemp_hd83b54bd__0[0x10U] = VTestDriver__ConstPool__CONST_h902eb634_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h902eb634_0[0U];
        __Vtemp_hf0c1d232__0[1U] = VTestDriver__ConstPool__CONST_h902eb634_0[1U];
        __Vtemp_hf0c1d232__0[2U] = VTestDriver__ConstPool__CONST_h902eb634_0[2U];
        __Vtemp_hf0c1d232__0[3U] = VTestDriver__ConstPool__CONST_h902eb634_0[3U];
        __Vtemp_hf0c1d232__0[4U] = VTestDriver__ConstPool__CONST_h902eb634_0[4U];
        __Vtemp_hf0c1d232__0[5U] = VTestDriver__ConstPool__CONST_h902eb634_0[5U];
        __Vtemp_hf0c1d232__0[6U] = VTestDriver__ConstPool__CONST_h902eb634_0[6U];
        __Vtemp_hf0c1d232__0[7U] = VTestDriver__ConstPool__CONST_h902eb634_0[7U];
        __Vtemp_hf0c1d232__0[8U] = VTestDriver__ConstPool__CONST_h902eb634_0[8U];
        __Vtemp_hf0c1d232__0[9U] = VTestDriver__ConstPool__CONST_h902eb634_0[9U];
        __Vtemp_hf0c1d232__0[0xaU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xaU];
        __Vtemp_hf0c1d232__0[0xbU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xbU];
        __Vtemp_hf0c1d232__0[0xcU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xcU];
        __Vtemp_hf0c1d232__0[0xdU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xdU];
        __Vtemp_hf0c1d232__0[0xeU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xeU];
        __Vtemp_hf0c1d232__0[0xfU] = VTestDriver__ConstPool__CONST_h902eb634_0[0xfU];
        __Vtemp_hf0c1d232__0[0x10U] = VTestDriver__ConstPool__CONST_h902eb634_0[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0U] 
            = VTestDriver__ConstPool__CONST_h902eb634_0[0U];
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value = 0U;
    } else {
        __Vtemp_hd83b54bd__0[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[1U];
        __Vtemp_hd83b54bd__0[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[2U];
        __Vtemp_hd83b54bd__0[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[3U];
        __Vtemp_hd83b54bd__0[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[4U];
        __Vtemp_hd83b54bd__0[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[5U];
        __Vtemp_hd83b54bd__0[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[6U];
        __Vtemp_hd83b54bd__0[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[7U];
        __Vtemp_hd83b54bd__0[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[8U];
        __Vtemp_hd83b54bd__0[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[9U];
        __Vtemp_hd83b54bd__0[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xaU];
        __Vtemp_hd83b54bd__0[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xbU];
        __Vtemp_hd83b54bd__0[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xcU];
        __Vtemp_hd83b54bd__0[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xdU];
        __Vtemp_hd83b54bd__0[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xeU];
        __Vtemp_hd83b54bd__0[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xfU];
        __Vtemp_hd83b54bd__0[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0U];
        __Vtemp_hf0c1d232__0[1U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[1U];
        __Vtemp_hf0c1d232__0[2U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[2U];
        __Vtemp_hf0c1d232__0[3U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[3U];
        __Vtemp_hf0c1d232__0[4U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[4U];
        __Vtemp_hf0c1d232__0[5U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[5U];
        __Vtemp_hf0c1d232__0[6U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[6U];
        __Vtemp_hf0c1d232__0[7U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[7U];
        __Vtemp_hf0c1d232__0[8U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[8U];
        __Vtemp_hf0c1d232__0[9U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[9U];
        __Vtemp_hf0c1d232__0[0xaU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xaU];
        __Vtemp_hf0c1d232__0[0xbU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xbU];
        __Vtemp_hf0c1d232__0[0xcU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xcU];
        __Vtemp_hf0c1d232__0[0xdU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xdU];
        __Vtemp_hf0c1d232__0[0xeU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xeU];
        __Vtemp_hf0c1d232__0[0xfU] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xfU];
        __Vtemp_hf0c1d232__0[0x10U] = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0x10U];
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0U] 
            = vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0U];
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick)
                ? 0U : (0x1ffU & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__int_rtc_tick_c_value))));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_hd83b54bd__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_hd83b54bd__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_hd83b54bd__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_hd83b54bd__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_hd83b54bd__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_hd83b54bd__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_hd83b54bd__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_hd83b54bd__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_hd83b54bd__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_hd83b54bd__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_hd83b54bd__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_hd83b54bd__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_hd83b54bd__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_hd83b54bd__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_hd83b54bd__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_hd83b54bd__0[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[1U] 
        = __Vtemp_hf0c1d232__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[2U] 
        = __Vtemp_hf0c1d232__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[3U] 
        = __Vtemp_hf0c1d232__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[4U] 
        = __Vtemp_hf0c1d232__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[5U] 
        = __Vtemp_hf0c1d232__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[6U] 
        = __Vtemp_hf0c1d232__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[7U] 
        = __Vtemp_hf0c1d232__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[8U] 
        = __Vtemp_hf0c1d232__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[9U] 
        = __Vtemp_hf0c1d232__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xaU] 
        = __Vtemp_hf0c1d232__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xbU] 
        = __Vtemp_hf0c1d232__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xcU] 
        = __Vtemp_hf0c1d232__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xdU] 
        = __Vtemp_hf0c1d232__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xeU] 
        = __Vtemp_hf0c1d232__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0xfU] 
        = __Vtemp_hf0c1d232__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__inflight_1[0x10U] 
        = __Vtemp_hf0c1d232__0[0x10U];
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4380(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4380\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__outSer__DOT__sendCount = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog_1 = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__watchdog 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__watchdog 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__watchdog));
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__outSer__DOT___T_2) {
            vlSelf->__Vdly__TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__outSer__DOT__sendCount 
                = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__outSer__DOT__wrap_wrap)
                    ? 0U : (7U & ((IData)(1U) + (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_fbus_serdesser__DOT__outSer__DOT__sendCount))));
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__watchdog_1);
        }
        if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__a_first_done) {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog = 0U;
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog_1 = 0U;
        } else {
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog);
            vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog_1 
                = ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__watchdog_1);
        }
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__a_first_done) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__bundleIn_0_d_q__DOT__do_enq))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_l2_wrapper__DOT__l2__DOT__monitor_1__DOT__watchdog));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4381(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4381\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1099) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT___T_1172))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1553) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT___T_1626))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__atomics__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1522) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT___T_1595))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1092) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT___T_1160))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_debug__DOT__fragmenter__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1092) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT___T_1160))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1099) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT___T_1172))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_1092) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT___T_1160))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___T_1092) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT___T_1160))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT__monitor__DOT__watchdog));
    }
}

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4382(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4382\n"); );
    // Body
    if (vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset) {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__watchdog = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_opcodes = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes = 0U;
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog = 0U;
    } else {
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__watchdog 
            = ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_bootrom__DOT__fragmenter__DOT___T_7)
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__bootROMDomainWrapper__DOT__bootrom__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__x1_a_q__DOT__do_enq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__fragmenter__DOT___T_7))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_l2_ctrl__DOT__buffer__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__a_first_done) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_prci_ctrl__DOT__fragmenter__DOT___T_7))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__xbar__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__out_back__DOT__do_enq) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_plic__DOT__fragmenter__DOT___T_7))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__plicDomainWrapper__DOT__plic__DOT__monitor__DOT__watchdog));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_opcodes 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_opcodes) 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set)
                    ? (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set)
                    : 0U)) & (~ (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_clr)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight_sizes) 
                | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set)
                    ? ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set)
                        ? 5U : 0U) : 0U)) & (~ (- (IData)((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_clr)))));
        vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog 
            = (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_1068) 
                | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT___T_1141))
                ? 0U : ((IData)(1U) + vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_sbus__DOT__coupler_to_port_named_mmio_port_axi4__DOT__tl2axi4__DOT__monitor__DOT__watchdog));
    }
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & (((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__inflight) 
               | (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__a_set)) 
              & (~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__in_xbar__DOT__monitor_1__DOT__d_clr))));
}

extern const VlWide<32>/*1023:0*/ VTestDriver__ConstPool__CONST_h2ae7f32a_0;
extern const VlWide<17>/*543:0*/ VTestDriver__ConstPool__CONST_h00a443f1_0;

VL_INLINE_OPT void VTestDriver___024root___nba_sequent__TOP__4383(VTestDriver___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VTestDriver__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VTestDriver___024root___nba_sequent__TOP__4383\n"); );
    // Init
    VlWide<17>/*543:0*/ __Vtemp_hf761659c__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc1feb2c3__0;
    VlWide<32>/*1023:0*/ __Vtemp_hc1feb2c3__1;
    VlWide<17>/*543:0*/ __Vtemp_h8702ac52__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd282ae1a__0;
    VlWide<32>/*1023:0*/ __Vtemp_hd282ae1a__1;
    VlWide<17>/*543:0*/ __Vtemp_hac10b355__0;
    VlWide<32>/*1023:0*/ __Vtemp_h0be39983__0;
    VlWide<32>/*1023:0*/ __Vtemp_h0be39983__1;
    // Body
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1feb2c3__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hc1feb2c3__1, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___uartClockDomainWrapper_auto_uart_0_control_xing_in_d_bits_source));
    __Vtemp_hf761659c__0[1U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[1U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[1U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    __Vtemp_hf761659c__0[2U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[2U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[2U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    __Vtemp_hf761659c__0[3U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[3U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[3U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    __Vtemp_hf761659c__0[4U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[4U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[4U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    __Vtemp_hf761659c__0[5U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[5U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[5U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    __Vtemp_hf761659c__0[6U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[6U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[6U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    __Vtemp_hf761659c__0[7U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[7U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[7U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    __Vtemp_hf761659c__0[8U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[8U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[8U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    __Vtemp_hf761659c__0[9U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hc1feb2c3__0[9U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__1[9U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    __Vtemp_hf761659c__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hc1feb2c3__1[0xaU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    __Vtemp_hf761659c__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hc1feb2c3__1[0xbU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    __Vtemp_hf761659c__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hc1feb2c3__1[0xcU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    __Vtemp_hf761659c__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hc1feb2c3__1[0xdU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    __Vtemp_hf761659c__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hc1feb2c3__1[0xeU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    __Vtemp_hf761659c__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hc1feb2c3__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hc1feb2c3__1[0xfU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    __Vtemp_hf761659c__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                               ? __Vtemp_hc1feb2c3__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                                                 ? 
                                                __Vtemp_hc1feb2c3__1[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hc1feb2c3__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_device_named_uart_0__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hc1feb2c3__1[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_hf761659c__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_hf761659c__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_hf761659c__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_hf761659c__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_hf761659c__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_hf761659c__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_hf761659c__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_hf761659c__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_hf761659c__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_hf761659c__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_hf761659c__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_hf761659c__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_hf761659c__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_hf761659c__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_hf761659c__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__uartClockDomainWrapper__DOT__uart_0__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_hf761659c__0[0x10U];
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hd282ae1a__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_hd282ae1a__1, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT___clint_auto_in_d_bits_source));
    __Vtemp_h8702ac52__0[1U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[1U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[1U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    __Vtemp_h8702ac52__0[2U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[2U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[2U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    __Vtemp_h8702ac52__0[3U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[3U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[3U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    __Vtemp_h8702ac52__0[4U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[4U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[4U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    __Vtemp_h8702ac52__0[5U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[5U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[5U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    __Vtemp_h8702ac52__0[6U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[6U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[6U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    __Vtemp_h8702ac52__0[7U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[7U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[7U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    __Vtemp_h8702ac52__0[8U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[8U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[8U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    __Vtemp_h8702ac52__0[9U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_hd282ae1a__0[9U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__1[9U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    __Vtemp_h8702ac52__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hd282ae1a__1[0xaU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    __Vtemp_h8702ac52__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hd282ae1a__1[0xbU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    __Vtemp_h8702ac52__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hd282ae1a__1[0xcU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    __Vtemp_h8702ac52__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hd282ae1a__1[0xdU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    __Vtemp_h8702ac52__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hd282ae1a__1[0xeU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    __Vtemp_h8702ac52__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_hd282ae1a__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_hd282ae1a__1[0xfU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    __Vtemp_h8702ac52__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                               ? __Vtemp_hd282ae1a__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                                                 ? 
                                                __Vtemp_hd282ae1a__1[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_hd282ae1a__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_cbus__DOT__coupler_to_clint__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_hd282ae1a__1[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_h8702ac52__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_h8702ac52__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_h8702ac52__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_h8702ac52__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_h8702ac52__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_h8702ac52__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_h8702ac52__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_h8702ac52__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_h8702ac52__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_h8702ac52__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_h8702ac52__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_h8702ac52__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_h8702ac52__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_h8702ac52__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_h8702ac52__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__clint__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_h8702ac52__0[0x10U];
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h0be39983__0, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source));
    VL_SHIFTL_WWI(1024,1024,10, __Vtemp_h0be39983__1, VTestDriver__ConstPool__CONST_h2ae7f32a_0, (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT___coupler_to_bootaddressreg_auto_fragmenter_out_a_bits_source));
    __Vtemp_hac10b355__0[1U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[1U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[1U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[1U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[1U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[1U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[1U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[1U])))));
    __Vtemp_hac10b355__0[2U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[2U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[2U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[2U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[2U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[2U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[2U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[2U])))));
    __Vtemp_hac10b355__0[3U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[3U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[3U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[3U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[3U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[3U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[3U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[3U])))));
    __Vtemp_hac10b355__0[4U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[4U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[4U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[4U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[4U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[4U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[4U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[4U])))));
    __Vtemp_hac10b355__0[5U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[5U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[5U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[5U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[5U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[5U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[5U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[5U])))));
    __Vtemp_hac10b355__0[6U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[6U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[6U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[6U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[6U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[6U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[6U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[6U])))));
    __Vtemp_hac10b355__0[7U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[7U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[7U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[7U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[7U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[7U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[7U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[7U])))));
    __Vtemp_hac10b355__0[8U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[8U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[8U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[8U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[8U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[8U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[8U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[8U])))));
    __Vtemp_hac10b355__0[9U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[9U] 
                                & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                    ? VTestDriver__ConstPool__CONST_h902eb634_0[9U]
                                    : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[9U] 
                                        | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                            ? __Vtemp_h0be39983__0[9U]
                                            : VTestDriver__ConstPool__CONST_h902eb634_0[9U])) 
                                       & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__1[9U]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[9U])))));
    __Vtemp_hac10b355__0[0xaU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xaU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xaU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xaU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__0[0xaU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h0be39983__1[0xaU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xaU])))));
    __Vtemp_hac10b355__0[0xbU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xbU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xbU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xbU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__0[0xbU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h0be39983__1[0xbU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xbU])))));
    __Vtemp_hac10b355__0[0xcU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xcU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xcU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xcU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__0[0xcU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h0be39983__1[0xcU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xcU])))));
    __Vtemp_hac10b355__0[0xdU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xdU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xdU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xdU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__0[0xdU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h0be39983__1[0xdU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xdU])))));
    __Vtemp_hac10b355__0[0xeU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xeU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xeU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xeU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__0[0xeU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h0be39983__1[0xeU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xeU])))));
    __Vtemp_hac10b355__0[0xfU] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0xfU] 
                                  & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                      ? VTestDriver__ConstPool__CONST_h902eb634_0[0xfU]
                                      : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xfU] 
                                          | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                              ? __Vtemp_h0be39983__0[0xfU]
                                              : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])) 
                                         & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                ? __Vtemp_h0be39983__1[0xfU]
                                                : VTestDriver__ConstPool__CONST_h902eb634_0[0xfU])))));
    __Vtemp_hac10b355__0[0x10U] = (VTestDriver__ConstPool__CONST_h00a443f1_0[0x10U] 
                                   & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
                                       ? VTestDriver__ConstPool__CONST_h902eb634_0[0x10U]
                                       : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x10U] 
                                           | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                               ? __Vtemp_h0be39983__0[0x10U]
                                               : VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])) 
                                          & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                                                 ? 
                                                __Vtemp_h0be39983__1[0x10U]
                                                 : 
                                                VTestDriver__ConstPool__CONST_h902eb634_0[0x10U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0U] 
        = (VTestDriver__ConstPool__CONST_h00a443f1_0[0U] 
           & ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)
               ? VTestDriver__ConstPool__CONST_h902eb634_0[0U]
               : ((vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0U] 
                   | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                       ? __Vtemp_h0be39983__0[0U] : 
                      VTestDriver__ConstPool__CONST_h902eb634_0[0U])) 
                  & (~ ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__coupler_to_bootaddressreg__DOT__fragmenter__DOT___T_7)
                         ? __Vtemp_h0be39983__1[0U]
                         : VTestDriver__ConstPool__CONST_h902eb634_0[0U])))));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[1U] 
        = __Vtemp_hac10b355__0[1U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[2U] 
        = __Vtemp_hac10b355__0[2U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[3U] 
        = __Vtemp_hac10b355__0[3U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[4U] 
        = __Vtemp_hac10b355__0[4U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[5U] 
        = __Vtemp_hac10b355__0[5U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[6U] 
        = __Vtemp_hac10b355__0[6U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[7U] 
        = __Vtemp_hac10b355__0[7U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[8U] 
        = __Vtemp_hac10b355__0[8U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[9U] 
        = __Vtemp_hac10b355__0[9U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xaU] 
        = __Vtemp_hac10b355__0[0xaU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xbU] 
        = __Vtemp_hac10b355__0[0xbU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xcU] 
        = __Vtemp_hac10b355__0[0xcU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xdU] 
        = __Vtemp_hac10b355__0[0xdU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xeU] 
        = __Vtemp_hac10b355__0[0xeU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0xfU] 
        = __Vtemp_hac10b355__0[0xfU];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__subsystem_pbus__DOT__monitor__DOT__inflight[0x10U] 
        = __Vtemp_hac10b355__0[0x10U];
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__d_first_counter 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__a_first_done)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__d_first_counter) 
                  - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__reset_setter__DOT__monitor__DOT__d_first_counter)));
    vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__d_first_counter 
        = ((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT___system_auto_implicitClockGrouper_out_reset)) 
           & (((~ (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__a_first_done)) 
               | ((IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__d_first_counter) 
                  - (IData)(1U))) & (IData)(vlSelf->TestDriver__DOT__testHarness__DOT__chiptop0__DOT__system__DOT__prci_ctrl_domain__DOT__clock_gater__DOT__monitor__DOT__d_first_counter)));
}
