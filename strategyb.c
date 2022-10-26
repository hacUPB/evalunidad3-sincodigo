#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategyb.h"

void __stratb_func(void *this)
{
    char* caracteres=(char*)this;
    for (size_t i = 4; i > 0; i--)
    {
        printf("%c", caracteres[i]);
    }
    printf("%c",caracteres[0]);
    printf("\n");
}
strategyb *strategyb_new()
{
    return (strategyb *)malloc(sizeof(strategyb));
}
void const_strategyb(strategyb *this)
{
    this->istrategy.strat_func = __stratb_func;
}
void destru_strategyb(strategyb *this)
{
    free(this);
}
