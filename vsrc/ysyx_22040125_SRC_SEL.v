module ysyx_22040125_SRC_SEL (
    //src1
    input  wire[63:0]       exe_reg_pc,
    input  wire[63:0]       exe_reg_src1_rs1,
    input  wire[63:0]       mem_reg_data_rd_in,
    input  wire[63:0]       data_rd,
    input  wire[1:0]        exe_reg_src1_sel,
    input  wire[2:0]        src1_sel_plus,
    output wire[63:0]       src1,

    //src2
    input  wire[63:0]       exe_reg_imm,
    input  wire[63:0]       exe_reg_src2_rs2,
    input  wire[1:0]        exe_reg_src2_sel,
    input  wire[2:0]        src2_sel_plus,
    output wire[63:0]       src2
);

    assign src1 = ({64{src1_sel_plus[2]}} & data_rd)
                | ({64{src1_sel_plus[1]}} & mem_reg_data_rd_in)
                | ({64{src1_sel_plus[0]}} & {64{exe_reg_src1_sel[0]}} & exe_reg_pc)
                | ({64{src1_sel_plus[0]}} & {64{exe_reg_src1_sel[1]}} & exe_reg_src1_rs1);

    assign src2 = ({64{src2_sel_plus[2]}} & data_rd)
                | ({64{src2_sel_plus[1]}} & mem_reg_data_rd_in)
                | ({64{src2_sel_plus[0]}} & {64{exe_reg_src2_sel[0]}} & exe_reg_imm)
                | ({64{src2_sel_plus[0]}} & {64{exe_reg_src2_sel[1]}} & exe_reg_src2_rs2);

endmodule //ysyx_22040125_SRC_SEL
