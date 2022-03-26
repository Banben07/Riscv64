module ysyx_22040125_INF (
        input  wire[63:0]   pc,
        output wire[15:0]    addr
    );
    

    assign addr = {(pc-64'h80000000)/(64'd4)}[15:0];


endmodule //ysyx_22040125_INF
