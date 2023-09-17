module axi_sram_wrapper(
  //axi4 slave interface
  //clock & reset
  input  logic        axi4_slv_aclk,
  input  logic        axi4_slv_aresetn,
  //aw
  input  logic[  3:0] axi4_slv_awid,
  input  logic[ 30:0] axi4_slv_awaddr,
  input  logic[  7:0] axi4_slv_awlen,
  input  logic[  2:0] axi4_slv_awsize,
  input  logic[  1:0] axi4_slv_awburst,
  input  logic        axi4_slv_awlock,
  input  logic[  3:0] axi4_slv_awcache,
  input  logic[  2:0] axi4_slv_awprot,
  input  logic[  3:0] axi4_slv_awqos,
  input  logic[  3:0] axi4_slv_awregion,
  input  logic[  3:0] axi4_slv_awuser,
  input  logic        axi4_slv_awvalid,
  output logic        axi4_slv_awready,
  //w
  input  logic[ 63:0] axi4_slv_wdata,
  input  logic[ 7:0]  axi4_slv_wstrb,
  input  logic        axi4_slv_wlast,
  input  logic[ 3:0]  axi4_slv_wuser,
  input  logic        axi4_slv_wvalid,
  output logic        axi4_slv_wready,
  //b
  output logic[  3:0] axi4_slv_bid,
  output logic[  1:0] axi4_slv_bresp,
  output logic[ 3:0]  axi4_slv_buser,
  output logic        axi4_slv_bvalid,
  input  logic        axi4_slv_bready,
  //ar
  input  logic[  3:0] axi4_slv_arid,
  input  logic[ 30:0] axi4_slv_araddr,
  input  logic[  7:0] axi4_slv_arlen,
  input  logic[  2:0] axi4_slv_arsize,
  input  logic[  1:0] axi4_slv_arburst,
  input  logic        axi4_slv_arlock,
  input  logic[  3:0] axi4_slv_arcache,
  input  logic[  2:0] axi4_slv_arprot,
  input  logic[  3:0] axi4_slv_arqos,
  input  logic[  3:0] axi4_slv_arregion,
  input  logic[ 3:0]  axi4_slv_aruser,
  input  logic        axi4_slv_arvalid,
  output logic        axi4_slv_arready,
  //r
  output logic[  3:0] axi4_slv_rid,
  output logic[ 63:0] axi4_slv_rdata,
	output logic[  1:0] axi4_slv_rresp,
  output logic        axi4_slv_rlast,
  output logic[3:0]   axi4_slv_ruser,
  output logic        axi4_slv_rvalid,
  input  logic        axi4_slv_rready
);

/*autowire*/

/*autotieoff*/
// Beginning of automatic tieoffs (for this module's unterminated outputs)
assign axi4_slv_buser				= 4'h0;
assign axi4_slv_ruser				= 4'h0;
// End of automatics

/*axi_sram_64 auto_template(
  .s_aclk(axi4_slv_aclk),
  .s_aresetn(axi4_slv_aresetn),
	.\(.*\)_\(.*\)lock(\1_\2lock),
	.s_axi_\(.*\)(axi4_slv_\1[]),
  ..*(),
);*/
axi_sram_64 axi_sram_64_inst(/*autoinst*/
			     // Outputs
			     .rsta_busy		(),		 // Templated
			     .rstb_busy		(),		 // Templated
			     .s_axi_awready	(axi4_slv_awready), // Templated
			     .s_axi_wready	(axi4_slv_wready), // Templated
			     .s_axi_bid		(axi4_slv_bid[3:0]), // Templated
			     .s_axi_bresp	(axi4_slv_bresp[1:0]), // Templated
			     .s_axi_bvalid	(axi4_slv_bvalid), // Templated
			     .s_axi_arready	(axi4_slv_arready), // Templated
			     .s_axi_rid		(axi4_slv_rid[3:0]), // Templated
			     .s_axi_rdata	(axi4_slv_rdata[63:0]), // Templated
			     .s_axi_rresp	(axi4_slv_rresp[1:0]), // Templated
			     .s_axi_rlast	(axi4_slv_rlast), // Templated
			     .s_axi_rvalid	(axi4_slv_rvalid), // Templated
			     // Inputs
			     .s_aclk		(axi4_slv_aclk), // Templated
			     .s_aresetn		(axi4_slv_aresetn), // Templated
			     .s_axi_awid	(axi4_slv_awid[3:0]), // Templated
			     .s_axi_awaddr	(axi4_slv_awaddr[31:0]), // Templated
			     .s_axi_awlen	(axi4_slv_awlen[7:0]), // Templated
			     .s_axi_awsize	(axi4_slv_awsize[2:0]), // Templated
			     .s_axi_awburst	(axi4_slv_awburst[1:0]), // Templated
			     .s_axi_awvalid	(axi4_slv_awvalid), // Templated
			     .s_axi_wdata	(axi4_slv_wdata[63:0]), // Templated
			     .s_axi_wstrb	(axi4_slv_wstrb[7:0]), // Templated
			     .s_axi_wlast	(axi4_slv_wlast), // Templated
			     .s_axi_wvalid	(axi4_slv_wvalid), // Templated
			     .s_axi_bready	(axi4_slv_bready), // Templated
			     .s_axi_arid	(axi4_slv_arid[3:0]), // Templated
			     .s_axi_araddr	(axi4_slv_araddr[31:0]), // Templated
			     .s_axi_arlen	(axi4_slv_arlen[7:0]), // Templated
			     .s_axi_arsize	(axi4_slv_arsize[2:0]), // Templated
			     .s_axi_arburst	(axi4_slv_arburst[1:0]), // Templated
			     .s_axi_arvalid	(axi4_slv_arvalid), // Templated
			     .s_axi_rready	(axi4_slv_rready)); // Templated

endmodule
// Local Variables:
// verilog-auto-tieoff-declaration:"assign"
// verilog-library-flags:("-v " "../ip/axi_sram_64/sim/axi_sram_64.v" )
// verilog-library-extensions:(".v" ".sv")
// End:
