module axi_ddr_wrapper(
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
	//ddr
	
);

wire[3:0] axi4_from_bridge_to_ddr_awid;
wire[3:0] axi4_from_bridge_to_ddr_arid;

/*autowire*/
// Beginning of automatic wires (for undeclared instantiated-module outputs)
wire [31:0]		axi4_from_bridge_to_ddr_araddr;// From axi_64_to_256_inst of axi_64_to_256.v
wire [1:0]		axi4_from_bridge_to_ddr_arburst;// From axi_64_to_256_inst of axi_64_to_256.v
wire [3:0]		axi4_from_bridge_to_ddr_arcache;// From axi_64_to_256_inst of axi_64_to_256.v
wire [7:0]		axi4_from_bridge_to_ddr_arlen;// From axi_64_to_256_inst of axi_64_to_256.v
wire [2:0]		axi4_from_bridge_to_ddr_arprot;// From axi_64_to_256_inst of axi_64_to_256.v
wire [3:0]		axi4_from_bridge_to_ddr_arqos;// From axi_64_to_256_inst of axi_64_to_256.v
wire			axi4_from_bridge_to_ddr_arready;// From axi_ddr_256_inst of axi_ddr_256.v
wire [3:0]		axi4_from_bridge_to_ddr_arregion;// From axi_64_to_256_inst of axi_64_to_256.v
wire [2:0]		axi4_from_bridge_to_ddr_arsize;// From axi_64_to_256_inst of axi_64_to_256.v
wire			axi4_from_bridge_to_ddr_arvalid;// From axi_64_to_256_inst of axi_64_to_256.v
wire [31:0]		axi4_from_bridge_to_ddr_awaddr;// From axi_64_to_256_inst of axi_64_to_256.v
wire [1:0]		axi4_from_bridge_to_ddr_awburst;// From axi_64_to_256_inst of axi_64_to_256.v
wire [3:0]		axi4_from_bridge_to_ddr_awcache;// From axi_64_to_256_inst of axi_64_to_256.v
wire [7:0]		axi4_from_bridge_to_ddr_awlen;// From axi_64_to_256_inst of axi_64_to_256.v
wire [2:0]		axi4_from_bridge_to_ddr_awprot;// From axi_64_to_256_inst of axi_64_to_256.v
wire [3:0]		axi4_from_bridge_to_ddr_awqos;// From axi_64_to_256_inst of axi_64_to_256.v
wire			axi4_from_bridge_to_ddr_awready;// From axi_ddr_256_inst of axi_ddr_256.v
wire [3:0]		axi4_from_bridge_to_ddr_awregion;// From axi_64_to_256_inst of axi_64_to_256.v
wire [2:0]		axi4_from_bridge_to_ddr_awsize;// From axi_64_to_256_inst of axi_64_to_256.v
wire			axi4_from_bridge_to_ddr_awvalid;// From axi_64_to_256_inst of axi_64_to_256.v
wire [3:0]		axi4_from_bridge_to_ddr_bid;// From axi_ddr_256_inst of axi_ddr_256.v
wire			axi4_from_bridge_to_ddr_bready;// From axi_64_to_256_inst of axi_64_to_256.v
wire [1:0]		axi4_from_bridge_to_ddr_bresp;// From axi_ddr_256_inst of axi_ddr_256.v
wire			axi4_from_bridge_to_ddr_bvalid;// From axi_ddr_256_inst of axi_ddr_256.v
wire [255:0]		axi4_from_bridge_to_ddr_rdata;// From axi_ddr_256_inst of axi_ddr_256.v
wire [3:0]		axi4_from_bridge_to_ddr_rid;// From axi_ddr_256_inst of axi_ddr_256.v
wire			axi4_from_bridge_to_ddr_rlast;// From axi_ddr_256_inst of axi_ddr_256.v
wire			axi4_from_bridge_to_ddr_rready;// From axi_64_to_256_inst of axi_64_to_256.v
wire [1:0]		axi4_from_bridge_to_ddr_rresp;// From axi_ddr_256_inst of axi_ddr_256.v
wire			axi4_from_bridge_to_ddr_rvalid;// From axi_ddr_256_inst of axi_ddr_256.v
wire [255:0]		axi4_from_bridge_to_ddr_wdata;// From axi_64_to_256_inst of axi_64_to_256.v
wire			axi4_from_bridge_to_ddr_wlast;// From axi_64_to_256_inst of axi_64_to_256.v
wire			axi4_from_bridge_to_ddr_wready;// From axi_ddr_256_inst of axi_ddr_256.v
wire [31:0]		axi4_from_bridge_to_ddr_wstrb;// From axi_64_to_256_inst of axi_64_to_256.v
wire			axi4_from_bridge_to_ddr_wvalid;// From axi_64_to_256_inst of axi_64_to_256.v
wire			m_axi_arlock;		// From axi_64_to_256_inst of axi_64_to_256.v
wire			m_axi_awlock;		// From axi_64_to_256_inst of axi_64_to_256.v
// End of automatics

/*autotieoff*/
// Beginning of automatic tieoffs (for this module's unterminated outputs)
assign axi4_slv_buser				= 4'h0;
assign axi4_slv_ruser				= 4'h0;
// End of automatics

assign axi4_from_bridge_to_ddr_awid = 'd0;
assign axi4_from_bridge_to_ddr_arid = 'd0;

/*axi_64_to_256 auto_template(
	.\(.*\)_\(.*\)lock(\1_\2lock),
	.s_axi_\(.*\)(axi4_slv_\1[]),
	.m_axi_\(.*\)(axi4_from_bridge_to_ddr_\1[]),
  ..*(),
);*/
axi_64_to_256 axi_64_to_256_inst(/*autoinst*/
				 // Outputs
				 .s_axi_awready		(axi4_slv_awready), // Templated
				 .s_axi_wready		(axi4_slv_wready), // Templated
				 .s_axi_bid		(axi4_slv_bid[3:0]), // Templated
				 .s_axi_bresp		(axi4_slv_bresp[1:0]), // Templated
				 .s_axi_bvalid		(axi4_slv_bvalid), // Templated
				 .s_axi_arready		(axi4_slv_arready), // Templated
				 .s_axi_rid		(axi4_slv_rid[3:0]), // Templated
				 .s_axi_rdata		(axi4_slv_rdata[63:0]), // Templated
				 .s_axi_rresp		(axi4_slv_rresp[1:0]), // Templated
				 .s_axi_rlast		(axi4_slv_rlast), // Templated
				 .s_axi_rvalid		(axi4_slv_rvalid), // Templated
				 .m_axi_awaddr		(axi4_from_bridge_to_ddr_awaddr[31:0]), // Templated
				 .m_axi_awlen		(axi4_from_bridge_to_ddr_awlen[7:0]), // Templated
				 .m_axi_awsize		(axi4_from_bridge_to_ddr_awsize[2:0]), // Templated
				 .m_axi_awburst		(axi4_from_bridge_to_ddr_awburst[1:0]), // Templated
				 .m_axi_awlock		(m_axi_awlock),	 // Templated
				 .m_axi_awcache		(axi4_from_bridge_to_ddr_awcache[3:0]), // Templated
				 .m_axi_awprot		(axi4_from_bridge_to_ddr_awprot[2:0]), // Templated
				 .m_axi_awregion	(axi4_from_bridge_to_ddr_awregion[3:0]), // Templated
				 .m_axi_awqos		(axi4_from_bridge_to_ddr_awqos[3:0]), // Templated
				 .m_axi_awvalid		(axi4_from_bridge_to_ddr_awvalid), // Templated
				 .m_axi_wdata		(axi4_from_bridge_to_ddr_wdata[255:0]), // Templated
				 .m_axi_wstrb		(axi4_from_bridge_to_ddr_wstrb[31:0]), // Templated
				 .m_axi_wlast		(axi4_from_bridge_to_ddr_wlast), // Templated
				 .m_axi_wvalid		(axi4_from_bridge_to_ddr_wvalid), // Templated
				 .m_axi_bready		(axi4_from_bridge_to_ddr_bready), // Templated
				 .m_axi_araddr		(axi4_from_bridge_to_ddr_araddr[31:0]), // Templated
				 .m_axi_arlen		(axi4_from_bridge_to_ddr_arlen[7:0]), // Templated
				 .m_axi_arsize		(axi4_from_bridge_to_ddr_arsize[2:0]), // Templated
				 .m_axi_arburst		(axi4_from_bridge_to_ddr_arburst[1:0]), // Templated
				 .m_axi_arlock		(m_axi_arlock),	 // Templated
				 .m_axi_arcache		(axi4_from_bridge_to_ddr_arcache[3:0]), // Templated
				 .m_axi_arprot		(axi4_from_bridge_to_ddr_arprot[2:0]), // Templated
				 .m_axi_arregion	(axi4_from_bridge_to_ddr_arregion[3:0]), // Templated
				 .m_axi_arqos		(axi4_from_bridge_to_ddr_arqos[3:0]), // Templated
				 .m_axi_arvalid		(axi4_from_bridge_to_ddr_arvalid), // Templated
				 .m_axi_rready		(axi4_from_bridge_to_ddr_rready), // Templated
				 // Inputs
				 .s_axi_aclk		(axi4_slv_aclk), // Templated
				 .s_axi_aresetn		(axi4_slv_aresetn), // Templated
				 .s_axi_awid		(axi4_slv_awid[3:0]), // Templated
				 .s_axi_awaddr		(axi4_slv_awaddr[31:0]), // Templated
				 .s_axi_awlen		(axi4_slv_awlen[7:0]), // Templated
				 .s_axi_awsize		(axi4_slv_awsize[2:0]), // Templated
				 .s_axi_awburst		(axi4_slv_awburst[1:0]), // Templated
				 .s_axi_awlock		(s_axi_awlock),	 // Templated
				 .s_axi_awcache		(axi4_slv_awcache[3:0]), // Templated
				 .s_axi_awprot		(axi4_slv_awprot[2:0]), // Templated
				 .s_axi_awregion	(axi4_slv_awregion[3:0]), // Templated
				 .s_axi_awqos		(axi4_slv_awqos[3:0]), // Templated
				 .s_axi_awvalid		(axi4_slv_awvalid), // Templated
				 .s_axi_wdata		(axi4_slv_wdata[63:0]), // Templated
				 .s_axi_wstrb		(axi4_slv_wstrb[7:0]), // Templated
				 .s_axi_wlast		(axi4_slv_wlast), // Templated
				 .s_axi_wvalid		(axi4_slv_wvalid), // Templated
				 .s_axi_bready		(axi4_slv_bready), // Templated
				 .s_axi_arid		(axi4_slv_arid[3:0]), // Templated
				 .s_axi_araddr		(axi4_slv_araddr[31:0]), // Templated
				 .s_axi_arlen		(axi4_slv_arlen[7:0]), // Templated
				 .s_axi_arsize		(axi4_slv_arsize[2:0]), // Templated
				 .s_axi_arburst		(axi4_slv_arburst[1:0]), // Templated
				 .s_axi_arlock		(s_axi_arlock),	 // Templated
				 .s_axi_arcache		(axi4_slv_arcache[3:0]), // Templated
				 .s_axi_arprot		(axi4_slv_arprot[2:0]), // Templated
				 .s_axi_arregion	(axi4_slv_arregion[3:0]), // Templated
				 .s_axi_arqos		(axi4_slv_arqos[3:0]), // Templated
				 .s_axi_arvalid		(axi4_slv_arvalid), // Templated
				 .s_axi_rready		(axi4_slv_rready), // Templated
				 .m_axi_aclk		(axi4_from_bridge_to_ddr_aclk), // Templated
				 .m_axi_aresetn		(axi4_from_bridge_to_ddr_aresetn), // Templated
				 .m_axi_awready		(axi4_from_bridge_to_ddr_awready), // Templated
				 .m_axi_wready		(axi4_from_bridge_to_ddr_wready), // Templated
				 .m_axi_bresp		(axi4_from_bridge_to_ddr_bresp[1:0]), // Templated
				 .m_axi_bvalid		(axi4_from_bridge_to_ddr_bvalid), // Templated
				 .m_axi_arready		(axi4_from_bridge_to_ddr_arready), // Templated
				 .m_axi_rdata		(axi4_from_bridge_to_ddr_rdata[255:0]), // Templated
				 .m_axi_rresp		(axi4_from_bridge_to_ddr_rresp[1:0]), // Templated
				 .m_axi_rlast		(axi4_from_bridge_to_ddr_rlast), // Templated
				 .m_axi_rvalid		(axi4_from_bridge_to_ddr_rvalid)); // Templated

/*axi_ddr_256 auto_template(
	.\(.*\)_\(.*\)lock(\1_\2lock),
	.s_axi_\(.*\)(axi4_from_bridge_to_ddr_\1[]),
  ..*(),
);*/
axi_ddr_256 axi_ddr_256_inst(/*autoinst*/
			     // Outputs
			     .ddr3_addr		(),		 // Templated
			     .ddr3_ba		(),		 // Templated
			     .ddr3_ras_n	(),		 // Templated
			     .ddr3_cas_n	(),		 // Templated
			     .ddr3_we_n		(),		 // Templated
			     .ddr3_reset_n	(),		 // Templated
			     .ddr3_ck_p		(),		 // Templated
			     .ddr3_ck_n		(),		 // Templated
			     .ddr3_cke		(),		 // Templated
			     .ddr3_cs_n		(),		 // Templated
			     .ddr3_dm		(),		 // Templated
			     .ddr3_odt		(),		 // Templated
			     .ui_clk		(),		 // Templated
			     .ui_clk_sync_rst	(),		 // Templated
			     .mmcm_locked	(),		 // Templated
			     .app_sr_active	(),		 // Templated
			     .app_ref_ack	(),		 // Templated
			     .app_zq_ack	(),		 // Templated
			     .s_axi_awready	(axi4_from_bridge_to_ddr_awready), // Templated
			     .s_axi_wready	(axi4_from_bridge_to_ddr_wready), // Templated
			     .s_axi_bid		(axi4_from_bridge_to_ddr_bid[3:0]), // Templated
			     .s_axi_bresp	(axi4_from_bridge_to_ddr_bresp[1:0]), // Templated
			     .s_axi_bvalid	(axi4_from_bridge_to_ddr_bvalid), // Templated
			     .s_axi_arready	(axi4_from_bridge_to_ddr_arready), // Templated
			     .s_axi_rid		(axi4_from_bridge_to_ddr_rid[3:0]), // Templated
			     .s_axi_rdata	(axi4_from_bridge_to_ddr_rdata[255:0]), // Templated
			     .s_axi_rresp	(axi4_from_bridge_to_ddr_rresp[1:0]), // Templated
			     .s_axi_rlast	(axi4_from_bridge_to_ddr_rlast), // Templated
			     .s_axi_rvalid	(axi4_from_bridge_to_ddr_rvalid), // Templated
			     .init_calib_complete(),		 // Templated
			     .device_temp	(),		 // Templated
			     // Inouts
			     .ddr3_dq		(),		 // Templated
			     .ddr3_dqs_n	(),		 // Templated
			     .ddr3_dqs_p	(),		 // Templated
			     // Inputs
			     .sys_clk_i		(),		 // Templated
			     .clk_ref_i		(),		 // Templated
			     .aresetn		(),		 // Templated
			     .app_sr_req	(),		 // Templated
			     .app_ref_req	(),		 // Templated
			     .app_zq_req	(),		 // Templated
			     .s_axi_awid	(axi4_from_bridge_to_ddr_awid[3:0]), // Templated
			     .s_axi_awaddr	(axi4_from_bridge_to_ddr_awaddr[29:0]), // Templated
			     .s_axi_awlen	(axi4_from_bridge_to_ddr_awlen[7:0]), // Templated
			     .s_axi_awsize	(axi4_from_bridge_to_ddr_awsize[2:0]), // Templated
			     .s_axi_awburst	(axi4_from_bridge_to_ddr_awburst[1:0]), // Templated
			     .s_axi_awlock	(s_axi_awlock),	 // Templated
			     .s_axi_awcache	(axi4_from_bridge_to_ddr_awcache[3:0]), // Templated
			     .s_axi_awprot	(axi4_from_bridge_to_ddr_awprot[2:0]), // Templated
			     .s_axi_awqos	(axi4_from_bridge_to_ddr_awqos[3:0]), // Templated
			     .s_axi_awvalid	(axi4_from_bridge_to_ddr_awvalid), // Templated
			     .s_axi_wdata	(axi4_from_bridge_to_ddr_wdata[255:0]), // Templated
			     .s_axi_wstrb	(axi4_from_bridge_to_ddr_wstrb[31:0]), // Templated
			     .s_axi_wlast	(axi4_from_bridge_to_ddr_wlast), // Templated
			     .s_axi_wvalid	(axi4_from_bridge_to_ddr_wvalid), // Templated
			     .s_axi_bready	(axi4_from_bridge_to_ddr_bready), // Templated
			     .s_axi_arid	(axi4_from_bridge_to_ddr_arid[3:0]), // Templated
			     .s_axi_araddr	(axi4_from_bridge_to_ddr_araddr[29:0]), // Templated
			     .s_axi_arlen	(axi4_from_bridge_to_ddr_arlen[7:0]), // Templated
			     .s_axi_arsize	(axi4_from_bridge_to_ddr_arsize[2:0]), // Templated
			     .s_axi_arburst	(axi4_from_bridge_to_ddr_arburst[1:0]), // Templated
			     .s_axi_arlock	(s_axi_arlock),	 // Templated
			     .s_axi_arcache	(axi4_from_bridge_to_ddr_arcache[3:0]), // Templated
			     .s_axi_arprot	(axi4_from_bridge_to_ddr_arprot[2:0]), // Templated
			     .s_axi_arqos	(axi4_from_bridge_to_ddr_arqos[3:0]), // Templated
			     .s_axi_arvalid	(axi4_from_bridge_to_ddr_arvalid), // Templated
			     .s_axi_rready	(axi4_from_bridge_to_ddr_rready), // Templated
			     .device_temp_i	(),		 // Templated
			     .sys_rst		());		 // Templated

endmodule
// Local Variables:
// verilog-auto-tieoff-declaration:"assign"
// verilog-library-flags:("-y ../ip/axi_64_to_256/synth/" "-v ../ip/axi_ddr_256/axi_ddr_256_stub.v")
// verilog-library-extensions:(".v" ".sv")
// End:

