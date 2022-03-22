#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "Vtop__Dpi.h"

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;


int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    Vtop* top = new Vtop{contextp};
    contextp->commandArgs(argc, argv); 
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("top.vcd");
    top->clk = 0;
    int b = 0;
    while (!Verilated::gotFinish() && main_time < sim_time) {
      top->clk = !top->clk;
      top->rst = b;
      top->eval();
      contextp->timeInc(1);
      tfp->dump(contextp->time());
      while (main_time >= 4)
      {
        b=1;
        break;
      }
      main_time++;}
    delete top;
    tfp->close();
    delete contextp;
    return 0;
}
