#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategya.h"
#include "context.h"
#include "strategyb.h"
int main(int argc, char* argv[]) 
{
  contexto *context = context_new();
  const_context(context, "a, b, c, d, e");

  strategya *strategya = strategya_new();
  const_strategya(strategya , context->caracteres);
  strategya_main(strategya, strategya->caracteres);
  
 strategyb *strategyb = strategyb_new();
 const_strategyb(strategyb , context->caracteres);
  strategyb_main(strategyb, strategyb->caracteres);

  destru_context(context);
 
  destru_strategya(strategya);
 
  destru_strategyb(strategyb);


  
  
}