module ysyx_22040125_PC (
        input  wire[63:0]   cpu_dnpc,
        input  wire         clk,
        input  wire         rst, 
        output reg[63:0]    cpu_pc        
    );

    always @(posedge clk) begin
        if (!rst) begin
            cpu_pc <= 64'h080000000;
        end
        else
            cpu_pc <= cpu_dnpc;
    end

endmodule //pc
