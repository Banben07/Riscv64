module ysyx_22040125_INF (
        input  wire[63:0]   pc,
        input               clk,
        output wire[7:0]    addr
    );
    
    /* verilator lint_off UNUSED */
    reg [63:0] count;
    /* verilator lint_off UNUSED */

    assign addr = count[7:0];

    always @( posedge clk ) begin
        count <= (pc-64'h80000000)/(64'd4);
    end

endmodule //ysyx_22040125_INF
