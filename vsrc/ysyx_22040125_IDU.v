`include "/home/sakamoto/ysyx-workbench/npc/vsrc/ysyx_22040125_config.v"
module ysyx_22040125_IDU (
        input  wire[31:0]   inst,
        output wire[63:0]   imm,
        output wire[11:0]   op,
        output wire[5:0]    b_check,
        output wire[5:0]    l_bhw,
        output wire[4:0]    rd,
        output wire[4:0]    rs1,
        output wire[4:0]    rs2,
        output wire[2:0]    s_bhwd,
        output wire[2:0]    pc_sel,
        output wire[1:0]    src1_sel,
        output wire[1:0]    src2_sel,
        output wire[1:0]    load_sel,
        output wire         data_wen,
        output wire         data_ren,
        output wire         ebreak,
        output wire         reg_wen
    );

    wire          TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_B, TYPE_R;
    wire          inst_lui, inst_lwu, inst_auipc, inst_jal, inst_beq, inst_bne, inst_blt, inst_bge, inst_bltu, inst_bgeu, inst_jalr, inst_lb, inst_lh, inst_lw, inst_ld, inst_lbu, inst_lhu, inst_addi, inst_slti, inst_sltiu, inst_xori, inst_ori, inst_andi, inst_slli, inst_srli, inst_srai, inst_ebreak, inst_sb, inst_sh, inst_sw, inst_sd, inst_add, inst_sub, inst_sll, inst_slt, inst_sltu, inst_xor, inst_srl, inst_sra, inst_or, inst_and;
    wire          l_check;
    wire  [63:0]  immI, immU, immS, immJ, immB;
    wire  [6:0]   opcode, funct7;
    wire  [2:0]   funct3;

    assign opcode = inst[6:0];
    assign rd     = inst[11:7];
    assign rs1    = (inst == 32'h00100073)? 5'h0a: inst[19:15];
    assign rs2    = inst[24:20];
    assign funct3 = inst[14:12];
    assign funct7 = inst[31:25];

    assign TYPE_I = (opcode == 7'b0010011 | opcode == 7'b1110011 | opcode == 7'b1100111 | opcode == 7'b0000011 | opcode == 7'b0001111);
    assign TYPE_U = (opcode == 7'b0110111 | opcode == 7'b0010111);
    assign TYPE_S = (opcode == 7'b0100011);
    assign TYPE_J = (opcode == 7'b1101111);
    assign TYPE_B = (opcode == 7'b1100011);
    assign TYPE_R = (opcode == 7'b0110011);

    assign immI = {{52{inst[31]}}, inst[31:20]};
    assign immU = {{32{inst[31]}}, inst[31:12], 12'b0};
    assign immS = {{52{inst[31]}}, inst[31:25], inst[11:7]};
    assign immJ = {{43{inst[31]}}, inst[31], inst[19:12], inst[20], inst[30:21], 1'b0};
    assign immB = {{51{inst[31]}}, inst[31], inst[7], inst[30:25], inst[11:8], 1'b0};
    assign imm = TYPE_I? immI: TYPE_U? immU: TYPE_S? immS: TYPE_J? immJ: TYPE_B? immB: 64'b0;

    // U-TYPE
    assign inst_lui = (opcode == 7'b0110111);
    assign inst_auipc = (opcode == 7'b0010111);

    // J-TYPR
    assign inst_jal = (opcode == 7'b1101111);

    // B-TYPE
    assign inst_beq = (opcode == 7'b1100011 && funct3 == 3'b000);
    assign inst_bne = (opcode == 7'b1100011 && funct3 == 3'b001);
    assign inst_blt = (opcode == 7'b1100011 && funct3 == 3'b100);
    assign inst_bge = (opcode == 7'b1100011 && funct3 == 3'b101);
    assign inst_bltu = (opcode == 7'b1100011 && funct3 == 3'b110);
    assign inst_bgeu = (opcode == 7'b1100011 && funct3 == 3'b111);

    // I-TYPE
    assign inst_jalr = (opcode == 7'b1100111 && funct3 == 3'b000);
    assign inst_lb = (opcode == 7'b0000011 && funct3 == 3'b000);
    assign inst_lh = (opcode == 7'b0000011 && funct3 == 3'b001);
    assign inst_lw = (opcode == 7'b0000011 && funct3 == 3'b010);
    assign inst_ld = (opcode == 7'b0000011 && funct3 == 3'b011);
    assign inst_lbu = (opcode == 7'b0000011 && funct3 == 3'b100);
    assign inst_lhu = (opcode == 7'b0000011 && funct3 == 3'b101);
    assign inst_lwu = (opcode == 7'b0000011 && funct3 == 3'b110);
    assign inst_addi = (opcode == 7'b0010011 && funct3 == 3'b000);
    assign inst_slti = (opcode == 7'b0010011 && funct3 == 3'b010);
    assign inst_sltiu = (opcode == 7'b0010011 && funct3 == 3'b011);
    assign inst_xori = (opcode == 7'b0010011 && funct3 == 3'b100);
    assign inst_ori = (opcode == 7'b0010011 && funct3 == 3'b110);
    assign inst_andi = (opcode == 7'b0010011 && funct3 == 3'b111);
    assign inst_slli = (opcode == 7'b0010011 && funct3 == 3'b001 && funct7 == 7'b0000000);
    assign inst_srli = (opcode == 7'b0010011 && funct3 == 3'b101 && funct7 == 7'b0000000);
    assign inst_srai = (opcode == 7'b0010011 && funct3 == 3'b101 && funct7 == 7'b0100000);
    assign inst_ebreak = (inst == 32'h00100073);

    // S-TYPE
    assign inst_sb = (opcode == 7'b0100011 && funct3 == 3'b000);
    assign inst_sh = (opcode == 7'b0100011 && funct3 == 3'b001);
    assign inst_sw = (opcode == 7'b0100011 && funct3 == 3'b010);
    assign inst_sd = (opcode == 7'b0100011 && funct3 == 3'b011);

    // R-TYPE
    assign inst_add = (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000000);
    assign inst_sub = (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0100000);
    assign inst_sll = (opcode == 7'b0110011 && funct3 == 3'b001 && funct7 == 7'b0000000);
    assign inst_slt = (opcode == 7'b0110011 && funct3 == 3'b010 && funct7 == 7'b0000000);
    assign inst_sltu = (opcode == 7'b0110011 && funct3 == 3'b011 && funct7 == 7'b0000000);
    assign inst_xor = (opcode == 7'b0110011 && funct3 == 3'b100 && funct7 == 7'b0000000);
    assign inst_srl = (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0000000);
    assign inst_sra = (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0100000);
    assign inst_or = (opcode == 7'b0110011 && funct3 == 3'b110 && funct7 == 7'b0000000);
    assign inst_and = (opcode == 7'b0110011 && funct3 == 3'b111 && funct7 == 7'b0000000);

    assign l_check = (inst_lb || inst_lh || inst_lw || inst_ld || inst_lbu || inst_lhu || inst_lwu);

    assign op = (inst_add || inst_addi || l_check || TYPE_S || inst_auipc || TYPE_B)?     `OP_ADD  :
           inst_sub?            `OP_SUB  :
           inst_sll?            `OP_SLL  :
           inst_slt?            `OP_SLT  :
           inst_sltu?           `OP_SLTU :
           inst_xor?            `OP_XOR  :
           inst_srl?            `OP_SRL  :
           inst_sra?            `OP_SRA  :
           inst_or?             `OP_OR   :
           inst_and?            `OP_AND  :
           inst_lui?            `OP_LUI  :
           inst_jal?            `OP_JAL  :
           inst_jalr?           `OP_JAL  :0;

    assign src1_sel = (TYPE_J || inst_auipc)? 2'b01: 2'b10;
    assign src2_sel = (TYPE_J || TYPE_U || TYPE_I)? 2'b01: 2'b10;
    assign pc_sel   = inst_jalr? 3'b100: TYPE_J? 3'b010: 3'b001;
    assign data_wen = (TYPE_S)? 1: 0;
    assign data_ren = (inst_lb || inst_lh || inst_lw || inst_ld || inst_lbu || inst_lhu)? 1: 0;
    assign reg_wen  = (TYPE_R || TYPE_I || TYPE_U || TYPE_J)? 1: 0;
    assign load_sel = (inst_lb || inst_lh || inst_lw || inst_ld || inst_lbu || inst_lhu)? 2'b10: 2'b01;
    assign ebreak = inst_ebreak;
    assign b_check = {inst_beq, inst_bne, inst_blt, inst_bge, inst_bltu, inst_bgeu};
    assign s_bhwd = {inst_sb, inst_sh, inst_sw};
    assign l_bhw = {inst_lb, inst_lbu, inst_lh, inst_lhu, inst_lw, inst_lwu};

endmodule //ysyx_22040125_IDU
