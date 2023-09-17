module rocket_wrapper (
    input  logic        clk,
    input  logic        rst_n,
    //uart
    output logic        uart_txd,
    input  logic        uart_rxd,
    //jtag
    input  logic        jtag_tck,
    input  logic        jtag_tms,
    input  logic        jtag_tdi,
    output logic        jtag_tdo,
    //axi4 slave interface(mmio)
    output logic[  3:0] axi4_mst_mmio_awid,
    output logic[ 29:0] axi4_mst_mmio_awaddr,
    output logic[  7:0] axi4_mst_mmio_awlen,
    output logic[  2:0] axi4_mst_mmio_awsize,
    output logic[  1:0] axi4_mst_mmio_awburst,
    output logic        axi4_mst_mmio_awlock,
    output logic[  3:0] axi4_mst_mmio_awcache,
    output logic[  2:0] axi4_mst_mmio_awprot,
    output logic[  3:0] axi4_mst_mmio_awqos,
    output logic[  3:0] axi4_mst_mmio_awregion,
    output logic[  3:0] axi4_mst_mmio_awuser,
    output logic        axi4_mst_mmio_awvalid,
    input  logic        axi4_mst_mmio_awready,
    output logic[ 63:0] axi4_mst_mmio_wdata,
    output logic[  7:0] axi4_mst_mmio_wstrb,
    output logic        axi4_mst_mmio_wlast,
    output logic[  3:0] axi4_mst_mmio_wuser,
    output logic        axi4_mst_mmio_wvalid,
    input  logic        axi4_mst_mmio_wready,
    input  logic[  3:0] axi4_mst_mmio_bid,
    input  logic[  1:0] axi4_mst_mmio_bresp,
    input  logic[  3:0] axi4_mst_mmio_buser,
    input  logic        axi4_mst_mmio_bvalid,
    output logic        axi4_mst_mmio_bready,
    output logic[  3:0] axi4_mst_mmio_arid,
    output logic[ 29:0] axi4_mst_mmio_araddr,
    output logic[  7:0] axi4_mst_mmio_arlen,
    output logic[  2:0] axi4_mst_mmio_arsize,
    output logic[  1:0] axi4_mst_mmio_arburst,
    output logic        axi4_mst_mmio_arlock,
    output logic[  3:0] axi4_mst_mmio_arcache,
    output logic[  2:0] axi4_mst_mmio_arprot,
    output logic[  3:0] axi4_mst_mmio_arqos,
    output logic[  3:0] axi4_mst_mmio_arregion,
    output logic[  3:0] axi4_mst_mmio_aruser,
    output logic        axi4_mst_mmio_arvalid,
    input  logic        axi4_mst_mmio_arready,
    input  logic[  3:0] axi4_mst_mmio_rid,
    input  logic[ 63:0] axi4_mst_mmio_rdata,
    input  logic[  1:0] axi4_mst_mmio_rresp,
    input  logic        axi4_mst_mmio_rlast,
    input  logic[3  :0] axi4_mst_mmio_ruser,
    input  logic        axi4_mst_mmio_rvalid,
    output logic        axi4_mst_mmio_rready,
    //axi4 slave interface(memory)
    output logic[  3:0] axi4_mst_mem_awid,
    output logic[ 30:0] axi4_mst_mem_awaddr,
    output logic[  7:0] axi4_mst_mem_awlen,
    output logic[  2:0] axi4_mst_mem_awsize,
    output logic[  1:0] axi4_mst_mem_awburst,
    output logic        axi4_mst_mem_awlock,
    output logic[  3:0] axi4_mst_mem_awcache,
    output logic[  2:0] axi4_mst_mem_awprot,
    output logic[  3:0] axi4_mst_mem_awqos,
    output logic[  3:0] axi4_mst_mem_awregion,
    output logic[  3:0] axi4_mst_mem_awuser,
    output logic        axi4_mst_mem_awvalid,
    input  logic        axi4_mst_mem_awready,
    output logic[ 63:0] axi4_mst_mem_wdata,
    output logic[  7:0] axi4_mst_mem_wstrb,
    output logic        axi4_mst_mem_wlast,
    output logic[  3:0] axi4_mst_mem_wuser,
    output logic        axi4_mst_mem_wvalid,
    input  logic        axi4_mst_mem_wready,
    input  logic[  3:0] axi4_mst_mem_bid,
    input  logic[  1:0] axi4_mst_mem_bresp,
    input  logic[  3:0] axi4_mst_mem_buser,
    input  logic        axi4_mst_mem_bvalid,
    output logic        axi4_mst_mem_bready,
    output logic[  3:0] axi4_mst_mem_arid,
    output logic[ 30:0] axi4_mst_mem_araddr,
    output logic[  7:0] axi4_mst_mem_arlen,
    output logic[  2:0] axi4_mst_mem_arsize,
    output logic[  1:0] axi4_mst_mem_arburst,
    output logic        axi4_mst_mem_arlock,
    output logic[  3:0] axi4_mst_mem_arcache,
    output logic[  2:0] axi4_mst_mem_arprot,
    output logic[  3:0] axi4_mst_mem_arqos,
    output logic[  3:0] axi4_mst_mem_arregion,
    output logic[  3:0] axi4_mst_mem_aruser,
    output logic        axi4_mst_mem_arvalid,
    input  logic        axi4_mst_mem_arready,
    input  logic[  3:0] axi4_mst_mem_rid,
    input  logic[ 63:0] axi4_mst_mem_rdata,
    input  logic[  1:0] axi4_mst_mem_rresp,
    input  logic        axi4_mst_mem_rlast,
    input  logic[3  :0] axi4_mst_mem_ruser,
    input  logic        axi4_mst_mem_rvalid,
    output logic        axi4_mst_mem_rready
);

/*autowire*/

/*autotieoff*/
// Beginning of automatic tieoffs (for this module's unterminated outputs)
assign axi4_mst_mem_arregion			= 4'h0;
assign axi4_mst_mem_aruser			= 4'h0;
assign axi4_mst_mem_awregion			= 4'h0;
assign axi4_mst_mem_awuser			= 4'h0;
assign axi4_mst_mem_wuser			= 4'h0;
assign axi4_mst_mmio_arregion			= 4'h0;
assign axi4_mst_mmio_aruser			= 4'h0;
assign axi4_mst_mmio_awregion			= 4'h0;
assign axi4_mst_mmio_awuser			= 4'h0;
assign axi4_mst_mmio_wuser			= 4'h0;
// End of automatics

/*ChipTop auto_template(
  .serial_tl_clock(clk),
  .serial_tl_bits_in_valid('d0),
  .serial_tl_bits_in_bits('d0),
  .serial_tl_bits_out_ready('d1),
  .custom_boot(1'd0),
  .reset_io(~rst_n),
  .clock_uncore_clock(clk),
  .jtag_TCK(jtag_tck),
  .jtag_TMS(jtag_tms),
  .jtag_TDI(jtag_tdi),
  .jtag_TDO(jtag_tdo),
  .uart_0_rxd(uart_rxd),
  .uart_0_txd(uart_txd),
	.axi4_mmio_0_bits_\(.*\)_bits_\(.*\)(axi4_mst_mmio_\1\2[]),
	.axi4_mmio_0_bits_\(.*\)_\(.*\)(axi4_mst_mmio_\1\2[]),
	.axi4_mem_0_bits_\(.*\)_bits_\(.*\)(axi4_mst_mem_\1\2[]),
	.axi4_mem_0_bits_\(.*\)_\(.*\)(axi4_mst_mem_\1\2[]),
  ..*(),
);*/
ChipTop ChipTop_inst(/*autoinst*/
		     // Outputs
		     .serial_tl_bits_in_ready(),		 // Templated
		     .serial_tl_bits_out_valid(),		 // Templated
		     .serial_tl_bits_out_bits(),		 // Templated
		     .axi4_mmio_0_clock	(),			 // Templated
		     .axi4_mmio_0_reset	(),			 // Templated
		     .axi4_mmio_0_bits_aw_valid(axi4_mst_mmio_awvalid), // Templated
		     .axi4_mmio_0_bits_aw_bits_id(axi4_mst_mmio_awid[3:0]), // Templated
		     .axi4_mmio_0_bits_aw_bits_addr(axi4_mst_mmio_awaddr[30:0]), // Templated
		     .axi4_mmio_0_bits_aw_bits_len(axi4_mst_mmio_awlen[7:0]), // Templated
		     .axi4_mmio_0_bits_aw_bits_size(axi4_mst_mmio_awsize[2:0]), // Templated
		     .axi4_mmio_0_bits_aw_bits_burst(axi4_mst_mmio_awburst[1:0]), // Templated
		     .axi4_mmio_0_bits_aw_bits_lock(axi4_mst_mmio_awlock), // Templated
		     .axi4_mmio_0_bits_aw_bits_cache(axi4_mst_mmio_awcache[3:0]), // Templated
		     .axi4_mmio_0_bits_aw_bits_prot(axi4_mst_mmio_awprot[2:0]), // Templated
		     .axi4_mmio_0_bits_aw_bits_qos(axi4_mst_mmio_awqos[3:0]), // Templated
		     .axi4_mmio_0_bits_w_valid(axi4_mst_mmio_wvalid), // Templated
		     .axi4_mmio_0_bits_w_bits_data(axi4_mst_mmio_wdata[63:0]), // Templated
		     .axi4_mmio_0_bits_w_bits_strb(axi4_mst_mmio_wstrb[7:0]), // Templated
		     .axi4_mmio_0_bits_w_bits_last(axi4_mst_mmio_wlast), // Templated
		     .axi4_mmio_0_bits_b_ready(axi4_mst_mmio_bready), // Templated
		     .axi4_mmio_0_bits_ar_valid(axi4_mst_mmio_arvalid), // Templated
		     .axi4_mmio_0_bits_ar_bits_id(axi4_mst_mmio_arid[3:0]), // Templated
		     .axi4_mmio_0_bits_ar_bits_addr(axi4_mst_mmio_araddr[30:0]), // Templated
		     .axi4_mmio_0_bits_ar_bits_len(axi4_mst_mmio_arlen[7:0]), // Templated
		     .axi4_mmio_0_bits_ar_bits_size(axi4_mst_mmio_arsize[2:0]), // Templated
		     .axi4_mmio_0_bits_ar_bits_burst(axi4_mst_mmio_arburst[1:0]), // Templated
		     .axi4_mmio_0_bits_ar_bits_lock(axi4_mst_mmio_arlock), // Templated
		     .axi4_mmio_0_bits_ar_bits_cache(axi4_mst_mmio_arcache[3:0]), // Templated
		     .axi4_mmio_0_bits_ar_bits_prot(axi4_mst_mmio_arprot[2:0]), // Templated
		     .axi4_mmio_0_bits_ar_bits_qos(axi4_mst_mmio_arqos[3:0]), // Templated
		     .axi4_mmio_0_bits_r_ready(axi4_mst_mmio_rready), // Templated
		     .axi4_mem_0_clock	(),			 // Templated
		     .axi4_mem_0_reset	(),			 // Templated
		     .axi4_mem_0_bits_aw_valid(axi4_mst_mem_awvalid), // Templated
		     .axi4_mem_0_bits_aw_bits_id(axi4_mst_mem_awid[3:0]), // Templated
		     .axi4_mem_0_bits_aw_bits_addr(axi4_mst_mem_awaddr[31:0]), // Templated
		     .axi4_mem_0_bits_aw_bits_len(axi4_mst_mem_awlen[7:0]), // Templated
		     .axi4_mem_0_bits_aw_bits_size(axi4_mst_mem_awsize[2:0]), // Templated
		     .axi4_mem_0_bits_aw_bits_burst(axi4_mst_mem_awburst[1:0]), // Templated
		     .axi4_mem_0_bits_aw_bits_lock(axi4_mst_mem_awlock), // Templated
		     .axi4_mem_0_bits_aw_bits_cache(axi4_mst_mem_awcache[3:0]), // Templated
		     .axi4_mem_0_bits_aw_bits_prot(axi4_mst_mem_awprot[2:0]), // Templated
		     .axi4_mem_0_bits_aw_bits_qos(axi4_mst_mem_awqos[3:0]), // Templated
		     .axi4_mem_0_bits_w_valid(axi4_mst_mem_wvalid), // Templated
		     .axi4_mem_0_bits_w_bits_data(axi4_mst_mem_wdata[63:0]), // Templated
		     .axi4_mem_0_bits_w_bits_strb(axi4_mst_mem_wstrb[7:0]), // Templated
		     .axi4_mem_0_bits_w_bits_last(axi4_mst_mem_wlast), // Templated
		     .axi4_mem_0_bits_b_ready(axi4_mst_mem_bready), // Templated
		     .axi4_mem_0_bits_ar_valid(axi4_mst_mem_arvalid), // Templated
		     .axi4_mem_0_bits_ar_bits_id(axi4_mst_mem_arid[3:0]), // Templated
		     .axi4_mem_0_bits_ar_bits_addr(axi4_mst_mem_araddr[31:0]), // Templated
		     .axi4_mem_0_bits_ar_bits_len(axi4_mst_mem_arlen[7:0]), // Templated
		     .axi4_mem_0_bits_ar_bits_size(axi4_mst_mem_arsize[2:0]), // Templated
		     .axi4_mem_0_bits_ar_bits_burst(axi4_mst_mem_arburst[1:0]), // Templated
		     .axi4_mem_0_bits_ar_bits_lock(axi4_mst_mem_arlock), // Templated
		     .axi4_mem_0_bits_ar_bits_cache(axi4_mst_mem_arcache[3:0]), // Templated
		     .axi4_mem_0_bits_ar_bits_prot(axi4_mst_mem_arprot[2:0]), // Templated
		     .axi4_mem_0_bits_ar_bits_qos(axi4_mst_mem_arqos[3:0]), // Templated
		     .axi4_mem_0_bits_r_ready(axi4_mst_mem_rready), // Templated
		     .jtag_TDO		(jtag_tdo),		 // Templated
		     .uart_0_txd	(uart_txd),		 // Templated
		     // Inputs
		     .serial_tl_clock	(clk),			 // Templated
		     .serial_tl_bits_in_valid('d0),		 // Templated
		     .serial_tl_bits_in_bits('d0),		 // Templated
		     .serial_tl_bits_out_ready('d1),		 // Templated
		     .axi4_mmio_0_bits_aw_ready(axi4_mst_mmio_awready), // Templated
		     .axi4_mmio_0_bits_w_ready(axi4_mst_mmio_wready), // Templated
		     .axi4_mmio_0_bits_b_valid(axi4_mst_mmio_bvalid), // Templated
		     .axi4_mmio_0_bits_b_bits_id(axi4_mst_mmio_bid[3:0]), // Templated
		     .axi4_mmio_0_bits_b_bits_resp(axi4_mst_mmio_bresp[1:0]), // Templated
		     .axi4_mmio_0_bits_ar_ready(axi4_mst_mmio_arready), // Templated
		     .axi4_mmio_0_bits_r_valid(axi4_mst_mmio_rvalid), // Templated
		     .axi4_mmio_0_bits_r_bits_id(axi4_mst_mmio_rid[3:0]), // Templated
		     .axi4_mmio_0_bits_r_bits_data(axi4_mst_mmio_rdata[63:0]), // Templated
		     .axi4_mmio_0_bits_r_bits_resp(axi4_mst_mmio_rresp[1:0]), // Templated
		     .axi4_mmio_0_bits_r_bits_last(axi4_mst_mmio_rlast), // Templated
		     .custom_boot	(1'd0),			 // Templated
		     .reset_io		(~rst_n),		 // Templated
		     .clock_uncore_clock(clk),			 // Templated
		     .axi4_mem_0_bits_aw_ready(axi4_mst_mem_awready), // Templated
		     .axi4_mem_0_bits_w_ready(axi4_mst_mem_wready), // Templated
		     .axi4_mem_0_bits_b_valid(axi4_mst_mem_bvalid), // Templated
		     .axi4_mem_0_bits_b_bits_id(axi4_mst_mem_bid[3:0]), // Templated
		     .axi4_mem_0_bits_b_bits_resp(axi4_mst_mem_bresp[1:0]), // Templated
		     .axi4_mem_0_bits_ar_ready(axi4_mst_mem_arready), // Templated
		     .axi4_mem_0_bits_r_valid(axi4_mst_mem_rvalid), // Templated
		     .axi4_mem_0_bits_r_bits_id(axi4_mst_mem_rid[3:0]), // Templated
		     .axi4_mem_0_bits_r_bits_data(axi4_mst_mem_rdata[63:0]), // Templated
		     .axi4_mem_0_bits_r_bits_resp(axi4_mst_mem_rresp[1:0]), // Templated
		     .axi4_mem_0_bits_r_bits_last(axi4_mst_mem_rlast), // Templated
		     .jtag_TCK		(jtag_tck),		 // Templated
		     .jtag_TMS		(jtag_tms),		 // Templated
		     .jtag_TDI		(jtag_tdi),		 // Templated
		     .uart_0_rxd	(uart_rxd));		 // Templated

endmodule
// Local Variables:
// verilog-auto-tieoff-declaration:"assign"
// verilog-library-flags:("-y ../chipyard.harness.TestHarness.RocketQuadCoreConfig/gen-collateral/")
// verilog-library-extensions:(".v" ".sv")
// End:

