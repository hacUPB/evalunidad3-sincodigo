#include <stdlib.h>
#include <string.h>
#include <stdio.h>



typedef struct 
{
    char caracteres [5];

}context;



void const_context(context * , const char *);
void destru_context(context *);