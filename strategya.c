#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategya.h"

void __strat_func(void *this)
{
  IStrategy *istrategy = (IStrategy *)this;
   for (size_t i = 0; i < 5; i++)
   {
      printf("%d\n", istrategy->strat_func);
   }
}
strategya *strategya_new()
{
   return (strategya *)malloc(sizeof(strategya));
}
void const_strategya(strategya *this)
{
   const_IStrategy((IStrategy *)this);
   this->istrategy.strat_func = __strat_func;
}
void destru_strategya(strategya *this)
{
   destru_IStrategy((IStrategy *)this);
   free(this);
}