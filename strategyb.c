#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategyb.h"
#include "context.h"

void const_strategyb(strategyb *this, const char *caracteres ){
   strcpy(this->caracteres , caracteres);
}
void destru_strategyb(strategyb *this){
    free (this);
}
void strategyb_main (strategyb *this, const char *caracteres )
 {
    for (size_t i = 4; i >=0; i--)
    {
        printf("%c\n" , caracteres[i]);
    }
}  
strategyb *strategyb_new(){
    return(strategyb *)malloc(sizeof(strategyb));
} 
 


