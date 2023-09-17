
module top(
  input  logic        clk,
  input  logic        rst_n,
  //uart
  output logic        uart_txd,
  input  logic        uart_rxd,
  //jtag
  input  logic        jtag_tck,
  input  logic        jtag_tms,
  input  logic        jtag_tdi,
  output logic        jtag_tdo
);

/*autowire*/
// Beginning of automatic wires (for undeclared instantiated-module outputs)
logic [30:0]		axi_rocket_to_ddr_araddr;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_ddr_arburst;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_arcache;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_arid;	// From rocket_wrapper_inst of rocket_wrapper.v
logic [7:0]		axi_rocket_to_ddr_arlen;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_arlock;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_ddr_arprot;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_arqos;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_arready;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [3:0]		axi_rocket_to_ddr_arregion;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_ddr_arsize;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_aruser;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_arvalid;// From rocket_wrapper_inst of rocket_wrapper.v
logic [30:0]		axi_rocket_to_ddr_awaddr;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_ddr_awburst;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_awcache;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_awid;	// From rocket_wrapper_inst of rocket_wrapper.v
logic [7:0]		axi_rocket_to_ddr_awlen;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_awlock;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_ddr_awprot;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_awqos;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_awready;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [3:0]		axi_rocket_to_ddr_awregion;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_ddr_awsize;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_awuser;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_awvalid;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_bid;	// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic			axi_rocket_to_ddr_bready;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_ddr_bresp;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [3:0]		axi_rocket_to_ddr_buser;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic			axi_rocket_to_ddr_bvalid;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [63:0]		axi_rocket_to_ddr_rdata;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [3:0]		axi_rocket_to_ddr_rid;	// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic			axi_rocket_to_ddr_rlast;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic			axi_rocket_to_ddr_rready;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_ddr_rresp;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [3:0]		axi_rocket_to_ddr_ruser;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic			axi_rocket_to_ddr_rvalid;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [63:0]		axi_rocket_to_ddr_wdata;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_wlast;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_wready;// From axi_ddr_wrapper_inst of axi_ddr_wrapper.v
logic [7:0]		axi_rocket_to_ddr_wstrb;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_ddr_wuser;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_ddr_wvalid;// From rocket_wrapper_inst of rocket_wrapper.v
logic [29:0]		axi_rocket_to_sram_araddr;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_sram_arburst;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_arcache;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_arid;// From rocket_wrapper_inst of rocket_wrapper.v
logic [7:0]		axi_rocket_to_sram_arlen;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_arlock;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_sram_arprot;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_arqos;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_arready;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [3:0]		axi_rocket_to_sram_arregion;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_sram_arsize;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_aruser;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_arvalid;// From rocket_wrapper_inst of rocket_wrapper.v
logic [29:0]		axi_rocket_to_sram_awaddr;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_sram_awburst;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_awcache;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_awid;// From rocket_wrapper_inst of rocket_wrapper.v
logic [7:0]		axi_rocket_to_sram_awlen;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_awlock;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_sram_awprot;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_awqos;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_awready;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [3:0]		axi_rocket_to_sram_awregion;// From rocket_wrapper_inst of rocket_wrapper.v
logic [2:0]		axi_rocket_to_sram_awsize;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_awuser;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_awvalid;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_bid;	// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic			axi_rocket_to_sram_bready;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_sram_bresp;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [3:0]		axi_rocket_to_sram_buser;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic			axi_rocket_to_sram_bvalid;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [63:0]		axi_rocket_to_sram_rdata;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [3:0]		axi_rocket_to_sram_rid;	// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic			axi_rocket_to_sram_rlast;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic			axi_rocket_to_sram_rready;// From rocket_wrapper_inst of rocket_wrapper.v
logic [1:0]		axi_rocket_to_sram_rresp;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [3:0]		axi_rocket_to_sram_ruser;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic			axi_rocket_to_sram_rvalid;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [63:0]		axi_rocket_to_sram_wdata;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_wlast;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_wready;// From axi_sram_wrapper_inst of axi_sram_wrapper.v
logic [7:0]		axi_rocket_to_sram_wstrb;// From rocket_wrapper_inst of rocket_wrapper.v
logic [3:0]		axi_rocket_to_sram_wuser;// From rocket_wrapper_inst of rocket_wrapper.v
logic			axi_rocket_to_sram_wvalid;// From rocket_wrapper_inst of rocket_wrapper.v
// End of automatics

/*rocket_wrapper auto_template(
  .axi4_mst_mmio_\(.*\)(axi_rocket_to_sram_\1[]),
  .axi4_mst_mem_\(.*\)(axi_rocket_to_ddr_\1[]),
  ..*(),
);*/
rocket_wrapper rocket_wrapper_inst(/*autoinst*/
				   // Outputs
				   .uart_txd		(),		 // Templated
				   .jtag_tdo		(),		 // Templated
				   .axi4_mst_mmio_awid	(axi_rocket_to_sram_awid[3:0]), // Templated
				   .axi4_mst_mmio_awaddr(axi_rocket_to_sram_awaddr[29:0]), // Templated
				   .axi4_mst_mmio_awlen	(axi_rocket_to_sram_awlen[7:0]), // Templated
				   .axi4_mst_mmio_awsize(axi_rocket_to_sram_awsize[2:0]), // Templated
				   .axi4_mst_mmio_awburst(axi_rocket_to_sram_awburst[1:0]), // Templated
				   .axi4_mst_mmio_awlock(axi_rocket_to_sram_awlock), // Templated
				   .axi4_mst_mmio_awcache(axi_rocket_to_sram_awcache[3:0]), // Templated
				   .axi4_mst_mmio_awprot(axi_rocket_to_sram_awprot[2:0]), // Templated
				   .axi4_mst_mmio_awqos	(axi_rocket_to_sram_awqos[3:0]), // Templated
				   .axi4_mst_mmio_awregion(axi_rocket_to_sram_awregion[3:0]), // Templated
				   .axi4_mst_mmio_awuser(axi_rocket_to_sram_awuser[3:0]), // Templated
				   .axi4_mst_mmio_awvalid(axi_rocket_to_sram_awvalid), // Templated
				   .axi4_mst_mmio_wdata	(axi_rocket_to_sram_wdata[63:0]), // Templated
				   .axi4_mst_mmio_wstrb	(axi_rocket_to_sram_wstrb[7:0]), // Templated
				   .axi4_mst_mmio_wlast	(axi_rocket_to_sram_wlast), // Templated
				   .axi4_mst_mmio_wuser	(axi_rocket_to_sram_wuser[3:0]), // Templated
				   .axi4_mst_mmio_wvalid(axi_rocket_to_sram_wvalid), // Templated
				   .axi4_mst_mmio_bready(axi_rocket_to_sram_bready), // Templated
				   .axi4_mst_mmio_arid	(axi_rocket_to_sram_arid[3:0]), // Templated
				   .axi4_mst_mmio_araddr(axi_rocket_to_sram_araddr[29:0]), // Templated
				   .axi4_mst_mmio_arlen	(axi_rocket_to_sram_arlen[7:0]), // Templated
				   .axi4_mst_mmio_arsize(axi_rocket_to_sram_arsize[2:0]), // Templated
				   .axi4_mst_mmio_arburst(axi_rocket_to_sram_arburst[1:0]), // Templated
				   .axi4_mst_mmio_arlock(axi_rocket_to_sram_arlock), // Templated
				   .axi4_mst_mmio_arcache(axi_rocket_to_sram_arcache[3:0]), // Templated
				   .axi4_mst_mmio_arprot(axi_rocket_to_sram_arprot[2:0]), // Templated
				   .axi4_mst_mmio_arqos	(axi_rocket_to_sram_arqos[3:0]), // Templated
				   .axi4_mst_mmio_arregion(axi_rocket_to_sram_arregion[3:0]), // Templated
				   .axi4_mst_mmio_aruser(axi_rocket_to_sram_aruser[3:0]), // Templated
				   .axi4_mst_mmio_arvalid(axi_rocket_to_sram_arvalid), // Templated
				   .axi4_mst_mmio_rready(axi_rocket_to_sram_rready), // Templated
				   .axi4_mst_mem_awid	(axi_rocket_to_ddr_awid[3:0]), // Templated
				   .axi4_mst_mem_awaddr	(axi_rocket_to_ddr_awaddr[30:0]), // Templated
				   .axi4_mst_mem_awlen	(axi_rocket_to_ddr_awlen[7:0]), // Templated
				   .axi4_mst_mem_awsize	(axi_rocket_to_ddr_awsize[2:0]), // Templated
				   .axi4_mst_mem_awburst(axi_rocket_to_ddr_awburst[1:0]), // Templated
				   .axi4_mst_mem_awlock	(axi_rocket_to_ddr_awlock), // Templated
				   .axi4_mst_mem_awcache(axi_rocket_to_ddr_awcache[3:0]), // Templated
				   .axi4_mst_mem_awprot	(axi_rocket_to_ddr_awprot[2:0]), // Templated
				   .axi4_mst_mem_awqos	(axi_rocket_to_ddr_awqos[3:0]), // Templated
				   .axi4_mst_mem_awregion(axi_rocket_to_ddr_awregion[3:0]), // Templated
				   .axi4_mst_mem_awuser	(axi_rocket_to_ddr_awuser[3:0]), // Templated
				   .axi4_mst_mem_awvalid(axi_rocket_to_ddr_awvalid), // Templated
				   .axi4_mst_mem_wdata	(axi_rocket_to_ddr_wdata[63:0]), // Templated
				   .axi4_mst_mem_wstrb	(axi_rocket_to_ddr_wstrb[7:0]), // Templated
				   .axi4_mst_mem_wlast	(axi_rocket_to_ddr_wlast), // Templated
				   .axi4_mst_mem_wuser	(axi_rocket_to_ddr_wuser[3:0]), // Templated
				   .axi4_mst_mem_wvalid	(axi_rocket_to_ddr_wvalid), // Templated
				   .axi4_mst_mem_bready	(axi_rocket_to_ddr_bready), // Templated
				   .axi4_mst_mem_arid	(axi_rocket_to_ddr_arid[3:0]), // Templated
				   .axi4_mst_mem_araddr	(axi_rocket_to_ddr_araddr[30:0]), // Templated
				   .axi4_mst_mem_arlen	(axi_rocket_to_ddr_arlen[7:0]), // Templated
				   .axi4_mst_mem_arsize	(axi_rocket_to_ddr_arsize[2:0]), // Templated
				   .axi4_mst_mem_arburst(axi_rocket_to_ddr_arburst[1:0]), // Templated
				   .axi4_mst_mem_arlock	(axi_rocket_to_ddr_arlock), // Templated
				   .axi4_mst_mem_arcache(axi_rocket_to_ddr_arcache[3:0]), // Templated
				   .axi4_mst_mem_arprot	(axi_rocket_to_ddr_arprot[2:0]), // Templated
				   .axi4_mst_mem_arqos	(axi_rocket_to_ddr_arqos[3:0]), // Templated
				   .axi4_mst_mem_arregion(axi_rocket_to_ddr_arregion[3:0]), // Templated
				   .axi4_mst_mem_aruser	(axi_rocket_to_ddr_aruser[3:0]), // Templated
				   .axi4_mst_mem_arvalid(axi_rocket_to_ddr_arvalid), // Templated
				   .axi4_mst_mem_rready	(axi_rocket_to_ddr_rready), // Templated
				   // Inputs
				   .clk			(),		 // Templated
				   .rst_n		(),		 // Templated
				   .uart_rxd		(),		 // Templated
				   .jtag_tck		(),		 // Templated
				   .jtag_tms		(),		 // Templated
				   .jtag_tdi		(),		 // Templated
				   .axi4_mst_mmio_awready(axi_rocket_to_sram_awready), // Templated
				   .axi4_mst_mmio_wready(axi_rocket_to_sram_wready), // Templated
				   .axi4_mst_mmio_bid	(axi_rocket_to_sram_bid[3:0]), // Templated
				   .axi4_mst_mmio_bresp	(axi_rocket_to_sram_bresp[1:0]), // Templated
				   .axi4_mst_mmio_buser	(axi_rocket_to_sram_buser[3:0]), // Templated
				   .axi4_mst_mmio_bvalid(axi_rocket_to_sram_bvalid), // Templated
				   .axi4_mst_mmio_arready(axi_rocket_to_sram_arready), // Templated
				   .axi4_mst_mmio_rid	(axi_rocket_to_sram_rid[3:0]), // Templated
				   .axi4_mst_mmio_rdata	(axi_rocket_to_sram_rdata[63:0]), // Templated
				   .axi4_mst_mmio_rresp	(axi_rocket_to_sram_rresp[1:0]), // Templated
				   .axi4_mst_mmio_rlast	(axi_rocket_to_sram_rlast), // Templated
				   .axi4_mst_mmio_ruser	(axi_rocket_to_sram_ruser[3:0]), // Templated
				   .axi4_mst_mmio_rvalid(axi_rocket_to_sram_rvalid), // Templated
				   .axi4_mst_mem_awready(axi_rocket_to_ddr_awready), // Templated
				   .axi4_mst_mem_wready	(axi_rocket_to_ddr_wready), // Templated
				   .axi4_mst_mem_bid	(axi_rocket_to_ddr_bid[3:0]), // Templated
				   .axi4_mst_mem_bresp	(axi_rocket_to_ddr_bresp[1:0]), // Templated
				   .axi4_mst_mem_buser	(axi_rocket_to_ddr_buser[3:0]), // Templated
				   .axi4_mst_mem_bvalid	(axi_rocket_to_ddr_bvalid), // Templated
				   .axi4_mst_mem_arready(axi_rocket_to_ddr_arready), // Templated
				   .axi4_mst_mem_rid	(axi_rocket_to_ddr_rid[3:0]), // Templated
				   .axi4_mst_mem_rdata	(axi_rocket_to_ddr_rdata[63:0]), // Templated
				   .axi4_mst_mem_rresp	(axi_rocket_to_ddr_rresp[1:0]), // Templated
				   .axi4_mst_mem_rlast	(axi_rocket_to_ddr_rlast), // Templated
				   .axi4_mst_mem_ruser	(axi_rocket_to_ddr_ruser[3:0]), // Templated
				   .axi4_mst_mem_rvalid	(axi_rocket_to_ddr_rvalid)); // Templated

/*axi_sram_wrapper auto_template(
  .axi4_slv_\(.*\)(axi_rocket_to_sram_\1[]),
  ..*(),
);*/
axi_sram_wrapper axi_sram_wrapper_inst(/*autoinst*/
				       // Outputs
				       .axi4_slv_awready(axi_rocket_to_sram_awready), // Templated
				       .axi4_slv_wready	(axi_rocket_to_sram_wready), // Templated
				       .axi4_slv_bid	(axi_rocket_to_sram_bid[3:0]), // Templated
				       .axi4_slv_bresp	(axi_rocket_to_sram_bresp[1:0]), // Templated
				       .axi4_slv_buser	(axi_rocket_to_sram_buser[3:0]), // Templated
				       .axi4_slv_bvalid	(axi_rocket_to_sram_bvalid), // Templated
				       .axi4_slv_arready(axi_rocket_to_sram_arready), // Templated
				       .axi4_slv_rid	(axi_rocket_to_sram_rid[3:0]), // Templated
				       .axi4_slv_rdata	(axi_rocket_to_sram_rdata[63:0]), // Templated
				       .axi4_slv_rresp	(axi_rocket_to_sram_rresp[1:0]), // Templated
				       .axi4_slv_rlast	(axi_rocket_to_sram_rlast), // Templated
				       .axi4_slv_ruser	(axi_rocket_to_sram_ruser[3:0]), // Templated
				       .axi4_slv_rvalid	(axi_rocket_to_sram_rvalid), // Templated
				       // Inputs
				       .axi4_slv_aclk	(axi_rocket_to_sram_aclk), // Templated
				       .axi4_slv_aresetn(axi_rocket_to_sram_aresetn), // Templated
				       .axi4_slv_awid	(axi_rocket_to_sram_awid[3:0]), // Templated
				       .axi4_slv_awaddr	(axi_rocket_to_sram_awaddr[30:0]), // Templated
				       .axi4_slv_awlen	(axi_rocket_to_sram_awlen[7:0]), // Templated
				       .axi4_slv_awsize	(axi_rocket_to_sram_awsize[2:0]), // Templated
				       .axi4_slv_awburst(axi_rocket_to_sram_awburst[1:0]), // Templated
				       .axi4_slv_awlock	(axi_rocket_to_sram_awlock), // Templated
				       .axi4_slv_awcache(axi_rocket_to_sram_awcache[3:0]), // Templated
				       .axi4_slv_awprot	(axi_rocket_to_sram_awprot[2:0]), // Templated
				       .axi4_slv_awqos	(axi_rocket_to_sram_awqos[3:0]), // Templated
				       .axi4_slv_awregion(axi_rocket_to_sram_awregion[3:0]), // Templated
				       .axi4_slv_awuser	(axi_rocket_to_sram_awuser[3:0]), // Templated
				       .axi4_slv_awvalid(axi_rocket_to_sram_awvalid), // Templated
				       .axi4_slv_wdata	(axi_rocket_to_sram_wdata[63:0]), // Templated
				       .axi4_slv_wstrb	(axi_rocket_to_sram_wstrb[7:0]), // Templated
				       .axi4_slv_wlast	(axi_rocket_to_sram_wlast), // Templated
				       .axi4_slv_wuser	(axi_rocket_to_sram_wuser[3:0]), // Templated
				       .axi4_slv_wvalid	(axi_rocket_to_sram_wvalid), // Templated
				       .axi4_slv_bready	(axi_rocket_to_sram_bready), // Templated
				       .axi4_slv_arid	(axi_rocket_to_sram_arid[3:0]), // Templated
				       .axi4_slv_araddr	(axi_rocket_to_sram_araddr[30:0]), // Templated
				       .axi4_slv_arlen	(axi_rocket_to_sram_arlen[7:0]), // Templated
				       .axi4_slv_arsize	(axi_rocket_to_sram_arsize[2:0]), // Templated
				       .axi4_slv_arburst(axi_rocket_to_sram_arburst[1:0]), // Templated
				       .axi4_slv_arlock	(axi_rocket_to_sram_arlock), // Templated
				       .axi4_slv_arcache(axi_rocket_to_sram_arcache[3:0]), // Templated
				       .axi4_slv_arprot	(axi_rocket_to_sram_arprot[2:0]), // Templated
				       .axi4_slv_arqos	(axi_rocket_to_sram_arqos[3:0]), // Templated
				       .axi4_slv_arregion(axi_rocket_to_sram_arregion[3:0]), // Templated
				       .axi4_slv_aruser	(axi_rocket_to_sram_aruser[3:0]), // Templated
				       .axi4_slv_arvalid(axi_rocket_to_sram_arvalid), // Templated
				       .axi4_slv_rready	(axi_rocket_to_sram_rready)); // Templated

/*axi_ddr_wrapper auto_template(
  .axi4_slv_\(.*\)(axi_rocket_to_ddr_\1[]),
  ..*(),
);*/
axi_ddr_wrapper axi_ddr_wrapper_inst(/*autoinst*/
				     // Outputs
				     .axi4_slv_awready	(axi_rocket_to_ddr_awready), // Templated
				     .axi4_slv_wready	(axi_rocket_to_ddr_wready), // Templated
				     .axi4_slv_bid	(axi_rocket_to_ddr_bid[3:0]), // Templated
				     .axi4_slv_bresp	(axi_rocket_to_ddr_bresp[1:0]), // Templated
				     .axi4_slv_buser	(axi_rocket_to_ddr_buser[3:0]), // Templated
				     .axi4_slv_bvalid	(axi_rocket_to_ddr_bvalid), // Templated
				     .axi4_slv_arready	(axi_rocket_to_ddr_arready), // Templated
				     .axi4_slv_rid	(axi_rocket_to_ddr_rid[3:0]), // Templated
				     .axi4_slv_rdata	(axi_rocket_to_ddr_rdata[63:0]), // Templated
				     .axi4_slv_rresp	(axi_rocket_to_ddr_rresp[1:0]), // Templated
				     .axi4_slv_rlast	(axi_rocket_to_ddr_rlast), // Templated
				     .axi4_slv_ruser	(axi_rocket_to_ddr_ruser[3:0]), // Templated
				     .axi4_slv_rvalid	(axi_rocket_to_ddr_rvalid), // Templated
				     // Inputs
				     .axi4_slv_aclk	(axi_rocket_to_ddr_aclk), // Templated
				     .axi4_slv_aresetn	(axi_rocket_to_ddr_aresetn), // Templated
				     .axi4_slv_awid	(axi_rocket_to_ddr_awid[3:0]), // Templated
				     .axi4_slv_awaddr	(axi_rocket_to_ddr_awaddr[30:0]), // Templated
				     .axi4_slv_awlen	(axi_rocket_to_ddr_awlen[7:0]), // Templated
				     .axi4_slv_awsize	(axi_rocket_to_ddr_awsize[2:0]), // Templated
				     .axi4_slv_awburst	(axi_rocket_to_ddr_awburst[1:0]), // Templated
				     .axi4_slv_awlock	(axi_rocket_to_ddr_awlock), // Templated
				     .axi4_slv_awcache	(axi_rocket_to_ddr_awcache[3:0]), // Templated
				     .axi4_slv_awprot	(axi_rocket_to_ddr_awprot[2:0]), // Templated
				     .axi4_slv_awqos	(axi_rocket_to_ddr_awqos[3:0]), // Templated
				     .axi4_slv_awregion	(axi_rocket_to_ddr_awregion[3:0]), // Templated
				     .axi4_slv_awuser	(axi_rocket_to_ddr_awuser[3:0]), // Templated
				     .axi4_slv_awvalid	(axi_rocket_to_ddr_awvalid), // Templated
				     .axi4_slv_wdata	(axi_rocket_to_ddr_wdata[63:0]), // Templated
				     .axi4_slv_wstrb	(axi_rocket_to_ddr_wstrb[7:0]), // Templated
				     .axi4_slv_wlast	(axi_rocket_to_ddr_wlast), // Templated
				     .axi4_slv_wuser	(axi_rocket_to_ddr_wuser[3:0]), // Templated
				     .axi4_slv_wvalid	(axi_rocket_to_ddr_wvalid), // Templated
				     .axi4_slv_bready	(axi_rocket_to_ddr_bready), // Templated
				     .axi4_slv_arid	(axi_rocket_to_ddr_arid[3:0]), // Templated
				     .axi4_slv_araddr	(axi_rocket_to_ddr_araddr[30:0]), // Templated
				     .axi4_slv_arlen	(axi_rocket_to_ddr_arlen[7:0]), // Templated
				     .axi4_slv_arsize	(axi_rocket_to_ddr_arsize[2:0]), // Templated
				     .axi4_slv_arburst	(axi_rocket_to_ddr_arburst[1:0]), // Templated
				     .axi4_slv_arlock	(axi_rocket_to_ddr_arlock), // Templated
				     .axi4_slv_arcache	(axi_rocket_to_ddr_arcache[3:0]), // Templated
				     .axi4_slv_arprot	(axi_rocket_to_ddr_arprot[2:0]), // Templated
				     .axi4_slv_arqos	(axi_rocket_to_ddr_arqos[3:0]), // Templated
				     .axi4_slv_arregion	(axi_rocket_to_ddr_arregion[3:0]), // Templated
				     .axi4_slv_aruser	(axi_rocket_to_ddr_aruser[3:0]), // Templated
				     .axi4_slv_arvalid	(axi_rocket_to_ddr_arvalid), // Templated
				     .axi4_slv_rready	(axi_rocket_to_ddr_rready)); // Templated


endmodule
// Local Variables:
// verilog-auto-tieoff-declaration:"assign"
// verilog-library-flags:("-y ./")
// verilog-library-extensions:(".v" ".sv")
// End:

