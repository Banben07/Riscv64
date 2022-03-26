#include "verilated_dpi.h"
#include <stdio.h>
#include <assert.h>

typedef unsigned long uint64_t;
long unsigned int *cpu_gpr = NULL;

extern "C" void set_gpr_ptr(const svOpenArrayHandle r) {
  cpu_gpr = (long unsigned int *)(((VerilatedDpiOpenVar*)r)->datap());
}

void dump_gpr() {
  int i;
  for (i = 0; i < 32; i++) {
    printf("gpr[%d] = 0x%lx\n", i, cpu_gpr[i]);
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
