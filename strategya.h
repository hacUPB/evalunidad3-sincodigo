#ifndef STRATEGYA_H_
#define STRATEGYA_H_
#include "Istrategy.h"

typedef struct strategya
{
     Istrategy strategyA; 
}strategya;

strategya* new_strategya();
void const_strategya(strategya *);
void destru_strategya(strategya *);

#endif
