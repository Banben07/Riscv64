module ysyx_22040125_PC_ADD (
        input  wire[63:0]       pc_in,
        input  wire[63:0]       src1_in,
        input  wire[63:0]       imm_in,
        output wire[63:0]       cpu_dnpc_in1,
        output wire[63:0]       cpu_dnpc_in2
    );

    assign cpu_dnpc_in1 = pc_in + imm_in;
    assign cpu_dnpc_in2 = (src1_in + imm_in) & (~1);

endmodule //ysyx_22040125_PC_ADD
