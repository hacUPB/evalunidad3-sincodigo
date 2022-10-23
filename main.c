#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategya.h"
#include "context.h"
#include "strategyb.h"
int main(int argc, char* argv[]) 
{
  context *context = context_new();
  const_context(context, "a, b, c, d, e");

  strategya *strategya = strategya_new();
  strategya_main(strategya, context->caracteres);
  
 strategyb *strategyb = strategyb_new();
 strategyb_main(strategyb, context->caracteres);

 void destru_context(context);
 
 void destru_strategya(strategya);
 
 void destru_strategyb(strategyb);


  
  
}