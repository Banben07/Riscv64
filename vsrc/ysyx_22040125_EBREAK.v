module ysyx_22040125_EBREAK (
        input  wire         clk,
        input  wire         rst,
        input  wire         ebreak,
        output reg          ebreak_out
    );

    reg          ebreak_1;

    always @(posedge clk) begin
        if (!rst) begin
            ebreak_out <= 0;
            ebreak_1 <= 0;
        end
        else begin
            ebreak_1 <= ebreak;
            ebreak_out <= ebreak_1;
        end
    end

endmodule //ysyx_22040125_EBREAK
