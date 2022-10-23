#ifndef STRATEGYB_H_
#define STRATEGYB_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "context.h"

typedef struct 
{
     char caracteres [5];
     
}strategyb;

strategyb *strategyb_new();
void const_strategyb(strategyb *, const char *);
void destru_strategyb(strategyb *);
void strategyb_main(strategyb *, const char *);

#endif
