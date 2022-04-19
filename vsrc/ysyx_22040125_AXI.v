`include "/home/sakamoto/ysyx-workbench/npc/vsrc/ysyx_22040125_config.v"
module ysyx_22040125_AXI (
    input   wire             aclk,
    input   wire             aresetn,

    //ar
    output  wire[3:0]        arid,
    output  wire[31:0]       araddr,
    output  wire[7:0]        arlen,
    output  wire[2:0]        arsize,
    output  wire[1:0]        arburst,
    output  wire[1:0]        arlock,
    output  wire[3:0]        arcache,
    output  wire[2:0]        arprot,
    output  wire             arvalid,
    input   wire             arready,

    //r
    input  wire[3:0]         rid,
    input  wire[63:0]        rdata,
    input  wire[1:0]         rresp,
    input  wire              rlast,
    input  wire              rvalid,
    output wire              rready,

    //aw
    output wire[3:0]         awid,
    output wire[31:0]        awaddr,
    output wire[7:0]         awlen,
    output wire[2:0]         awsize,
    output wire[1:0]         awburst,
    output wire[1:0]         awlock,
    output wire[3:0]         awcache,
    output wire[2:0]         awprot,
    output wire              awvalid,
    input  wire              awready,

    //w
    output wire[3:0]         wid,
    output wire[63:0]        wdata,
    output wire[7:0]         wstrb,
    output wire              wlast,
    output wire              wvalid,
    input  wire              wready,

    //b
    input  wire[3:0]         bid,
    input  wire[1:0]         bresp,
    input  wire              bvalid,
    output wire              bready,

    //cpu
    output reg               data_r_valid,
    output reg               data_w_valid,
    output reg               inst_r_valid,
    input  wire              inst_r_en,
    input  wire[31:0]        inst_addr,
    output reg[31:0]         inst_r,
    input  wire              data_r_en,
    input  wire              data_w_en,
    input  wire[31:0]        data_r_addr,
    input  wire[63:0]        data_w,
    input  wire[31:0]        data_w_addr,
    input  wire[7:0]         data_w_mask,
    output reg[63:0]         data_r,
    input  wire[2:0]         cpu_arsize,
    input  wire[2:0]         cpu_awsize
);

    wire      ar_check, r_check, aw_check, w_check, b_check, r_finish, w_finish;
    reg [2:0] axi_read_state;
    reg [2:0] axi_write_state;
    reg [2:0] axi_r_back_state;
    reg [2:0] axi_w_back_state;
    reg [63:0]  test_data;
    wire[63:0]  test_data_wire;
    assign test_data_wire = rdata;

    assign ar_check = arready & arvalid;
    assign r_check  = rready  & rvalid;
    assign aw_check = awready & awvalid;
    assign w_check  = wready  & wvalid;
    assign b_check  = bready  & bvalid;
    assign r_finish = r_check;
    assign w_finish = w_check;
    
    //pre_definition
    assign arlen = 8'b0;
    assign arburst = 2'b01;
    assign arlock = 2'b0;
    assign arcache = 4'b0;
    assign arprot = 3'b0;
    assign awid = 4'b1;
    assign awlen = 8'b0;
    assign awburst = 2'b01;
    assign awlock = 2'b0;
    assign awprot = 3'b0;
    assign wid = 4'b1;
    assign wlast = 1'b1;

    assign arid = {3'b0, data_r_en};
    assign araddr = ((axi_read_state == `DATA_SEND_RADDR) || (axi_read_state == `INST_SEND_RADDR))? (({32{inst_r_en}}  &  inst_addr)
                |   ({32{data_r_en}}  &  data_r_addr)) : 0;
    assign arvalid = (axi_read_state == `DATA_SEND_RADDR) | (axi_read_state == `INST_SEND_RADDR);
    assign arsize = cpu_arsize;
    assign rready = (axi_r_back_state == `DATA_RECEIVE_RDATA) | (axi_r_back_state == `INST_RECEIVE_RDATA);

    assign awaddr = {32{data_w_en}}  &  data_w_addr;
    assign awsize = cpu_awsize;
    assign awvalid = (axi_write_state == `DATA_SEND_WADDR);
    assign wdata = (axi_write_state == `DATA_SEND_WADDR)? data_w: 64'b0;
    assign wstrb = (axi_write_state == `DATA_SEND_WADDR)? data_w_mask: 8'b0;
    assign wvalid = (axi_write_state == `DATA_SEND_WDATA);

    assign bready = (axi_write_state == `DATA_RECEIVE_B);

    //read
    always @(posedge aclk) begin
        if (!aresetn) begin
            axi_read_state <= `NULL;
            data_r <= 64'b0;
            inst_r <= 32'd0;
            data_r_valid <= 1'b0;
            inst_r_valid <= 1'b0;

            axi_write_state <= `NULL;
            data_w_valid <= 1'b0;
        end else begin
            case (axi_read_state)
                `NULL: begin
                    if (data_r_en) begin
                        axi_read_state <= `DATA_SEND_RADDR;
                    end
                    if (inst_r_en) begin
                        axi_read_state <= `INST_SEND_RADDR;
                    end
                end
                `DATA_SEND_RADDR: begin
                    if(ar_check) begin
                        axi_read_state <= `NULL;
                        axi_r_back_state <= `DATA_RECEIVE_RDATA;
                    end
                end
                `INST_SEND_RADDR: begin
                    if(ar_check) begin
                        axi_read_state <= `NULL;
                        axi_r_back_state <= `INST_RECEIVE_RDATA;
                    end
                end
                default: begin
                    axi_read_state <= `NULL;
                    data_r <= 64'b0;
                    inst_r <= 32'd0;
                end
            endcase
            case (axi_r_back_state)
                `NULL: begin
                    inst_r_valid <= 1'b0;
                    data_r_valid <= 1'b0;
                end
                `DATA_RECEIVE_RDATA: begin
                    if(r_finish) begin
                        data_r <= rdata;
                        data_r_valid <= 1'b1;
                        axi_r_back_state <= `NULL;
                    end
                end
                `INST_RECEIVE_RDATA: begin
                    if(r_finish) begin
                        inst_r <= rdata[31:0];
                        inst_r_valid <= 1'b1;
                        axi_r_back_state <= `NULL;
                    end
                end
                default: begin
                    axi_r_back_state <= `NULL;
                    data_r <= 64'b0;
                    inst_r <= 32'd0;
                end                
            endcase
            case (axi_write_state)
              `NULL: begin
                    data_w_valid <= 1'b0;
                    if (data_w_en) begin
                        axi_write_state <= `DATA_SEND_WADDR;
                    end
              end
              `DATA_SEND_WADDR: begin
                    if(aw_check) begin
                        axi_write_state <= `DATA_SEND_WDATA;
                    end
              end
              `DATA_SEND_WDATA: begin
                    if(w_finish) begin
                        axi_write_state <= `DATA_RECEIVE_B;
                    end
              end
              `DATA_RECEIVE_B: begin
                    if(b_check) begin
                        axi_write_state <= `NULL;
                        data_w_valid <= 1'b1;
                    end
              end
              default: begin
                    axi_write_state <= `NULL;
                    data_w_valid <= 1'b0;
              end
          endcase
        end
    end
    
endmodule //ysyx_22040125_AXI
