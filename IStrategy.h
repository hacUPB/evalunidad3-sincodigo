#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

typedef void (*strat_func_t)(void *);

typedef struct 
{
     strat_func_t strat_func;
     
}IStrategy;

IStrategy *IStrategy_new();
void const_IStrategy(IStrategy *);
void destru_IStrategy(IStrategy *);
void strat_func(IStrategy *);

#endif