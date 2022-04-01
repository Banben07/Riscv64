module ysyx_22040125_ALU (
        input  wire[63:0]     src1,
        input  wire[63:0]     src2,
        input  wire[63:0]     imm,
        input  wire[11:0]     op,
        input  wire[2:0]      s_bhwd,
        input  wire           s_check,
        output wire[63:0]     src2_out,  
        output wire[63:0]     data_rd,
        output wire[31:0]     ram_raddr
    );

    wire op_sb, op_sh, op_sw, op_add, op_sub, op_slt, op_sltu, op_and, op_or, op_xor, op_sll, op_srl, op_sra, op_lui, op_jal;
    wire [63:0] add_sub_result, slt_result, s_result, sltu_result, and_result, or_result, xor_result, sll_result, srl_result, sra_result, lui_result, jal_result;
    wire [63:0] data_a, data_b, data_result, data_pc;
    wire data_cin, data_cout;

    assign op_add = op[0];
    assign op_sub = op[1];
    assign op_slt = op[2];
    assign op_sltu = op[3];
    assign op_and = op[4];
    assign op_or = op[5];
    assign op_xor = op[6];
    assign op_sll = op[7];
    assign op_srl = op[8];
    assign op_sra = op[9];
    assign op_lui = op[10];
    assign op_jal = op[11];
    assign op_sb = s_bhwd[2];
    assign op_sh = s_bhwd[1];
    assign op_sw = s_bhwd[0];

    assign data_a = src1;
    assign data_b = (op_sub | op_slt | op_sltu)? ~src2: src2;
    assign data_cin = (op_sub | op_slt | op_sltu)? 1'b1: 1'b0;
    /* verilator lint_off WIDTH */
    assign {data_cout, data_result} = data_a + data_b + data_cin;
    /* verilator lint_off WIDTH */
    
    assign data_pc = src1 + 64'd4;
    assign s_result = src1 + imm;

    assign add_sub_result = (s_check)? s_result: data_result;
    assign ram_raddr = add_sub_result[31:0];
    assign slt_result = {63'b0, (src1[63] & ~src2[63]) | (~(src1[63] ^ src2[63]) & data_result[63])} ;
    assign sltu_result = {63'b0, ~data_cout};
    assign and_result = src1 & src2;
    assign or_result = src1 | src2;
    assign xor_result = src1 ^ src2;
    assign sll_result = src1 << src2[5:0];
    assign srl_result = src1 >> src2[5:0];
    assign sra_result = ($signed(src1)) >> src2[5:0];
    assign lui_result = src2;
    assign jal_result = data_pc;
    assign src2_out = op_sb? {8{src2[7:0]}}  :
                      op_sh? {4{src2[15:0]}} :
                      op_sw? {2{src2[31:0]}} :
                      src2;

    assign data_rd = ({32{op_add | op_sub}} & add_sub_result)
                    | ({32{op_slt}} & slt_result)
                    | ({32{op_sltu}} & sltu_result)
                    | ({32{op_and}} & and_result)
                    | ({32{op_or}} & or_result)
                    | ({32{op_xor}} & xor_result)
                    | ({32{op_sll}} & sll_result)
                    | ({32{op_srl}} & srl_result)
                    | ({32{op_sra}} & sra_result)
                    | ({32{op_lui}} & lui_result)
                    | ({32{op_jal}} & jal_result);

endmodule //ysyx_22040125_ALU
