`define 	OP_ADD  			16'b0000000000000001
`define 	OP_SUB  			16'b0000000000000010
`define 	OP_SLT  			16'b0000000000000100
`define 	OP_SLTU 			16'b0000000000001000
`define 	OP_AND  			16'b0000000000010000
`define 	OP_OR   			16'b0000000000100000
`define 	OP_XOR  			16'b0000000001000000
`define 	OP_SLL  			16'b0000000010000000
`define 	OP_SRL  			16'b0000000100000000
`define 	OP_SRA  			16'b0000001000000000
`define 	OP_LUI  			16'b0000010000000000
`define 	OP_JAL  			16'b0000100000000000
`define 	OP_MUL  			16'b0001000000000000
`define 	OP_DIV  			16'b0010000000000000
`define 	OP_REM  			16'b0100000000000000
`define 	OP_EBREAK  			16'b1000000000000000

`define     NULL                3'b000
`define     DATA_SEND_RADDR     3'b001 
`define     DATA_RECEIVE_RDATA  3'b010
`define     DATA_SEND_WADDR     3'b011 
`define     DATA_SEND_WDATA     3'b100
`define     DATA_RECEIVE_B      3'b101