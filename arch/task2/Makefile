EXECUTABLE := ./obj_dir/Valu_register

SRC := src/alu_register.v

TB := tb/alu_register_tb.v

ASSERTIONS := 

COMPILER := verilator
COMPILER_FLAGS := --binary --trace-fst -j 0 -Wall --x-assign unique

EXECUTABLE_FLAGS := +verilator+seed+50 +verilator+rand+reset+2
DUMP_FILE := dump.svc
OBJ_DIR := obj_dir

ALL_SRCS := $(SRC) $(TB) $(ASSERTIONS)

.PHONY: run surfer

run: $(EXECUTABLE)
	@$(EXECUTABLE) $(EXECUTABLE_FLAGS)

$(EXECUTABLE): $(ALL_SRCS)
	@$(COMPILER) $(COMPILER_FLAGS) $(ALL_SRCS)

surfer:
	@surfer $(DUMP_FILE)

clean:
	rm -rf ./$(OBJ_DIR)/
	rm -f $(DUMP_FILE)
