module ysyx_22040125_REG (
        input  wire[63:0]  data_rd,
        input  wire[4:0]   addr_rd,
        input  wire[4:0]   addr_rs1,
        input  wire[4:0]   addr_rs2,
        input  wire        en,
        input  wire        clk,
        output wire[63:0]  data_a0,
        output wire[63:0]  data_rs1,
        output wire[63:0]  data_rs2
    );
    import "DPI-C" function void set_gpr_ptr(input logic [63:0] a []);
    initial set_gpr_ptr(reg_com); 

    reg [63:0]  reg_com [31:0];

    always @(posedge clk) begin
        if (en && addr_rd != 0) begin
            reg_com[addr_rd] = data_rd;
        end 
    end

    assign data_rs1 = (addr_rs1 == 0)? 64'b0 : ((addr_rs1 == addr_rd) && en)? data_rd: reg_com[addr_rs1];
    assign data_rs2 = (addr_rs2 == 0)? 64'b0 : ((addr_rs2 == addr_rd) && en)? data_rd: reg_com[addr_rs2];
    assign data_a0 = reg_com[10];

endmodule //ysyx_22040125_REG
