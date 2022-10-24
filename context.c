#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "context.h"

void const_context(contexto *this, void *strategy)
{
  this->istrategy = (IStrategy *)strategy;
  this->caracteres = (char *)malloc(5 * sizeof(char));
  strcpy(this->caracteres, "abcde");
}

void set_strategy(contexto *this, void *strategy)
{
  this->istrategy = (IStrategy *)strategy;
}

void destru_context(contexto *this)
{
  free(this->caracteres);
  free(this);
}

void do_some_businessLogic(contexto *this)
{
  this->istrategy->strat_func(this->caracteres);
}

contexto *context_new()
{
  return (contexto *)malloc(sizeof(contexto));
}