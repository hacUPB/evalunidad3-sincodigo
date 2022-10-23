#ifndef CONTEXT_H_
#define CONTEXT_H_


typedef struct 
{
    char caracteres [5];

}contexto;
contexto *context_new();
void const_context(contexto * , const char *);
void destru_context(contexto *);
#endif 