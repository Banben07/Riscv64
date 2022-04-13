module top (
        input  wire       clk,
        input  wire       rst,
        output wire[63:0] data_rd,
        output wire[63:0] outdata
    );

    wire         w_check, data_ren_out, exe_reg_w_check, data_wen, data_wen_out, reg_wen_out, stall_control, data_ren, exe_reg_data_ren, mem_reg_data_ren, IF_Flush, ebreak, ebreak_out, reg_wen, mem_reg_reg_wen,mem_reg_data_wen,exe_reg_data_wen, exe_reg_reg_wen, wb_reg_reg_wen;
    wire[1:0]    src1_sel, wb_reg_load_sel, mem_reg_load_sel, exe_reg_src1_sel, src2_sel, exe_reg_src2_sel, load_sel, exe_reg_load_sel;
    wire[2:0]    pc_sel, mem_reg_s_bhwd, s_bhwd, exe_reg_s_bhwd, pc_sel_out, src1_sel_plus, src2_sel_plus, wb_reg_pc_sel, mem_reg_pc_sel, exe_reg_pc_sel;
    wire[3:0]    pc_add_rs1_sel, b_check_rs2_sel;
    wire[4:0]    rs1, rs2, exe_reg_rs1, exe_reg_rs2, rd, mem_reg_rd,exe_reg_rd, wb_reg_rd;
    wire[5:0]    b_check, l_bhw, exe_reg_l_bhw, mem_reg_l_bhw;
    wire[14:0]   op, op_out, exe_reg_op;
    wire[15:0]   inst_addr;
    wire[31:0]   inst, ram_addr, mem_reg_ram_addr, inst_id, inst_out;
    wire[63:0]   imm, b_src2, src2_out, pc_src1, data_a0, one_src1, one_src2, if_pc, exe_reg_src1_rs1, exe_reg_src1, exe_reg_src2, exe_reg_src2_rs2, mem_reg_pc, wb_reg_rdata, wb_reg_data_rd_in, mem_reg_src2_rs2, mem_reg_data_rd_in, mem_reg_cpu_dnpc_in1, mem_reg_cpu_dnpc_in2,exe_reg_imm, cpu_pc, wb_reg_pc, wb_reg_cpu_dnpc_in1, wb_reg_cpu_dnpc_in2, exe_reg_pc, cpu_ifpc, if_reg_pc, id_reg_pc, cpu_dnpc, cpu_snpc, rdata, src1_rs1, src2_rs2, cpu_dnpc_in1, cpu_dnpc_in2, src1, src2, data_rd_in;

    assign cpu_snpc = cpu_pc + 64'd4;

    ysyx_22040125_CTRL ctrl(
                            .pc_jump(pc_sel_out),
                            .rs1(rs1),
                            .rs2(rs2),
                            .exe_reg_rd(exe_reg_rd),
                            .exe_reg_data_ren(exe_reg_data_ren),
                            .mem_reg_rd(mem_reg_rd),
                            .mem_reg_data_ren(mem_reg_data_ren),
                            .stall_control(stall_control),
                            .IF_Flush(IF_Flush),
                            .data_wen(data_wen),
                            .data_ren(data_ren),
                            .reg_wen(reg_wen),
                            .data_wen_out(data_wen_out),
                            .data_ren_out(data_ren_out),
                            .reg_wen_out(reg_wen_out),
                            .exe_reg_rs1(exe_reg_rs1),
                            .exe_reg_rs2(exe_reg_rs2),
                            .pc_rs1(rs1),
                            .b_rs2(rs2),
                            .rs1_sel(exe_reg_src1_sel),
                            .rs2_sel(exe_reg_src2_sel),
                            .wb_reg_rd(wb_reg_rd),
                            .exe_reg_reg_wen(exe_reg_reg_wen),
                            .mem_reg_reg_wen(mem_reg_reg_wen),
                            .wb_reg_reg_wen(wb_reg_reg_wen),
                            .src1_sel_plus(src1_sel_plus),
                            .src2_sel_plus(src2_sel_plus),
                            .pc_add_rs1_sel(pc_add_rs1_sel),
                            .b_check_rs2_sel(b_check_rs2_sel)
                        );

    ysyx_22040125_MUX31 pc_sel_choice(
                            .in0(cpu_snpc),
                            .in1(cpu_dnpc_in1),
                            .in2(cpu_dnpc_in2),
                            .key(pc_sel_out),
                            .out(cpu_dnpc)
                        );

    ysyx_22040125_PC pc(
                         .clk(clk),
                         .rst(rst),
                         .stall(stall_control),
                         .cpu_dnpc(cpu_dnpc),
                         .cpu_pc(cpu_pc)
                        );

    ysyx_22040125_ID_REG id_reg(
                             .clk(clk),
                             .rst(rst),
                             .stall(stall_control),
                             .IF_Flush(IF_Flush),
                             .id_reg_in0(inst),
                             .id_reg_in1(if_pc),
                             .id_reg_out0(inst_id),
                             .id_reg_out1(id_reg_pc)
                         );

    ysyx_22040125_IDU idu(
                            .inst(inst_id),
                            .op(op),
                            .rd(rd),
                            .rs1(rs1),
                            .rs2(rs2),
                            .imm(imm),
                            .src1_sel(src1_sel),
                            .src2_sel(src2_sel),
                            .pc_sel(pc_sel),
                            .data_wen(data_wen),
                            .data_ren(data_ren),
                            .reg_wen(reg_wen),
                            .l_bhw(l_bhw),
                            .s_bhwd(s_bhwd),
                            .load_sel(load_sel),
                            .ebreak(ebreak),
                            .b_check(b_check),
                            .w_check(w_check)
                        );

    ysyx_22040125_REG common_reg(
                            .addr_rd(wb_reg_rd),
                            .addr_rs1(rs1),
                            .addr_rs2(rs2),
                            .data_rd(data_rd),
                            .en(wb_reg_reg_wen),
                            .clk(clk),
                            .data_a0(data_a0),
                            .data_rs1(src1_rs1),
                            .data_rs2(src2_rs2)
                        );
    
    ysyx_22040125_PC_SEL pc_sel_check(
                            .src1_rs1(src1_rs1),
                            .data_rd_in(data_rd_in),
                            .mem_reg_data_rd_in(mem_reg_data_rd_in),
                            .data_rd(data_rd),
                            .src2_rs2(src2_rs2),
                            .pc_add_rs1_sel(pc_add_rs1_sel),
                            .b_check_rs2_sel(b_check_rs2_sel),
                            .id_reg_pc(id_reg_pc),
                            .imm(imm),
                            .b_check(b_check),
                            .pc_sel(pc_sel),
                            .pc_sel_out(pc_sel_out),
                            .cpu_dnpc_in1(cpu_dnpc_in1),
                            .cpu_dnpc_in2(cpu_dnpc_in2)
                        );
    
    ysyx_22040125_EXE_REG exe_reg(
                            .clk(clk),
                            .rst(rst),
                            .exe_reg_in0(id_reg_pc),
                            .exe_reg_in1(op),
                            .exe_reg_in2(rd),
                            .exe_reg_in3(src1_rs1),
                            .exe_reg_in4(src1_sel),
                            .exe_reg_in5(src2_rs2),
                            .exe_reg_in7(data_wen_out),
                            .exe_reg_in8(reg_wen_out),
                            .exe_reg_in9(load_sel),
                            .exe_reg_in10(src2_sel),
                            .exe_reg_in11(imm),
                            .exe_reg_in12(rs1),
                            .exe_reg_in13(rs2),
                            .exe_reg_in14(data_ren_out),
                            .exe_reg_in15(s_bhwd),
                            .exe_reg_in16(l_bhw),
                            .exe_reg_in17(w_check),
                            .exe_reg_out0(exe_reg_pc),
                            .exe_reg_out1(exe_reg_op),
                            .exe_reg_out2(exe_reg_rd),
                            .exe_reg_out3(exe_reg_src1_rs1),
                            .exe_reg_out4(exe_reg_src1_sel),
                            .exe_reg_out5(exe_reg_src2_rs2),
                            .exe_reg_out7(exe_reg_data_wen),
                            .exe_reg_out8(exe_reg_reg_wen),
                            .exe_reg_out9(exe_reg_load_sel),
                            .exe_reg_out10(exe_reg_src2_sel),
                            .exe_reg_out11(exe_reg_imm),
                            .exe_reg_out12(exe_reg_rs1),
                            .exe_reg_out13(exe_reg_rs2),
                            .exe_reg_out14(exe_reg_data_ren),
                            .exe_reg_out15(exe_reg_s_bhwd),
                            .exe_reg_out16(exe_reg_l_bhw),
                            .exe_reg_out17(exe_reg_w_check)
                        );

    ysyx_22040125_SRC_SEL src_sel(
                            .exe_reg_pc(exe_reg_pc),
                            .exe_reg_src1_rs1(exe_reg_src1_rs1),
                            .exe_reg_src1_sel(exe_reg_src1_sel),
                            .exe_reg_imm(exe_reg_imm),
                            .exe_reg_src2_rs2(exe_reg_src2_rs2),
                            .exe_reg_src2_sel(exe_reg_src2_sel),
                            .mem_reg_data_rd_in(mem_reg_data_rd_in),
                            .data_rd(data_rd),
                            .src1_sel_plus(src1_sel_plus),
                            .src2_sel_plus(src2_sel_plus),
                            .src1(src1),
                            .src2(src2)
                        );

    ysyx_22040125_ALU  alu(
                           .s_check(exe_reg_data_wen),
                           .imm(exe_reg_imm),
                           .src1(src1),
                           .src2(src2),
                           .op(exe_reg_op),
                           .w_check(exe_reg_w_check),
                           .s_bhwd(exe_reg_s_bhwd),
                           .data_rd(data_rd_in),
                           .ram_raddr(ram_addr),
                           .src2_out(src2_out)
                       );

    ysyx_22040125_MEM_REG mem_reg(
                              .clk(clk),
                              .rst(rst),
                              .mem_reg_in0(exe_reg_rd),
                              .mem_reg_in1(exe_reg_pc_sel),
                              .mem_reg_in2(exe_reg_data_wen),
                              .mem_reg_in3(exe_reg_reg_wen),
                              .mem_reg_in4(exe_reg_load_sel),
                              .mem_reg_in7(data_rd_in),
                              .mem_reg_in8(ram_addr),
                              .mem_reg_in9(src2_out),
                              .mem_reg_in10(exe_reg_pc),
                              .mem_reg_in11(exe_reg_data_ren),
                              .mem_reg_in12(exe_reg_s_bhwd),
                              .mem_reg_in13(exe_reg_l_bhw),
                              .mem_reg_out0(mem_reg_rd),
                              .mem_reg_out1(mem_reg_pc_sel),
                              .mem_reg_out2(mem_reg_data_wen),
                              .mem_reg_out3(mem_reg_reg_wen),
                              .mem_reg_out4(mem_reg_load_sel),
                              .mem_reg_out7(mem_reg_data_rd_in),
                              .mem_reg_out8(mem_reg_ram_addr),
                              .mem_reg_out9(mem_reg_src2_rs2),
                              .mem_reg_out10(mem_reg_pc),
                              .mem_reg_out11(mem_reg_data_ren),
                              .mem_reg_out12(mem_reg_s_bhwd),
                              .mem_reg_out13(mem_reg_l_bhw)
                          );

    ysyx_22040125_RAM ram(
                               .ram_addr(mem_reg_ram_addr),
                               .wdata(mem_reg_src2_rs2),
                               .s_bhwd(mem_reg_s_bhwd),
                               .l_bhw(mem_reg_l_bhw),
                               .data_wen(mem_reg_data_wen),
                               .data_ren(mem_reg_data_ren),
                               .clk(clk),
                               .outdata(outdata),
                               .rdata(rdata),
                               .cpu_pc(cpu_pc),
                               .rst(rst),
                               .inst(inst),
                               .if_pc(if_pc)
                           );

    ysyx_22040125_WB_REG wb_reg(
                             .clk(clk),
                             .rst(rst),
                             .wb_reg_in0(mem_reg_pc),
                             .wb_reg_in1(mem_reg_pc_sel),
                             .wb_reg_in2(mem_reg_reg_wen),
                             .wb_reg_in3(mem_reg_load_sel),
                             .wb_reg_in4(mem_reg_data_rd_in),
                             .wb_reg_in5(rdata),
                             .wb_reg_in6(mem_reg_rd),
                             .wb_reg_out0(wb_reg_pc),
                             .wb_reg_out1(wb_reg_pc_sel),
                             .wb_reg_out2(wb_reg_reg_wen),
                             .wb_reg_out3(wb_reg_load_sel),
                             .wb_reg_out4(wb_reg_data_rd_in),
                             .wb_reg_out5(wb_reg_rdata),
                             .wb_reg_out6(wb_reg_rd)
                         );

    ysyx_22040125_MUX21 data_rd_choice(
                            .in0(wb_reg_data_rd_in),
                            .in1(wb_reg_rdata),
                            .key(wb_reg_load_sel),
                            .out(data_rd)
                        );

    ysyx_22040125_EBREAK ebreak_list(
                            .inst(inst_id),
                            .clk(clk),
                            .rst(rst),
                            .op(op),
                            .ebreak(ebreak),
                            .inst_out(inst_out),
                            .ebreak_out(ebreak_out),
                            .op_out(op_out)
                        );

    always @(posedge clk) begin
        if ((ebreak_out == 1) && (data_a0 == 64'h0)) begin
            $display("\033[1;32mHIT GOOD TRAP\033[0m");
            $finish;
        end
        else if((ebreak_out == 1) && (data_a0 != 64'h0)) begin
            $display("\033[1;31mHIT BAD TRAP\033[0m");
            $finish;
        end
        else if (inst_out != 32'hffffffff) begin
            if((cpu_pc >= 64'h80000010) && (op_out == 0)) begin
                $display("\033[1;31mPaused at: PC=0x%x\033[0m\n\033[1;31mFAIL! Please add instructions!\033[0m", mem_reg_pc[31:0]);
                $finish;
            end
        end
        if ((cpu_pc >= 64'h80000004) && (inst_id != 32'hffffffff)) begin
            $display("\033[1;32mPC=0x%x\033[0m", mem_reg_pc[31:0]);
        end
    end

endmodule //top
