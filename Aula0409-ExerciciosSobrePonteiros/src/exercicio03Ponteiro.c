#include <stdio.h>
#include <stdlib.h>

void inverteVetor(int * vetor, int tamanho);
void printArray(int * vetor, int tamanho);

int main(int argc, char *argv[]){
    int tamanhoDoVetor = 10;
    int meuVetorInicial[] = {1,3,7,23,45,32,12,9,8,10};

    printf("O conteúdo do vetor original é \n  ");
    printArray(meuVetorInicial, tamanhoDoVetor);

    inverteVetor(meuVetorInicial, tamanhoDoVetor);

    printf("O conteúdo do vetor após a inversão é \n  ");
    printArray(meuVetorInicial, tamanhoDoVetor);
}

void printArray(int * vetor, int tamanho){
    for(int i=0; i<tamanho; i++)
        printf("%d, ", *(vetor+i));
    printf("\n");
}

void inverteVetor(int * vetor, int tamanho){
    for(int i=0; i<tamanho/2; i++){
        int aux = *(vetor+i);
        *(vetor+i) = *(vetor+(tamanho-1-i));
        *(vetor+(tamanho-1-i))=aux;        
    }

}
