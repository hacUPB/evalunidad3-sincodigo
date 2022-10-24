#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategya.h"

void __strat_func(void *this)
{
   char* buffer=(char *)malloc(5 * sizeof(char));
   strcpy(buffer,(char *)this);
   for (size_t i = 0; i < 5; i++)
   {
      printf("%c\n", buffer[i]);
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