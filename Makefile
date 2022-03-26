all:
	@echo "Write this Makefile by your self."

sim:	
	# $(call git_commit, "sim RTL") # DO NOT REMOVE THIS LINE!!!
	@echo "Write this Makefile by your self."
	@verilator --cc --trace --exe --build csrc/* vsrc/*.v
	@cd obj_dir/ && ./Vtop

gtk:
	@gtkwave obj_dir/top.vcd
	
clean:
	rm -f obj_dir/*.o

.PHONY: clean run

include ../Makefile
