#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>

#include "verilated_vcd_c.h"

vluint64_t main_time = 0;
const vluint64_t sim_time = 1024;

int main(int argc, char** argv, char** env) {

    VerilatedContext* contextp = new VerilatedContext;
    Vtop* top = new Vtop{contextp};
    contextp->commandArgs(argc, argv); 
    Verilated::traceEverOn(true);
    VerilatedVcdC* tfp = new VerilatedVcdC;
    top->trace(tfp, 99);  // Trace 99 levels of hierarchy
    tfp->open("simx.vcd");
    while (!Verilated::gotFinish() && main_time < sim_time) {
      int a = rand() & 1;
      int b = rand() & 1;
      contextp->timeInc(1);
      top->a = a;
      top->b = b;
      top->eval();
      tfp->dump(contextp->time());
      printf("a = %d, b = %d, f = %d\n", a, b, top->f);
      assert(top->f == a ^ b); 
      main_time++;}
    delete top;
    tfp->close();
    delete contextp;
    return 0;
}
