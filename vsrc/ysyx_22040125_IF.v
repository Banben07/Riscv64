module ysyx_22040125_IF (
    input  wire[63:0]   pc,
    input  wire         inst_r_valid,
    input  wire         stall_mem,
    output wire         stall_if,
    output wire[31:0]   inst_addr,
    output wire         inst_r_en
);

    assign stall_if = ~inst_r_valid;
    assign inst_r_en = ~stall_mem;
    assign inst_addr = {(pc-64'h80000000)>>2}[31:0];

endmodule //ysyx_22040125_IF