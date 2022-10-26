#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategya.h"

void __strata_func(void *this)
{
   char* caracteres=(char*)this;
   for (size_t i = 0; i < 5; i++)
   {
      printf("%c\n", caracteres[i]);
   }
}
strategya *strategya_new()
{
   return (strategya *)malloc(sizeof(strategya));
}
void const_strategya(strategya *this)
{
   this->istrategy.strat_func = __strata_func;
}
void destru_strategya(strategya *this)
{
   free(this);
}