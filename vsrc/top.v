module top (
        input  wire       clk,
        input  wire       rst,
        output wire[63:0] data_rd
    );

    wire         data_wen, reg_wen, mem_reg_reg_wen,mem_reg_data_wen,exe_reg_data_wen, exe_reg_reg_wen, wb_reg_reg_wen;
    wire[1:0]    src1_sel, wb_reg_load_sel, mem_reg_load_sel, exe_reg_src1_sel, src2_sel, exe_reg_src2_sel, load_sel, exe_reg_load_sel;
    wire[2:0]    pc_sel, wb_reg_pc_sel, mem_reg_pc_sel, exe_reg_pc_sel, wb_reg_pc_sel;
    wire[4:0]    rs1, rs2, rd, mem_reg_rd,exe_reg_rd, exe_reg_rs1, exe_reg_rs2, wb_reg_rd;
    wire[11:0]   op, exe_reg_op;
    wire[15:0]   inst_addr;
    wire[31:0]   inst, ram_addr, mem_reg_ram_addr, inst_id;
    wire[63:0]   imm, exe_reg_src1_rs1, exe_reg_src1, exe_reg_src2, exe_reg_src2_rs2, mem_reg_pc, wb_reg_rdata, wb_reg_data_rd_in, mem_reg_src2_rs2, mem_reg_data_rd_in, mem_reg_cpu_dnpc_in1, mem_reg_cpu_dnpc_in2,exe_reg_imm, cpu_pc, wb_reg_pc, wb_reg_cpu_dnpc_in1, wb_reg_cpu_dnpc_in2, exe_reg_pc, cpu_ifpc, if_reg_pc, id_reg_pc, cpu_dnpc, cpu_snpc, rdata, src1_rs1, src2_rs2, cpu_dnpc_in1, cpu_dnpc_in2, src1, src2, data_rd_in;

    assign cpu_snpc = cpu_pc + 64'd4;

    ysyx_22040125_MUX31 pc_sel_choice(
                            .in0(cpu_snpc),
                            .in1(mem_reg_cpu_dnpc_in1),
                            .in2(mem_reg_cpu_dnpc_in2),
                            .key(mem_reg_pc_sel),
                            .out(cpu_dnpc)
                        );

    ysyx_22040125_PC pc(
                         .clk(clk),
                         .rst(rst),
                         .cpu_dnpc(cpu_dnpc),
                         .cpu_pc(cpu_pc)
                     );

    ysyx_22040125_INF inf(
                            .pc(cpu_dnpc),
                            .addr(inst_addr)
                      );

    ysyx_22040125_inst_RAM inst_ram(
                            .addr(inst_addr),
                            .clk(clk),
                            .inst(inst)
                           );

    ysyx_22040125_ID_REG id_reg(
                             .clk(clk),
                             .rst(rst),
                             .id_reg_in0(inst),
                             .id_reg_in1(cpu_pc),
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
                            .reg_wen(reg_wen),
                            .load_sel(load_sel)
                      );


    ysyx_22040125_REG common_reg(
                            .addr_rd(wb_reg_rd),
                            .addr_rs1(rs1),
                            .addr_rs2(rs2),
                            .data_rd(data_rd),
                            .en(wb_reg_reg_wen),
                            .clk(clk),
                            .data_rs1(src1_rs1),
                            .data_rs2(src2_rs2)
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
                            .exe_reg_in6(pc_sel),
                            .exe_reg_in7(data_wen),
                            .exe_reg_in8(reg_wen),
                            .exe_reg_in9(load_sel),
                            .exe_reg_in10(src2_sel),
                            .exe_reg_in11(imm),
                            .exe_reg_out0(exe_reg_pc),
                            .exe_reg_out1(exe_reg_op),
                            .exe_reg_out2(exe_reg_rd),
                            .exe_reg_out3(exe_reg_src1_rs1),
                            .exe_reg_out4(exe_reg_src1_sel),
                            .exe_reg_out5(exe_reg_src2_rs2),
                            .exe_reg_out6(exe_reg_pc_sel),
                            .exe_reg_out7(exe_reg_data_wen),
                            .exe_reg_out8(exe_reg_reg_wen),
                            .exe_reg_out9(exe_reg_load_sel),
                            .exe_reg_out10(exe_reg_src2_sel),
                            .exe_reg_out11(exe_reg_imm)
                          );

    ysyx_22040125_MUX21 src1_sel_choice(
                            .in0(exe_reg_pc),
                            .in1(exe_reg_src1_rs1),
                            .key(exe_reg_src1_sel),
                            .out(src1)
                        );

    ysyx_22040125_MUX21 src2_sel_choice(
                            .in0(exe_reg_imm),
                            .in1(exe_reg_src2_rs2),
                            .key(exe_reg_src2_sel),
                            .out(src2)
                        );

    ysyx_22040125_ALU  alu(
                           .src1(src1),
                           .src2(src2),
                           .op(exe_reg_op),
                           .cpu_dnpc_in1(cpu_dnpc_in1),
                           .cpu_dnpc_in2(cpu_dnpc_in2),
                           .data_rd(data_rd_in),
                           .ram_raddr(ram_addr)
                       );

    ysyx_22040125_MEM_REG mem_reg(
                              .clk(clk),
                              .rst(rst),
                              .mem_reg_in0(exe_reg_rd),
                              .mem_reg_in1(exe_reg_pc_sel),
                              .mem_reg_in2(exe_reg_data_wen),
                              .mem_reg_in3(exe_reg_reg_wen),
                              .mem_reg_in4(exe_reg_load_sel),
                              .mem_reg_in5(cpu_dnpc_in1),
                              .mem_reg_in6(cpu_dnpc_in2),
                              .mem_reg_in7(data_rd_in),
                              .mem_reg_in8(ram_addr),
                              .mem_reg_in9(exe_reg_src2),
                              .mem_reg_in10(exe_reg_pc),
                              .mem_reg_out0(mem_reg_rd),
                              .mem_reg_out1(mem_reg_pc_sel),
                              .mem_reg_out2(mem_reg_data_wen),
                              .mem_reg_out3(mem_reg_reg_wen),
                              .mem_reg_out4(mem_reg_load_sel),
                              .mem_reg_out5(mem_reg_cpu_dnpc_in1),
                              .mem_reg_out6(mem_reg_cpu_dnpc_in2),
                              .mem_reg_out7(mem_reg_data_rd_in),
                              .mem_reg_out8(mem_reg_ram_addr),
                              .mem_reg_out9(mem_reg_src2_rs2),
                              .mem_reg_out10(mem_reg_pc)
                          );

    ysyx_22040125_data_RAM data_ram(
                               .ram_addr(mem_reg_ram_addr),
                               .wdata(mem_reg_src2_rs2),
                               .data_wen(mem_reg_data_wen),
                               .clk(clk),
                               .rdata(rdata)
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

    always @(posedge clk) begin
        if ((inst == 32'h00100073) && (src1_rs1 == 64'b0)) begin
            $display("\033[1;32mHIT GOOD TRAP\033[0m");
            $finish;
        end
        else if((inst == 32'h00100073) && (src1_rs1 != 64'b0)) begin
            $display("\033[1;31mHIT BAD TRAP\033[0m");
            $finish;
        end
        else if((cpu_pc >= 64'h80000000) && (op == 0)) begin
            $display("\033[1;31mPaused at: PC=0x%x\033[0m\n\033[1;31mFAIL! Please add instructions!\033[0m", id_reg_pc[31:0]);
            $finish;
        end
        else if ((cpu_pc >= 64'h80000004) && (op != 0)) begin
            $display("\033[1;32mPC=0x%x\033[0m", id_reg_pc[31:0]);
        end
    end

endmodule //top
