#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "Istrategy.h"

void entrada(Istrategy *this, char *strategia) {

   printf(" cual de las dos opciones deseas escoger: strategyA o strategyB");
   scanf("%s",this->mensaje_de_entrada); 
   
}

void strategy_const(Istrategy *this){
this->mensaje_de_entrada = malloc(sizeof(char));
this->mensaje_de_salida = malloc(sizeof(char));
}

void strategy_dest(Istrategy *this)
{
    free (this);

}

