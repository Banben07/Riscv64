module ysyx_22040125_AXI_RAM (
    input   wire             aclk,
    input   wire             aresetn,

    //ar
    input   wire[3:0]        arid,
    input   wire[31:0]       araddr,
    input   wire[7:0]        arlen,
    input   wire[2:0]        arsize,
    input   wire[1:0]        arburst,
    input   wire[1:0]        arlock,
    input   wire[3:0]        arcache,
    input   wire[2:0]        arprot,
    input   wire             arvalid,
    output  wire             arready,

    //r
    output reg [3:0]         rid,
    output wire[63:0]        rdata,
    output wire[1:0]         rresp,
    output wire              rlast,
    output wire              rvalid,
    input  wire              rready,

    //aw
    input  wire[3:0]         awid,
    input  wire[31:0]        awaddr,
    input  wire[7:0]         awlen,
    input  wire[2:0]         awsize,
    input  wire[1:0]         awburst,
    input  wire[1:0]         awlock,
    input  wire[3:0]         awcache,
    input  wire[2:0]         awprot,
    input  wire              awvalid,
    output wire              awready,

    //w
    input  wire[3:0]         wid,
    input  wire[63:0]        wdata,
    input  wire[7:0]         wstrb,
    input  wire              wlast,
    input  wire              wvalid,
    output wire              wready,

    //b
    output wire[3:0]         bid,
    output wire[1:0]         bresp,
    output wire              bvalid,
    input  wire              bready 
);

    wire r_en, w_en, rst_ram;
    reg[2:0]    r_size, w_size;
    reg[3:0]    r_rid;
    wire[7:0]   w_strb;
    reg[31:0]   r_addr, w_addr;
    wire [63:0] data_r, data_w;

    assign r_en = rvalid;
	assign w_en = wvalid & wready;

	assign rdata = data_r;
	assign data_w = wdata;
	assign w_strb = wstrb;

    always @ (posedge aclk) begin
		if(arvalid & arready) begin
			r_addr <= araddr;
            r_rid <= arid;
            r_size <= arsize;
            rid <= arid;
		end
		
		else if(awvalid & awready) begin
			w_addr <= awaddr;
            w_size <= awsize;
		end
	end

    reg[3:0] state;
    parameter RESET     =4'd0;
    parameter IDEL      =4'd1;
    parameter R_RDY     =4'd2;
    parameter W_WAR     =4'd3;
    parameter W_WDA     =4'd4;

    assign rst_ram = (state == RESET) | ((!aresetn) & state == 1);

	assign awready = (state == IDEL);
	assign arready = (state == IDEL);

	assign rvalid = (state == R_RDY);
	assign wready = (state == W_WAR);
    assign bvalid = (state == W_WDA);


    always @ (posedge aclk) begin
		if((!aresetn) && state <= IDEL) begin
			state <= RESET;
		end
		else if (state == RESET) begin
			state <= IDEL;
		end
		else if (state == IDEL) begin			
			if(arvalid) begin
				state <= R_RDY;
			end
			else if(awvalid) begin
				state <= W_WAR;
			end
		end
		else if (state == R_RDY) begin
			if(rready) begin
				state <= IDEL;
			end
		end
		else if (state == W_WAR) begin	
			if(wvalid) begin
				state <= W_WDA;
			end
		end
		else if (state == W_WDA) begin
			if(bready) begin
				state <= IDEL;
			end
		end
        else begin
            state <= RESET;
        end
	end

    ysyx_22040125_RAM   axiram(
                    .wdata(wdata),
                    .rst(rst_ram),
                    .r_rid(r_rid),
                    .w_addr(w_addr),
                    .r_addr(r_addr),
                    .arsize(r_size),
                    .awsize(w_size),
                    .data_wen(w_en),
                    .data_ren(r_en),
                    .clk(aclk),
                    .rdata(data_r)
                );

endmodule //ysyx_22040125_AXI_RAM
