#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include <common.h>

const int sim_time = 10240000;
VerilatedContext* contextp = new VerilatedContext;
Vtop* top = new Vtop{contextp};
VerilatedVcdC* tfp = new VerilatedVcdC;

void run_time(int n)
{ 
  int main_time = 0;
  if (n < 0)
  {
    while (!Verilated::gotFinish() && main_time < sim_time) {
      top->rst = 1;
      top->clk = !top->clk;    
      top->eval();
      contextp->timeInc(1);
      tfp->dump(contextp->time());
      main_time++;
    }
  } else
  {
    while (!Verilated::gotFinish() && main_time < 2*n) {
      top->rst = 1;
      top->clk = !top->clk;    
      top->eval();
      contextp->timeInc(1);
      tfp->dump(contextp->time());
      main_time++;
    }
  }
}

int main(int argc, char* argv[]) {

    contextp->commandArgs(argc, argv); 
    Verilated::traceEverOn(true);
    contextp->commandArgs(argc, argv); 
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("top.vcd");
    top->clk = 0;
    top->eval();
    int a = 0;
    while (a < 4)
    { 
      top->clk = !top->clk;
      top->rst = 0;
      top->eval();
      contextp->timeInc(1);
      tfp->dump(contextp->time());
      a++;
    }
    sdb_mainloop();
    // run_time(-1);
    delete top;
    tfp->close();
    delete contextp;
    return 0;
}
