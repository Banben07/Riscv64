#include "Vtop.h"
#include "verilated.h"
#include <stdio.h>
#include <stdlib.h>
#include "verilated_vcd_c.h"
#include "verilated_dpi.h"
#include <common.h>

#define ARRLEN(arr) (int)(sizeof(arr) / sizeof(arr[0]))
static char buffer[2048];
static char *g;

char *readline(char *prompt) {
  fputs(prompt, stdout);
  g = fgets(buffer, 2048, stdin);
  char *cpy = (char*)malloc(strlen(buffer ) + 1);
  strcpy(cpy, buffer);
  cpy[strlen(cpy) - 1] = '\0';
  return cpy;
}

static char *rl_gets()
{
  static char *line_read = NULL;
  if (line_read)
  {
    free(line_read);
    line_read = NULL;
  }
  line_read = readline((char*)"\033[1;33m(NPC) \033[0m");
  return line_read;
}

static int cmd_p(char *args)
{
  bool *w = NULL;
  char *k = strtok(NULL, " ");

  uint64_t num = expr(k, w);

  printf("The result is: %ld\n", num);

  return 0;
}

static int cmd_c(char *args)
{
  run_time(-1);
  return 0;
}

static int cmd_q(char *args)
{
  return -1;
}

static int cmd_si(char *args)
{
  char *times = strtok(NULL, " ");
  int num = atoi(times);
  run_time(num);
  return 0;
}

static int cmd_info(char *args)
{

  char *isa_choice = strtok(NULL, " ");

  if (strcmp(isa_choice, "r") == 0)
  {
    dump_gpr();
    return 0;
  }

  // if (strcmp(isa_choice, "w") == 0)
  // {
  //   print_wp();
  //   return 0;
  // }

  printf("Please choose isa!");
  return 0;
}

static int to_Hex(const char *str)
{
	int sum = 0;
	while (isxdigit(*str))
	{
		if (isdigit(*str)) 
		{
			sum = sum * 16 + *str - '0';
		}
		else
		{
			tolower(*str); 
			sum = sum * 16 + *str - 'a' + 10;
		}
		str++;
	}
	return sum;
}

static int cmd_x(char *args)
{
  char *times = strtok(NULL, " ");
  int num = atoi(times);
  char *addrs = strtok(NULL, " ");
  long unsigned int addrs1 = to_Hex(addrs);
  // long unsigned int addrs1 = atoi(addrs);

  dump_ram(num, addrs1);
  return 0;
}

static int cmd_help(char *args);

static struct
{
  const char *name;
  const char *description;
  int (*handler)(char *);
} cmd_table[] = {
    {"help", "Display informations about all supported commands", cmd_help},
    {"c", "Continue the execution of the program", cmd_c},
    {"si", "One step of the program", cmd_si},
    {"q", "Exit NPC", cmd_q},
    {"info", "REG", cmd_info},
    {"p", "Evaluate", cmd_p},
    {"x", "Memory", cmd_x},
};

#define NR_CMD ARRLEN(cmd_table)

static int cmd_help(char *args)
{
  /* extract the first argument */
  char *arg = strtok(NULL, " ");
  int i;

  if (arg == NULL)
  {
    /* no argument given */
    for (i = 0; i < NR_CMD; i++)
    {
      printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
    }
  }
  else
  {
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(arg, cmd_table[i].name) == 0)
      {
        printf("%s - %s\n", cmd_table[i].name, cmd_table[i].description);
        return 0;
      }
    }
    printf("Unknown command '%s'\n", arg);
  }
  return 0;
}

void sdb_mainloop()
{ 
  init_regex();
  for (char *str; (str = rl_gets()) != NULL;)
  { 
    char *str_end = str + strlen(str);

    char *cmd = strtok(str, " ");
    if (cmd == NULL)
    {
      continue;
    }

    char *args = cmd + strlen(cmd) + 1;
    if (args >= str_end)
    {
      args = NULL;
    }

    int i;
    for (i = 0; i < NR_CMD; i++)
    {
      if (strcmp(cmd, cmd_table[i].name) == 0)
      {
        if (cmd_table[i].handler(args) < 0)
        {
          return;
        }
        break;
      }
    }

    if (i == NR_CMD)
    {
      printf("Unknown command '%s'\n", cmd);
    }
  }
}
