#include <svdpi.h>
#include "Vtop__Dpi.h"
#include <stdio.h>

int ebreak_check(int a)
{   
    int b = 0;
    if (a == 0b0100000000000001110011)
    {  
       b = 1;
       return b;
    } 
    return b;
}
