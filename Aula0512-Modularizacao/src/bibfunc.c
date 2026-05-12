#include "bibfunc.h"

int fatorial(int v){
    if(v == 0) return 1;
    int valor=1;
    for(int i=v; i>0; i--)
        valor *= i;
    return valor;
}

int somatorio(int v){
    if(v<=0) return 0;
    int valor=0;
    for(int i=v; i>0; i--)
        valor += i;
    return valor;
}