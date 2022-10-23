#ifndef STRATEGYB_H_
#define STRATEGYB_H_

#include "context.h"

typedef struct 
{
     char caracteres [5];
     
}strategyb;


void const_strategyb(strategyb *, const char *);
void destru_strategyb(strategyb *);
void strategyb_main(strategyb *, const char *);

#endif
