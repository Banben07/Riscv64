`include "/home/sakamoto/ysyx-workbench/npc/vsrc/ysyx_22040125_config.v"
module ysyx_22040125_IDU (
        input  wire[31:0]   inst,
        output wire[63:0]   imm,
        output wire[11:0]   op,
        output wire[4:0]    rd,
        output wire[4:0]    rs1,
        output wire[4:0]    rs2,
        output wire[2:0]    pc_sel,
        output wire[1:0]    src1_sel,
        output wire[1:0]    src2_sel,
        output wire[1:0]    load_sel,
        output wire         data_wen,
        output wire         data_ren,
        output wire         ebreak,
        output wire         reg_wen  
    );

    wire          TYPE_I, TYPE_U, TYPE_S, TYPE_J, TYPE_B, TYPE_R;// else = R
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

    assign op = (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0000000)? `OP_ADD  :    //ADD
                (opcode == 7'b0010011 && funct3 == 3'b000)?                         `OP_ADD  :    //ADDI
                (opcode == 7'b0000011 && funct3 == 3'b011)?                         `OP_ADD  :    //LD
                (opcode == 7'b0100011 && funct3 == 3'b011)?                         `OP_ADD  :    //SD
                (opcode == 7'b0010111)?                                             `OP_ADD  :    //AUIPC
                (opcode == 7'b0110011 && funct3 == 3'b000 && funct7 == 7'b0100000)? `OP_SUB  :    //SUB
                (opcode == 7'b0110011 && funct3 == 3'b001 && funct7 == 7'b0000000)? `OP_SLL  :    //SUL
                (opcode == 7'b0110011 && funct3 == 3'b010 && funct7 == 7'b0000000)? `OP_SLT  :    //SLT
                (opcode == 7'b0110011 && funct3 == 3'b011 && funct7 == 7'b0000000)? `OP_SLTU :    //SLTU
                (opcode == 7'b0110011 && funct3 == 3'b100 && funct7 == 7'b0000000)? `OP_XOR  :    //XOR
                (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0000000)? `OP_SRL  :    //SRL
                (opcode == 7'b0110011 && funct3 == 3'b101 && funct7 == 7'b0100000)? `OP_SRA  :    //SRA
                (opcode == 7'b0110011 && funct3 == 3'b110 && funct7 == 7'b0000000)? `OP_OR   :    //OR
                (opcode == 7'b0110011 && funct3 == 3'b111 && funct7 == 7'b0000000)? `OP_AND  :    //AND
                (opcode == 7'b0110111)?                                             `OP_LUI  :    //LUI
                (opcode == 7'b1101111)?                                             `OP_JAL  :    //JAL
                (opcode == 7'b1100111 && funct3 == 3'b000)?                         `OP_JAL  :0;  //JALR                

    assign src1_sel = (TYPE_J | (opcode == 7'b0010111))? 2'b01: 2'b10;
    assign src2_sel = (TYPE_J | TYPE_U | TYPE_I | TYPE_S)? 2'b01: 2'b10;
    assign pc_sel   = (opcode == 7'b1100111 && funct3 == 3'b000)? 3'b100: TYPE_J? 3'b010: 3'b001;
    assign data_wen = (opcode == 7'b0100011 && funct3 == 3'b010)? 1: 0;
    assign data_ren = (opcode == 7'b0000011 && funct3 == 3'b011)? 1: 0;
    assign reg_wen  = (TYPE_R | TYPE_I | TYPE_U | TYPE_J)? 1: 0;
    assign load_sel = (opcode == 7'b0000011 && funct3 == 3'b010)? 2'b10: 2'b01;
    assign ebreak = (inst == 32'h00100073);
    
endmodule //ysyx_22040125_IDU
