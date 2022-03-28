#include "verilated_dpi.h"
#include <stdio.h>
#include <assert.h>

typedef unsigned long uint64_t;
long unsigned int *cpu_gpr = NULL;

const char *regs[] = {
    "$0", "ra", "sp", "gp", "tp", "t0", "t1", "t2",
    "s0", "s1", "a0", "a1", "a2", "a3", "a4", "a5",
    "a6", "a7", "s2", "s3", "s4", "s5", "s6", "s7",
    "s8", "s9", "s10", "s11", "t3", "t4", "t5", "t6"};


extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (long unsigned int *)(((VerilatedDpiOpenVar*)r)->datap());
}

void dump_gpr() {
  printf("gpr\tvalue\n");
  int i;
  for (i = 0; i < 32; i++) {
    printf("%s:\t0x%lx\n", regs[i], cpu_gpr[i]);
  }
}

uint64_t isa_reg_str2val(const char *s, bool *success)
{
  int i = 4;
  int num = 0;
  if (s[5] != ']')
  {
    while (i <= 5)
    {
      num = num * 10;
      num += s[i] - '0';
      i += 1;
    }
  }
  else
  {
    num = s[i] - '0';
  }

  if (num >= 32)
  {
    assert(0);
  }
  uint64_t R = cpu_gpr[num];
  return R;
}
