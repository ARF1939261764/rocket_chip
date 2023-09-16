// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VTESTDRIVER__SYMS_H_
#define VERILATED_VTESTDRIVER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VTestDriver.h"

// INCLUDE MODULE CLASSES
#include "VTestDriver___024root.h"
#include "VTestDriver___024unit.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class VTestDriver__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VTestDriver* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VTestDriver___024root          TOP;
    VTestDriver___024unit          TOP____024unit;

    // SCOPE NAMES
    VerilatedScope __Vscope_TestDriver;
    VerilatedScope __Vscope_TestDriver__testHarness;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__bootROMDomainWrapper__bootrom__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__clint__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm__dmiAccessChain;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm__dtmInfoChain;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__dtm__tapIO_idcodeChain;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__plicDomainWrapper__plic;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__plicDomainWrapper__plic__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__prci_ctrl_domain__clock_gater__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__prci_ctrl_domain__reset_setter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__prci_ctrl_domain__xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__prci_ctrl_domain__xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__atomics;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__atomics__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_bootrom__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_bootrom__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_clint__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_clint__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_debug__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_debug__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_l2_ctrl__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_l2_ctrl__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_l2_ctrl__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_plic__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_plic__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_prci_ctrl__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_prci_ctrl__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_prci_ctrl__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__coupler_to_prci_ctrl__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__in_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__in_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__in_xbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__out_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__out_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__wrapped_error_device__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_cbus__wrapped_error_device__error__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_fbus_buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_fbus_coupler_from_port_named_serial_tl_ctrl__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__InclusiveCache_inner_TLBuffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__binder__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__cork;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__cork__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__cork__pool;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__abc_mshrs_0;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__abc_mshrs_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__abc_mshrs_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__abc_mshrs_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__abc_mshrs_4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__bc_mshr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__c_mshr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__directory;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__requests;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__sinkA__putbuffer;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__sinkC;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__sinkC__putbuffer;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__sinkD;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__sourceB;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__sourceC;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__inclusive_cache_bank_sched__sourceD;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_l2_wrapper__l2__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__axi4yank;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_mbus__coupler_to_memory_controller_port_named_axi4__tl2axi4__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_mbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_mbus__picker__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__atomics;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__atomics__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__buffer_1__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__coupler_to_bootaddressreg__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__coupler_to_bootaddressreg__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__coupler_to_device_named_uart_0__fragmenter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__out_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_pbus__out_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__axi4deint;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__axi4yank;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__coupler_to_port_named_mmio_port_axi4__tl2axi4__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__fixer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__fixer__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__fixer__monitor_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__fixer__monitor_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__fixer__monitor_4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__system_bus_xbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__system_bus_xbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__system_bus_xbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__system_bus_xbar__monitor_2;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__system_bus_xbar__monitor_3;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__subsystem_sbus__system_bus_xbar__monitor_4;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__core;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__core__csr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__core__ibuf;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__dcache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__fpuOpt;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__frontend;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__frontend__icache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__frontend__tlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__ptw;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__tlMasterXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_1__tile_reset_domain_tile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__core;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__core__csr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__core__ibuf;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__dcache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__fpuOpt;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__frontend;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__frontend__icache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__frontend__tlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__ptw;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__tlMasterXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_2__tile_reset_domain_tile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__core;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__core__csr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__core__ibuf;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__dcache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__fpuOpt;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__frontend;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__frontend__icache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__frontend__tlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__ptw;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__tlMasterXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain_3__tile_reset_domain_tile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__core;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__core__PlusArgTimeout;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__core__csr;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__core__ibuf;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__dcache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__fpuOpt;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__frontend;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__frontend__icache;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__frontend__tlb;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__ptw;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__tlMasterXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__tlMasterXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tile_prci_domain__tile_reset_domain_tile__tlMasterXbar__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmInner__dmInner;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmInner__dmInner__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmInner__dmInner__monitor_1;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__asource__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmOuter__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiBypass__bar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiBypass__error__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiXbar;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__tlDM__dmOuter__dmiXbar__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__chiptop0__system__uartClockDomainWrapper__uart_0__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__mmio_mem__axi4frag;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__buffer__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__serdesser__monitor;
    VerilatedScope __Vscope_TestDriver__testHarness__ram__tsi2tl;
    VerilatedScope __Vscope_TestDriver__testHarness__uart_sim_0_uartno0;

    // SCOPE HIERARCHY
    VerilatedHierarchy __Vhier;

    // CONSTRUCTORS
    VTestDriver__Syms(VerilatedContext* contextp, const char* namep, VTestDriver* modelp);
    ~VTestDriver__Syms();
    void VTestDriver__Syms_1();

    // METHODS
    const char* name() { return TOP.name(); }
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

#endif  // guard
