module ysyx_22040125_REG (
        input  wire[4:0]   addr_rd,
        input  wire[4:0]   addr_rs1,
        input  wire[4:0]   addr_rs2,
        input  wire[63:0]  data_rd,
        input  wire        en,
        input  wire        clk,
        output wire[63:0]  data_rs1,
        output wire[63:0]  data_rs2
    );

    reg [63:0]  reg_com [31:0];

    always @(posedge clk) begin
        if (en && addr_rd != 0) begin
            reg_com[addr_rd] <= data_rd;
        end 
    end

    assign data_rs1 = (addr_rs1 == 0)? 64'b0 : reg_com[addr_rs1];
    assign data_rs2 = (addr_rs2 == 0)? 64'b0 : reg_com[addr_rs2];

endmodule //ysyx_22040125_REG
