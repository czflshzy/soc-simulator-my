TOP_NAME := mycpu_top
SRC_DIR  := ../mycpu
INC_FILE := $(shell find $(SRC_DIR) -name '*.svh') $(shell find $(SRC_DIR) -name '*.vh') $(shell find $(SRC_DIR) -name '*.v') $(shell find $(SRC_DIR) -name '*.sv')
INC_DIR	 := $(addprefix -I, $(shell find $(SRC_DIR) -type d))
Canshu +=-Wno-ALWCOMBORDER 
Canshu +=-Wno-SELRANGE
Canshu +=-Wno-BSSPACE 
Canshu +=-Wno-CASEINCOMPLETE 
Canshu +=-Wno-CASEOVERLAP 
Canshu +=-Wno-CASEX 
Canshu +=-Wno-CASTCONST 
Canshu +=-Wno-CASEWITHX 
Canshu +=-Wno-CMPCONST 
Canshu +=-Wno-COLONPLUS 
Canshu +=-Wno-IMPLICIT 
Canshu +=-Wno-PINCONNECTEMPTY 
Canshu +=-Wno-PINMISSING 
Canshu +=-Wno-SPLITVAR
Canshu +=-Wno-SYNCASYNCNET 
Canshu +=-Wno-UNDRIVEN 
Canshu +=-Wno-UNSIGNED 
Canshu +=-Wno-UNUSED 
Canshu +=-Wno-DEFPARAM
Canshu +=-Wno-UNSIGNED
Canshu +=-Wno-WIDTH 
Canshu +=-Wno-UNOPTFLAT
Canshu +=-Wno-fatal

.PHONY: clean
obj_dir/V$(TOP_NAME): clean src/* $(INC_FILE) 
	verilator --cc -Wno-fatal --exe --trace --trace-structs --build src/sim_nscscc.cpp $(INC_FILE) $(INC_DIR) --top $(TOP_NAME) -j `nproc` -CFLAGS "-Wno-format -Wno-reorder"
#-Wno-fatal  -Wno-TIMESCALEMOD -Wno-UNOPTFLAT -Wno-lint
clean:
	rm -rf obj_dir
func : obj_dir/V$(TOP_NAME)
	cd obj_dir && ./Vmycpu_top -func
	
perf:
	cd obj_dir && ./Vmycpu_top -perf
perfdiff:
	cd obj_dir && ./Vmycpu_top -perfdiff
