module ysyx_22040125_MEM (
    input  wire[31:0]   ram_addr,
    input  wire[63:0]   wdata,
    input  wire[63:0]   rdata,
    input  wire[2:0]    s_bhwd,
    input  wire[5:0]    l_bhw,
    input  wire         data_wen,
    input  wire         data_ren,
    input  wire         data_r_valid,
    input  wire         data_w_valid,
    output wire         data_r_en,
    output wire         data_w_en,
    output wire         stall_mem,
    output wire[2:0]    arsize,
    output wire[2:0]    awsize,
    output wire[7:0]    data_w_mask,
    output wire[31:0]   data_r_addr,
    output wire[31:0]   data_w_addr,
    output wire[63:0]   data_w,
    output wire[63:0]   mem_data_r
    
);

    wire[31:0]  addr1, addr;
    assign data_r_en = data_ren;
    assign data_w_en = data_wen;
    assign arsize = {l_bhw[5]|l_bhw[4], l_bhw[3]|l_bhw[2], l_bhw[1]|l_bhw[0]};
    assign awsize = s_bhwd;
    assign addr1 = (ram_addr-32'h80000000) >> 3;
    assign addr = addr1 << 1;
    assign data_r_addr = addr;
    assign data_w_addr = addr;
    assign data_w = wdata;
    assign stall_mem = (~data_r_valid & data_ren) | (~data_w_valid & data_wen);

    wire op_sb, data_cout, op_sh, op_sw, op_lb, op_lbu, op_lh, op_lhu, op_lw, op_lwu;

    assign op_sb = s_bhwd[2];
    assign op_sh = s_bhwd[1];
    assign op_sw = s_bhwd[0];
    assign op_lb  = l_bhw[5];
    assign op_lbu = l_bhw[4];
    assign op_lh  = l_bhw[3];
    assign op_lhu = l_bhw[2];
    assign op_lw  = l_bhw[1];
    assign op_lwu = l_bhw[0];
    
    assign data_w_mask = ({8{op_sb && ram_addr[2:0] == 3'b000}} & 8'b00000001)
                    |    ({8{op_sb && ram_addr[2:0] == 3'b001}} & 8'b00000010)
                    |    ({8{op_sb && ram_addr[2:0] == 3'b010}} & 8'b00000100)
                    |    ({8{op_sb && ram_addr[2:0] == 3'b011}} & 8'b00001000)
                    |    ({8{op_sb && ram_addr[2:0] == 3'b100}} & 8'b00010000)
                    |    ({8{op_sb && ram_addr[2:0] == 3'b101}} & 8'b00100000)
                    |    ({8{op_sb && ram_addr[2:0] == 3'b110}} & 8'b01000000)
                    |    ({8{op_sb && ram_addr[2:0] == 3'b111}} & 8'b10000000)
                    |    ({8{op_sh && ram_addr[2:0] == 3'b000}} & 8'b00000011)
                    |    ({8{op_sh && ram_addr[2:0] == 3'b010}} & 8'b00001100)
                    |    ({8{op_sh && ram_addr[2:0] == 3'b100}} & 8'b00110000)
                    |    ({8{op_sh && ram_addr[2:0] == 3'b110}} & 8'b11000000)
                    |    ({8{op_sw && ram_addr[2:0] == 3'b000}} & 8'b00001111)
                    |    ({8{op_sw && ram_addr[2:0] == 3'b100}} & 8'b11110000)
                    |    ({8{s_bhwd == 3'd0 && ram_addr[2:0] == 3'b000}} & 8'b11111111);

    assign mem_data_r = ({64{op_lb}} & {{56{rdata[7]}}, rdata[7:0]})
                    |   ({64{op_lbu}} & {56'd0,rdata[7:0]}) 
                    |   ({64{op_lh}} & {{48{rdata[15]}},rdata[15:0]})
                    |   ({64{op_lhu}} & {48'd0,rdata[15:0]})
                    |   ({64{op_lw}} & {{32{rdata[31]}},rdata[31:0]})
                    |   ({64{op_lwu}} & {32'd0,rdata[31:0]})
                    |   ({64{l_bhw == 6'b0}} & rdata);

endmodule //ysyx_22040125_MEM
