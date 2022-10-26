#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "context.h"

void const_context(contexto *this, void *strategy)
{
  this->_strategy = (IStrategy *)strategy;
}

void set_strategy(contexto *this, void *strategy)
{
  this->_strategy = (IStrategy *)strategy;
}

void destru_context(contexto *this)
{
  free(this);
}

void do_some_businessLogic(contexto *this)
{
  char* caracteres=(char*)malloc(6*sizeof(char));
  strcpy(caracteres,"abcde");
  this->_strategy->strat_func(caracteres);
  free(caracteres);
}

contexto *context_new()
{
  return (contexto *)malloc(sizeof(contexto));
}