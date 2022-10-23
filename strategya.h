#ifndef STRATEGYA_H_
#define STRATEGYA_H_
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "context.h"

typedef struct 
{
     char caracteres [5];
     
}strategya;

strategya *strategya_new();
void const_strategya(strategya *, const char *);
void destru_strategya(strategya *);
void strategya_main(strategya *, const char *);

#endif
