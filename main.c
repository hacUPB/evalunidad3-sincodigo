#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "IStrategy.h"
#include "strategya.h"
#include "strategyb.h"
#include "context.h"

int main(int argc, char* argv[]) 
{
  IStrategy *istrategy = IStrategy_new();
  const_IStrategy(istrategy);
  
  strategya *strategya = strategya_new();
  const_strategya(strategya);

  strategyb *strategyb = strategyb_new();
  const_strategyb(strategyb);

  contexto *context=context_new();
  const_context(context,strategya);

  do_some_businessLogic(context);

  set_strategy(context,strategyb);

  do_some_businessLogic(context);
 
  destru_strategya(strategya);
  destru_strategyb(strategyb);
  destru_IStrategy(istrategy);
  destru_context(context);
}