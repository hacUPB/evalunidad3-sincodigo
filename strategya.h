#ifndef STRATEGYA_H_
#define STRATEGYA_H_

#include "IStrategy.h"

typedef struct 
{
     IStrategy istrategy;
     
}strategya;

strategya *strategya_new();
void const_strategya(strategya *);
void destru_strategya(strategya *);

#endif
