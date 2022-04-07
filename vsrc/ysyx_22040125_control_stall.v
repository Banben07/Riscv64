module ysyx_22040125_control_stall (
        input  wire            data_wen,
        input  wire            data_ren,
        input  wire            reg_wen,
        input  wire            stall,
        output wire            data_wen_out,
        output wire            data_ren_out,
        output wire            reg_wen_out
    );

    assign data_wen_out = (stall == 0)? data_wen: 0;
    assign data_ren_out = (stall == 0)? data_ren: 0;
    assign reg_wen_out = (stall == 0)? reg_wen: 0;

endmodule //control_stall
