module top (
    input  wire       clk,
    input  wire       rst,
    output reg        success
);

wire 	inst_r_en;
wire 	data_r_en;
wire 	data_w_en;
wire    data_r_valid;
wire    data_w_valid;
wire    inst_r_valid;
wire [2:0]	cpu_arsize;
wire [2:0]	cpu_awsize;
wire [7:0]	data_w_mask;
wire [31:0]	inst_addr;
wire [31:0] inst_r;
wire [31:0]	data_r_addr;
wire [31:0]	data_w_addr;
wire [63:0]	data_w;
wire [63:0]	data_r;
wire [3:0]	arid;
wire [31:0]	araddr;
wire [7:0]	arlen;
wire [2:0]	arsize;
wire [1:0]	arburst;
wire [1:0]	arlock;
wire [3:0]	arcache;
wire [2:0]	arprot;
wire 	arvalid;
wire 	rready;
wire [3:0]	awid;
wire [31:0]	awaddr;
wire [7:0]	awlen;
wire [2:0]	awsize;
wire [1:0]	awburst;
wire [1:0]	awlock;
wire [1:0]	rresp;
wire [1:0]  bresp;
wire [3:0]	awcache;
wire [2:0]	awprot;
wire 	awvalid;
wire [3:0]	wid;
wire [3:0]	rid;
wire [3:0]	bid;
wire [63:0]	wdata;
wire [63:0]	rdata;
wire [7:0]	wstrb;
wire 	wlast; 
wire 	rlast;
wire    bvalid;
wire 	rvalid;
wire 	awready;
wire 	wready;
wire 	wvalid;
wire 	bready;
wire 	arready;

ysyx_22040125_CPU u_ysyx_22040125_CPU(
	//ports
	.clk          		( clk          		),
	.rst          		( rst          		),
	.data_r_valid 		( data_r_valid 		),
	.data_w_valid 		( data_w_valid 		),
	.inst_r_valid 		( inst_r_valid 		),
	.inst_r       		( inst_r       		),
	.data_r       		( data_r       		),
	.inst_r_en    		( inst_r_en    		),
	.data_r_en    		( data_r_en    		),
	.data_w_en    		( data_w_en    		),
	.cpu_arsize   		( cpu_arsize   		),
	.cpu_awsize   		( cpu_awsize   		),
	.data_w_mask  		( data_w_mask  		),
	.inst_addr    		( inst_addr    		),
	.data_r_addr  		( data_r_addr  		),
	.data_w_addr  		( data_w_addr  		),
	.data_w       		( data_w       		),
	.success      		( success      		)
);

ysyx_22040125_AXI u_ysyx_22040125_AXI(
	//ports
	.aclk         		( clk         		),
	.aresetn      		( rst      		    ),
	.arid         		( arid         		),
	.araddr       		( araddr       		),
	.arlen        		( arlen        		),
	.arsize       		( arsize       		),
	.arburst      		( arburst      		),
	.arlock       		( arlock       		),
	.arcache      		( arcache      		),
	.arprot       		( arprot       		),
	.arvalid      		( arvalid      		),
	.arready      		( arready      		),
	.rid          		( rid          		),
	.rdata        		( rdata        		),
	.rresp        		( rresp        		),
	.rlast        		( rlast        		),
	.rvalid       		( rvalid       		),
	.rready       		( rready       		),
	.awid         		( awid         		),
	.awaddr       		( awaddr       		),
	.awlen        		( awlen        		),
	.awsize       		( awsize       		),
	.awburst      		( awburst      		),
	.awlock       		( awlock       		),
	.awcache      		( awcache      		),
	.awprot       		( awprot       		),
	.awvalid      		( awvalid      		),
	.awready      		( awready      		),
	.wid          		( wid          		),
	.wdata        		( wdata        		),
	.wstrb        		( wstrb        		),
	.wlast        		( wlast        		),
	.wvalid       		( wvalid       		),
	.wready       		( wready       		),
	.bid          		( bid          		),
	.bresp        		( bresp        		),
	.bvalid       		( bvalid       		),
	.bready       		( bready       		),
	.data_r_valid 		( data_r_valid 		),
	.data_w_valid 		( data_w_valid 		),
	.inst_r_valid 		( inst_r_valid 		),
	.inst_r_en    		( inst_r_en    		),
	.inst_addr    		( inst_addr    		),
	.inst_r       		( inst_r       		),
	.data_r_en    		( data_r_en    		),
	.data_w_en    		( data_w_en    		),
	.data_r_addr  		( data_r_addr  		),
	.data_w       		( data_w       		),
	.data_w_addr  		( data_w_addr  		),
	.data_w_mask  		( data_w_mask  		),
	.data_r       		( data_r       		),
	.cpu_arsize   		( cpu_arsize   		),
	.cpu_awsize   		( cpu_awsize   		)
);

ysyx_22040125_AXI_RAM u_ysyx_22040125_AXI_RAM(
	//ports
	.aclk    		( clk    		),
	.aresetn 		( rst 		    ),
	.arid    		( arid    		),
	.araddr  		( araddr  		),
	.arlen   		( arlen   		),
	.arsize  		( arsize  		),
	.arburst 		( arburst 		),
	.arlock  		( arlock  		),
	.arcache 		( arcache 		),
	.arprot  		( arprot  		),
	.arvalid 		( arvalid 		),
	.arready 		( arready 		),
	.rid     		( rid     		),
	.rdata   		( rdata   		),
	.rresp   		( rresp   		),
	.rlast   		( rlast   		),
	.rvalid  		( rvalid  		),
	.rready  		( rready  		),
	.awid    		( awid    		),
	.awaddr  		( awaddr  		),
	.awlen   		( awlen   		),
	.awsize  		( awsize  		),
	.awburst 		( awburst 		),
	.awlock  		( awlock  		),
	.awcache 		( awcache 		),
	.awprot  		( awprot  		),
	.awvalid 		( awvalid 		),
	.awready 		( awready 		),
	.wid     		( wid     		),
	.wdata   		( wdata   		),
	.wstrb   		( wstrb   		),
	.wlast   		( wlast   		),
	.wvalid  		( wvalid  		),
	.wready  		( wready  		),
	.bid     		( bid     		),
	.bresp   		( bresp   		),
	.bvalid  		( bvalid  		),
	.bready  		( bready  		)
);


endmodule //top
