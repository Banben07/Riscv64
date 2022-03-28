#include <stdbool.h>
#include <stdbool.h>


typedef unsigned long uint64_t;
typedef uint64_t word_t;
typedef word_t vaddr_t;
#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))

void dump_gpr();
void sdb_mainloop();
void run_time(int n);
void dump_ram(int n, long unsigned int addr);
uint64_t isa_reg_str2val(const char *s, bool *success);
word_t expr(char *e, bool *success);
unsigned long dump_ram_read(long unsigned int addr);
void init_regex();
