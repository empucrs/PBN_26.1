#include <stdio.h>
#include <stdlib.h>

void copiaDeVetor(int * vetorSrc, int * vetorTgt, int tamanho);
void printArray(int * vetor, int tamanho);

int main(int argc, char *argv[]){
    int tamanhoDoVetor = 10;

    int meuVetorInicial[] = {1,3,7,23,45,32,12,9,8,10};
    int meuVetorDeDestino [tamanhoDoVetor];

    printf("O conteúdo do vetor original é \n  ");
    printArray(meuVetorInicial, tamanhoDoVetor);
    printf("O conteudo do meu vetor de destino é: \n  ");
    printArray(meuVetorDeDestino, tamanhoDoVetor);

    copiaDeVetor(meuVetorInicial, meuVetorDeDestino, tamanhoDoVetor);

    printf("Após a copia do dados, temos o seguinte resultado");
    printf("O conteúdo do vetor original é \n  ");
    printArray(meuVetorInicial, tamanhoDoVetor);
    printf("O conteudo do meu vetor de destino é: \n  ");
    printArray(meuVetorDeDestino, tamanhoDoVetor);

}

void printArray(int * vetor, int tamanho){
    for(int i=0; i<tamanho; i++)
        printf("%d, ", *(vetor+i));
    printf("\n");
}

void copiaDeVetor(int * vetorSrc, int * vetorTgt, int tamanho){

    for(int i=0; i<tamanho; i++)
        *(vetorTgt+i)=*(vetorSrc+i);

}
