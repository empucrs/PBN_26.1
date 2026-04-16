#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef struct {
    int x;
    int y;
} ponto;

void preencheComPontos(ponto *vet, int tam);
float distanciaEuclidianaRef(ponto* a, ponto* b);

int main(int argc, char* argv[]){
    int tamVet=10;
    printf("Avaliando os argumentos passados para o programa %s\n",argv[0]);
    
    if(argc==2){
        printf("O programa recebeu o argumento %s na linha de comando.\n", argv[1]);        
        tamVet=atoi(argv[1]);
    }

    ponto vetor [tamVet];

    preencheComPontos(vetor, tamVet);

    // armazenar o indice para o ponto mais próximo do ponto definido pelo indice
    //   para i=0, ptrVet[0]=10, significa que o ponto no vetor[10] é 
    //   o mais próximo do ponto no vetor[0]
    int ptrVet[tamVet];

    // para cada ponto
    for(int i=0; i<tamVet; i++){
      float menorDistancia=__FLT_MAX__;
      // compara a distância com cada outro ponto
      for(int x=0; x<tamVet; x++){
        if(i==x)
            continue;
        float distancia=distanciaEuclidianaRef(&vetor[i], &vetor[x]);
        if(distancia<menorDistancia){
            menorDistancia=distancia;
            ptrVet[i]=x;
        }
      }
    }

    for(int p=0; p<tamVet; p++){
        ponto a, b;
        float distancia;
        a=(vetor[p]);
        b=(vetor[ptrVet[p]]);
        distancia=distanciaEuclidianaRef(&a, &b);
        printf("  pto(%d)[%d,%d] x pto(%d)[%d,%d] => %.2f\n",p,a.x, a.y, (ptrVet[p]), b.x, b.y, distancia);
    }

    //lista todos os pontos da estrutura
    ponto *ptr=vetor;
    for(int ix=0; ix<tamVet; ix++){
        printf("[%3d] -> (%4d, %4d))\n", ix, ptr->x, ptr->y);
        ptr++;
    }

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    int *ptrInt = (int *)vetor;
    for(int ix=0; ix<tamVet; ix++){
        printf("[%3d] -> (", ix);
        for(int i=0; i<2; i++)
            printf(" %d,", *ptrInt++);
        printf(")\n");
        ptr++;
    }

    printf("-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-\n");

    char *ptrChar = (char *)vetor;
    for(int ix=0; ix<tamVet; ix++){
        printf("[%3d] -> (", ix);
        for(int i=0; i<4; i++)
            printf(" %d.", *ptrChar++);
        printf(", ");
        for(int i=0; i<4; i++)
            printf(" %d.", *ptrChar++);
        printf(")\n");
        ptr++;
    }

        

}

void preencheComPontos(ponto *vet, int tam){

/*
    //Alternativa A de manipulação
    for(int index=0; index<tam; index++){ 
        vet[index].x=((rand()%201) - 100);
        vet[index].y=((rand()%201) - 100);
    }

    //Alternativa B de manipulação
    ponto *ptr;
    for(int index=0; index<tam; index++){ 
        ptr=vet+index;

        ptr->x=((rand()%201) - 100);
        ptr->y=((rand()%201) - 100);
    }

    //Alternativa C de manipulação
    ponto *ptr;
    for(int index=0; index<tam; index++){ 
        ptr=vet+index;
        (*ptr).x=((rand()%201) - 100);
        (*ptr).y=((rand()%201) - 100);
    }
*/
    //Alternativa D de manipulação
    ponto * aux=vet;
    while(tam>0){
        aux->x=((rand()%201) - 100);
        aux->y=((rand()%201) - 100);
        aux++;
        tam--;
    }


}

float distanciaEuclidianaRef(ponto* a, ponto* b){
    float resultado=0;

    // calculo da distancia euclidiana
    // as referencias precisam ser acessadas pelo operador ->
    float dx = b->x - a->x;
    // ou ainda pelo indicação de referencia (* variável) e o operador .
    float dy = (*b).y - (*a).y;
    float pdx=pow(dx, 2.0);
    float pdy=pow(dy,2.0);
    resultado = sqrt(pdy+pdy);

    return resultado;
}
