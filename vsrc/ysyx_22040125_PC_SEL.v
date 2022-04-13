module ysyx_22040125_PC_SEL (
    input  wire[63:0]    src1_rs1,
    input  wire[63:0]    data_rd_in,
    input  wire[63:0]    mem_reg_data_rd_in,
    input  wire[63:0]    data_rd,
    input  wire[63:0]    src2_rs2,
    input  wire[3:0]     pc_add_rs1_sel, 
    input  wire[3:0]     b_check_rs2_sel,
    input  wire[63:0]    id_reg_pc,
    input  wire[63:0]    imm,
    input  wire[5:0]     b_check,
    input  wire[2:0]     pc_sel,
    output wire[2:0]     pc_sel_out,
    output wire[63:0]    cpu_dnpc_in1,
    output wire[63:0]    cpu_dnpc_in2
);
    wire [63:0]           pc_src1, b_src2;

    ysyx_22040125_MUX41 pc_add_src1_choice(
                            .in0(src1_rs1),
                            .in1(data_rd_in),
                            .in2(mem_reg_data_rd_in),
                            .in3(data_rd),
                            .key(pc_add_rs1_sel),
                            .out(pc_src1)
                        );

    ysyx_22040125_MUX41 b_check_rs2_choice(
                            .in0(src2_rs2),
                            .in1(data_rd_in),
                            .in2(mem_reg_data_rd_in),
                            .in3(data_rd),
                            .key(b_check_rs2_sel),
                            .out(b_src2)
                        );

    assign cpu_dnpc_in1 = id_reg_pc + imm;
    assign cpu_dnpc_in2 = (pc_src1 + imm) & (~1);

    wire            b_en;
    wire            beq_check, bne_check, blt_check, bge_check, bltu_check, bgeu_check;
    wire            data_cin, data_cout;
    wire [63:0]     data_a, data_b, data_result;

    assign data_a = pc_src1;
    assign data_b = ~b_src2;
    assign data_cin = 1'b1;
        /* verilator lint_off WIDTH */
    assign {data_cout, data_result} = data_a + data_b + data_cin;
        /* verilator lint_off WIDTH */

    assign beq_check = (pc_src1 == b_src2);
    assign bne_check = ~beq_check;
    assign blt_check = (pc_src1[63] & ~b_src2[63]) | (~(pc_src1[63] ^ b_src2[63]) & data_result[63]);
    assign bge_check = ~blt_check;
    assign bltu_check = ~data_cout;
    assign bgeu_check = ~bltu_check;

    assign b_en = ((b_check[5] & beq_check) | (b_check[4] & bne_check) | (b_check[3] & blt_check) | (b_check[2] & bge_check) | (b_check[1] & bltu_check) | (b_check[0] & bgeu_check));

    assign pc_sel_out = b_en? 3'b010: pc_sel;

endmodule //ysyx_22040125_PC_SEL
