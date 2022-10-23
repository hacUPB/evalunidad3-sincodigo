#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "context.h"

 void const_context(context *this , const char *caracteres) {

    this->caracteres[5] = "a", "b", "c", "d", "e";
 }
 void destru_context(context *this){
    free (this);
 }