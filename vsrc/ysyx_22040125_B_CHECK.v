module ysyx_22040125_B_CHECK (
    input  wire[5:0]    b_check,
    input  wire[2:0]    pc_sel,
    input  wire[63:0]   rs1_data,
    input  wire[63:0]   rs2_data,
    output wire[2:0]    pc_sel_out
);

wire            b_en;
wire            beq_check, bne_check, blt_check, bge_check, bltu_check, bgeu_check;
wire            data_cin, data_cout;
wire [63:0]     data_a, data_b, data_result;

assign data_a = rs1_data;
assign data_b = ~rs2_data;
assign data_cin = 1'b1;
    /* verilator lint_off WIDTH */
assign {data_cout, data_result} = data_a + data_b + data_cin;
    /* verilator lint_off WIDTH */

assign beq_check = (rs1_data == rs1_data);
assign bne_check = ~beq_check;
assign blt_check = (rs1_data[63] & ~rs2_data[63]) | (~(rs1_data[63] ^ rs2_data[63]) & data_result[63]);
assign bge_check = ~blt_check;
assign bltu_check = ~data_cout;
assign bgeu_check = ~bltu_check;

assign b_en = (b_check[5] && beq_check || b_check[4] && bne_check || b_check[3] && blt_check || b_check[2] && bge_check || b_check[1] && bltu_check || b_check[1] && bgeu_check);

assign pc_sel_out = b_en? 3'b010: pc_sel;

endmodule //YSYX_22040125_B_CHECK
