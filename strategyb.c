#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategyb.h"



 void __strat_func(void *this)
{
  
     IStrategy *istrategy = (IStrategy *)this;
    for (size_t i = 4; i <= 0; i--)
    {
        printf("%s\n", istrategy->strat_func);
    }
}
strategyb *strategyb_new()
{
    return (strategyb *)malloc(sizeof(strategyb));
}
void const_strategyb(strategyb *this)
{
    const_IStrategy((IStrategy *)this);
    this->istrategy.strat_func = __strat_func;
}
void destru_strategyb(strategyb *this)
{
    destru_IStrategy((IStrategy *)this);
    free(this);
}
