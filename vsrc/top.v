module top (
        input  wire  clk,
        input  wire  rst,
        output reg[63:0] data_rd
    );

    import "DPI-C"  function int ebreak_check(input int a);

    reg [63:0]   cpu_pc, cpu_dnpc;
    wire[7:0]    inst_addr;
    wire[11:0]   op;
    wire[4:0]    rs1, rs2, rd;
    wire[31:0]   inst;
    wire[63:0]   imm, rdata, src1_rs1, src2_rs2, cpu_dnpc_in, src1, src2, data_rd_in;
    wire[31:0]   ram_addr, check;
    wire[1:0]    src1_sel, src2_sel, pc_sel, load_sel;
    wire         data_wen, data_ren, reg_wen;

    ysyx_22040125_MUX #(2, 2, 64) pc_sel_choice (cpu_dnpc, pc_sel, {
                        2'b01, cpu_pc + 64'd4,
                        2'b10, cpu_dnpc_in
                     });
    
    ysyx_22040125_PC pc(
                         .clk(clk),
                         .rst(rst),
                         .cpu_dnpc(cpu_dnpc),
                         .cpu_pc(cpu_pc)
                      );

    ysyx_22040125_INF inf(
                          .pc(cpu_pc),
                          .clk(clk),
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
                          .data_ren(data_ren),
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
                          .data_ren(data_ren),
                          .data_wen(data_wen),
                          .clk(clk),
                          .rdata(rdata)
                       );

    ysyx_22040125_MUX #(2, 2, 64) src1_sel_choice (src1, src1_sel, {
                        2'b01, cpu_pc,
                        2'b10, src1_rs1
                      });
    
    ysyx_22040125_MUX #(2, 2, 64) src2_sel_choice (src2, src2_sel, {
                        2'b01, imm,
                        2'b10, src2_rs2
                      });

    ysyx_22040125_ALU  alu(
                          .src1(src1),
                          .src2(src2),
                          .op(op),
                          .cpu_dnpc_in(cpu_dnpc_in),
                          .data_rd(data_rd_in),
                          .ram_raddr(ram_addr)
                       );
    
    ysyx_22040125_MUX #(2, 2, 64) data_rd_choice (data_rd, load_sel, {
                        2'b01, data_rd_in,
                        2'b10, rdata
                    });

    assign check = ebreak_check(inst);

    always @(posedge clk) begin
        if (check == 1) begin
            $finish;
        end
    end

endmodule //top
