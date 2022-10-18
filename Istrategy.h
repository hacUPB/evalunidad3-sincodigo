#ifndef ISTRATEGY_H_
#define ISTRATEGY_H_

typedef struct 
{
    char *mensaje_de_salida;
    char *mensaje_de_entrada;
    
}Istrategy;

void strategy_const(Istrategy *);
void strategy_dest(Istrategy *);
void entrada(Istrategy *, char *);
void salida(Istrategy *, char *);

#endif /* ISTRATEGY_H_*/

