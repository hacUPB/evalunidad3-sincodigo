#include <stdlib.h>
#include <string.h>
#include <stdio.h>

#include "context.h"

 void const_context(contexto *this , const char *caracteres) {

    this->caracteres[0] = 'a';
   this->caracteres[1] = 'b';
   this->caracteres[2] = 'c';
   this->caracteres[3] = 'd';
   this->caracteres[4] = 'e';
 }
 void destru_context(contexto *this){
    free (this);
 }

 contexto *context_new(){
   return(contexto *)malloc(sizeof(contexto));
 }