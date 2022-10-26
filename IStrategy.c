#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "IStrategy.h"

void __strat_func(void *this)
{
    
}

IStrategy *IStrategy_new()
{
    return (IStrategy *)malloc(sizeof(IStrategy));
}

void const_IStrategy(IStrategy *this)
{
    this->strat_func = &__strat_func;
}

void destru_IStrategy(IStrategy *this)
{   
    free(this);
}

void strat_func(IStrategy *this)
{
    this->strat_func(this);
}