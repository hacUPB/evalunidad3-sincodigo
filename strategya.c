#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strategya.h"
#include "context.h"

void const_strategya(strategya *this, const char *caracteres ){
   strcpy(this->caracteres , caracteres);
}
void destru_strategya(strategya *this){
    free (this);
}
 void strategya_main (strategya *this, const char *caracteres )
 {
    for (size_t i = 0; i < 5; i++)
    {
        printf("%c\n" , caracteres[i]);
    }
    
 }
 strategya *strategya_new(){
    return(strategya *)malloc(sizeof(strategya));
 }