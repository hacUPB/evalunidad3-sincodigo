#ifndef CONTEXT_H_
#define CONTEXT_H_

#include "IStrategy.h"

typedef struct
{
    IStrategy *istrategy;
    const char *caracteres;

} contexto;
 
contexto *context_new();
void const_context(contexto *this, void *);
void set_strategy(contexto *this, void *);
void do_some_businessLogic(contexto *);
void destru_context(contexto *);
#endif