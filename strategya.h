#ifndef STRATEGYA_H_
#define STRATEGYA_H_

#include "context.h"

typedef struct 
{
     char caracteres [5];
     
}strategya;


void const_strategya(strategya *, const char *);
void destru_strategya(strategya *);
void strategya_main(strategya *, const char *);

#endif
