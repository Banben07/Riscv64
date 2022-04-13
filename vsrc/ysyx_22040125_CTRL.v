module ysyx_22040125_CTRL (
        input  wire[2:0]        pc_jump,
        input  wire             data_wen,
        input  wire             data_ren,
        input  wire             reg_wen,
        input  wire             stall_if,
        input  wire             stall_id,
        input  wire             stall_mem,
        input  wire             stall_l,
        output wire             IF_Flush,
        output wire             data_wen_out,
        output wire             data_ren_out,
        output wire             reg_wen_out,
        output wire[2:0]        stall
    );
    //pc_jump
    assign IF_Flush = (pc_jump == 3'b001)? 0: 1;
    assign stall = {stall_if, stall_id, stall_mem};

    assign data_wen_out = (stall_l == 0)? data_wen: 0;
    assign data_ren_out = (stall_l == 0)? data_ren: 0;
    assign reg_wen_out = (stall_l == 0)? reg_wen: 0;

endmodule //ysyx_22040125_CTRL
