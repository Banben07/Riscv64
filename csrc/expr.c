
#include <regex.h>
#include <stdio.h>
#include <stdbool.h>
#include <common.h>
#include <assert.h>
#include <stdlib.h>
#include "Vtop.h"
#include "verilated.h"
#include "verilated_vcd_c.h"


typedef struct token
{
  int type;
  char str[32];
} Token;

static Token tokens[32] __attribute__((used)) = {};
static int nr_token __attribute__((used)) = 0;
typedef unsigned long uint64_t;
typedef uint64_t word_t;
typedef word_t vaddr_t;

enum
{
  TK_NOTYPE = 256,
  TK_EQ,
  TK_DEX,
  TK_DEREF,
  TK_NEG,
  TK_UEQ,
  TK_AND,
  TK_HEX,
  TK_REG,

  /* TODO: Add more token types */
};

static struct rule
{
  const char *regex;
  int token_type;
} rules[] = {

    /* TODO: Add more rules.
     * Pay attention to the precedence level of different rules.
     */

    {" +", TK_NOTYPE},                    // spaces
    {"\\+", '+'},                         // plus
    {"==", TK_EQ},                        // equal
    {"-", '-'},                           // sub
    {"\\*", '*'},                         // mul
    {"/", '/'},                           // div
    {"\\(", '('},                         // bra_l
    {"\\)", ')'},                         // bra_r
    {"[0][x]([0-9,a-f,A-F])+", TK_HEX},   // hex
    {"[0-9]+", TK_DEX},                   // dex
    {"!=", TK_UEQ},                       // unequal
    {"[&][&]", TK_AND},                   // and
    {"[$][g][p][r][[][0-9]+[]]", TK_REG}, // reg

};

#define NR_REGEX ARRLEN(rules)

static regex_t re[NR_REGEX] = {};

/* Rules are used for many times.
 * Therefore we compile them only once before any usage.
 */
bool check_parentheses(int p, int q)
{
  if (tokens[p].type == '(' && tokens[q].type == ')')
    return true;

  return false;
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

uint64_t eval(int p, int q)
{
  uint64_t num = 0;
  if (p > q)
  {
    /* Bad expression */
    printf(" error! ");
    assert(0);
  }

  else if (p == q)
  {
    /* Single token.
     * For now this token should be a number.
     * Return the value of the number.
     */
    if (tokens[p].type == TK_DEX)
    {
      int i = 0;
      while (tokens[p].str[i] != '\0')
      {
        num = num * 10;
        num += tokens[p].str[i] - '0';
        i += 1;
      }
    }
    else if (tokens[p].type == TK_HEX)
    {
      num = to_Hex(tokens[p].str);
    }
    else if (tokens[p].type == TK_REG)
    { 
      bool *a = NULL;
      num = isa_reg_str2val(tokens[p].str, a);
    }
    else
      printf(" Value error! ");

    return num;
  }

  else if (check_parentheses(p, q) == true)
  {
    /* The expression is surrounded by a matched pair of parentheses.
     * If that is the case, just throw away the parentheses.
     */
    return eval(p + 1, q - 1);
  }
  else
  {
    int j;
    int times = 0;
    int op = 0;
    for (j = p; j <= q; j++)
    {
      if (tokens[j].type == '(')
        times++;
      else if (tokens[j].type == ')')
        times--;
      else if (tokens[j].type == TK_DEREF)
      {
        vaddr_t nums = 0;
        int l = 1;
        while (tokens[j].str[l] != '\0')
        {
          nums = nums * 10;
          nums += tokens[j].str[l] - '0';
          l += 1;
        }
        uint64_t numb = dump_ram_read(nums);
        printf("0x%lx: 0x%-4lx \n", nums, numb);
        return numb;
      }
      else if (tokens[j].type == '*' || tokens[j].type == '/')
      {
        if (times == 0)
        {
          if (op == 0)
          {
            op = j;
          }
        }
        else
        {
          printf("Error!/n");
        }
      }
      else if (tokens[j].type == '+' || tokens[j].type == '-')
      {
        if (times == 0)
        {
          if (op == 0)
            op = j;
          else if (tokens[op].type == '*' || tokens[op].type == '/')
            op = j;
        }
        else
        {
          printf("Error!/n");
        }
      }
      else if (tokens[j].type == TK_EQ || tokens[j].type == TK_UEQ)
      {
        if (times == 0)
        {
          if (op == 0)
            op = j;
          else if (tokens[op].type == '+' || tokens[op].type == '-' || tokens[op].type == '*' || tokens[op].type == '/')
            op = j;
        }
        else
        {
          printf("Error!/n");
        }
      }
      else if (tokens[j].type == TK_AND)
      {
        if (times == 0)
        {
          if (op == 0)
            op = j;
          else if (tokens[op].type == TK_EQ || tokens[op].type == TK_UEQ || tokens[op].type == '+' || tokens[op].type == '-' || tokens[op].type == '*' || tokens[op].type == '/')
            op = j;
        }
        else
        {
          printf("Error!/n");
        }
      }
    }

    uint64_t val1 = eval(p, op - 1);
    uint64_t val2 = eval(op + 1, q);

    switch (tokens[op].type)
    {
    case '+':
      return val1 + val2;
    case '-':
      return val1 - val2;
    case '*':
      return val1 * val2;
    case '/':
      return val1 / val2;
    case TK_EQ:
      if (val1 == val2)
      {
        return 1;
      }
      return 0;
    case TK_UEQ:
      if (val1 != val2)
      {
        return 1;
      }
      return 0;
    case TK_AND:
      if (val1 && val2)
      {
        return 1;
      }
      return 0;
    default:
      assert(0);
    }
  }
}

void init_regex()
{
  int i;
  char error_msg[128];
  int ret;

  for (i = 0; i < NR_REGEX; i++)
  {
    ret = regcomp(&re[i], rules[i].regex, REG_EXTENDED);
    if (ret != 0)
    {
      regerror(ret, &re[i], error_msg, 128);
    }
  }
}

// Token tokens[100] = {};
int position;
int i;

static bool make_token(char *e)
{
  position = 0;

  regmatch_t pmatch;

  nr_token = 0;

  while (e[position] != '\0')
  {
    /* Try all rules one by one. */
    for (i = 0; i < NR_REGEX; i++)
    {
      if (regexec(&re[i], e + position, 1, &pmatch, 0) == 0 && pmatch.rm_so == 0)
      { 
        char *substr_start = e + position;
        int substr_len = pmatch.rm_eo;

        position += substr_len;

        /* TODO: Now a new token is recognized with rules[i]. Add codes
         * to record the token in the array `tokens'. For certain types
         * of tokens, some extra actions should be performed.
         */

        switch (rules[i].token_type)
        {
        case TK_NOTYPE:
          tokens[nr_token].type = TK_NOTYPE;
          break;
        case TK_EQ:
          tokens[nr_token].type = TK_EQ;
          break;
        case TK_UEQ:
          tokens[nr_token].type = TK_UEQ;
          break;
        case TK_AND:
          tokens[nr_token].type = TK_AND;
          break;
        case TK_REG:
          tokens[nr_token].type = TK_REG;
          for (int k = 0; k < substr_len - 1; k++)
          {
            tokens[nr_token].str[k] = e[position - substr_len + k + 1];
          }
          tokens[nr_token].str[substr_len - 1] = '\0';
          tokens[nr_token].str[substr_len] = '\0';
          break;
        case TK_HEX:
          tokens[nr_token].type = TK_HEX;
          for (int k = 0; k < substr_len; k++)
          {
            tokens[nr_token].str[k] = e[position - substr_len + k];
          }
          tokens[nr_token].str[substr_len] = '\0';
          break;
        case TK_DEX:
          tokens[nr_token].type = TK_DEX;
          for (int k = 0; k < substr_len; k++)
          {
            tokens[nr_token].str[k] = e[position - substr_len + k];
          }
          tokens[nr_token].str[substr_len] = '\0';
          break;
        case '+':
          tokens[nr_token].type = '+';
          break;
        case '-':
          tokens[nr_token].type = '-';
          break;
        case '*':
          tokens[nr_token].type = '*';
          break;
        case '/':
          tokens[nr_token].type = '/';
          break;
        case '(':
          tokens[nr_token].type = '(';
          break;
        case ')':
          tokens[nr_token].type = ')';
          break;
        default:
          break;
        }

        nr_token += 1;

        break;
      }
    }

    if (i == NR_REGEX)
    {
      printf("no match at position %d\n%s\n%*.s^\n", position, e, position, "");
      return false;
    }
  }

  return true;
}

word_t expr(char *e, bool *success)
{
  if (!make_token(e))
  {
    *success = false;
    return 0;
  }
  // make_token(e);
  /* TODO: Insert codes to evaluate the expression. */

  for (int i = 0; i < nr_token; i++)
  {
    if (tokens[i].type == '*' && (i == 0 || tokens[i - 1].type != TK_DEX))
    {
      tokens[i].type = TK_DEREF;
      int k = 0;
      for (k = i; e[k] != '\0'; k++)
      {
        tokens[i].str[k] = e[k];
      }
      tokens[i].str[k + 1] = '\0';
    }
    if (tokens[i].type == '-' && (i == 0 || tokens[i - 1].type != TK_DEX))
    {
      tokens[i].type = TK_NEG;
    }
  }

  uint64_t numb = eval(0, nr_token - 1);

  return numb;
}
