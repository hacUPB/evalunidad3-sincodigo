#ifndef STRATEGYB_H_
#define STRATEGYB_H_

#include "IStrategy.h"

typedef struct 
{
     IStrategy istrategy;
     
}strategyb;

strategyb *strategyb_new();
void const_strategyb(strategyb *);
void destru_strategyb(strategyb *);

#endif