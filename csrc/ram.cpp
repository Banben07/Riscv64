#include "verilated_dpi.h"
#include <stdio.h>


long unsigned int *data_ram = NULL;

extern "C" void set_ram_ptr(const svOpenArrayHandle r) {
  data_ram = (long unsigned int *)(((VerilatedDpiOpenVar*)r)->datap());
}

void dump_ram(int n, long unsigned int addr) {
  int i;
  for (i = 0; i < n; i++) {
    printf("0x%lx := 0x%lx\n", addr+8*i, data_ram[(addr-0xffffffff80000000)/8+i]);
  }
}

unsigned long dump_ram_read(long unsigned int addr) {
  return data_ram[(addr-0xffffffff80000000)/8];
}

