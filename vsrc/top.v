module top (
        input  wire       clk,
        input  wire       rst,
        output wire[63:0] data_rd
    );
    
    wire         data_wen, reg_wen;
    wire[1:0]    src1_sel, src2_sel, load_sel;
    wire[2:0]    pc_sel;
    wire[4:0]    rs1, rs2, rd;
    wire[11:0]   op;
    wire[15:0]   inst_addr;
    wire[31:0]   inst, ram_addr;
    wire[63:0]   imm, cpu_pc, cpu_dnpc, cpu_snpc, rdata, src1_rs1, src2_rs2, cpu_dnpc_in1, cpu_dnpc_in2, src1, src2, data_rd_in;
    
    assign cpu_snpc = cpu_pc + 64'd4;

    ysyx_22040125_MUX31 pc_sel_choice(
                         .in0(cpu_snpc),
                         .in1(cpu_dnpc_in1),
                         .in2(cpu_dnpc_in2),
                         .key(pc_sel),
                         .out(cpu_dnpc)
                      );
    
    ysyx_22040125_PC pc(
                         .clk(clk),
                         .rst(rst),
                         .cpu_dnpc(cpu_dnpc),
                         .cpu_pc(cpu_pc)
                      );

    ysyx_22040125_INF inf(
                          .pc(cpu_pc),
                          .addr(inst_addr)
                      );

    ysyx_22040125_inst_RAM inst_ram(
                            .addr(inst_addr),
                            .inst(inst)
                      );

    ysyx_22040125_IDU idu(
                          .inst(inst),
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
                          .addr_rd(rd),
                          .addr_rs1(rs1),
                          .addr_rs2(rs2),
                          .data_rd(data_rd),
                          .en(reg_wen),
                          .clk(clk),
                          .data_rs1(src1_rs1),
                          .data_rs2(src2_rs2)
                      );

    ysyx_22040125_data_RAM data_ram(
                          .ram_addr(ram_addr),
                          .wdata(src2_rs2),
                          .data_wen(data_wen),
                          .clk(clk),
                          .rdata(rdata)
                      );

    ysyx_22040125_MUX21 src1_sel_choice(
                         .in0(cpu_pc),
                         .in1(src1_rs1),
                         .key(src1_sel),
                         .out(src1)
                      );

    ysyx_22040125_MUX21 src2_sel_choice(
                         .in0(imm),
                         .in1(src2_rs2),
                         .key(src2_sel),
                         .out(src2)
                      );

    ysyx_22040125_ALU  alu(
                          .src1(src1),
                          .src2(src2),
                          .op(op),
                          .cpu_dnpc_in1(cpu_dnpc_in1),
                          .cpu_dnpc_in2(cpu_dnpc_in2),
                          .data_rd(data_rd_in),
                          .ram_raddr(ram_addr)
                      );
    
    ysyx_22040125_MUX21 data_rd_choice(
                         .in0(data_rd_in),
                         .in1(rdata),
                         .key(load_sel),
                         .out(data_rd)
                      );

    always @(posedge clk) begin
        if ((inst == 32'h00100073) && (src1_rs1 == 64'b0)) begin
            $display("\033[1;32mHIT GOOD TRAP\033[0m");
            $finish;
        end else if((inst == 32'h00100073) && (src1_rs1 != 64'b0)) begin
            $display("\033[1;31mHIT BAD TRAP\033[0m");
            $finish;
        end else if((cpu_pc >= 64'h80000000) && (op == 0)) begin
            $display("\033[1;31mPaused at: PC=0x%x\033[0m\n\033[1;31mFAIL! Please add instructions!\033[0m", cpu_pc[31:0]);
            $finish;
        end else if ((cpu_pc >= 64'h80000000) && (op != 0)) begin
            $display("\033[1;32mPC=0x%x\033[0m", cpu_pc[31:0]);
        end
    end

endmodule //top
