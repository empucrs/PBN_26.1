#include <stdio.h>
#include <stdlib.h>

int buscaNoVetor(int * vetor, int tamanho, int valorASerProcurado);

int main(int argc, char *argv[]){

    if(argc != 2){
        printf("Uso: %s <valor a ser procurado>\n", argv[0]);
        exit(0);
    }    

    int meuVetor[] = {1,3,7, 23,45, 32, 12, 9, 8, 10};
    int tamanhoDoVetor = 10;

    printf("O vetor contem os seguintes valores: \n  ");
    for(int i=0; i<tamanhoDoVetor; i++){
        printf("%d, ", meuVetor[i]);
    }
    printf("\n");

    printf("O valor a ser procurado é: %s\n", argv[1]);
    int valorProcurado = atoi(argv[1]);

    int posicaoDoValorProcurado = buscaNoVetor(meuVetor, tamanhoDoVetor, valorProcurado);

    if(posicaoDoValorProcurado == -1)
        printf("O valor não foi encontrado no vetor.\n");
    else{
        printf("O valor foi encontrado na posição %d do vetor\n",posicaoDoValorProcurado);
        printf("O vetor começa na posição %p da memoria \n", meuVetor);
        printf("A posição do valor é %p \n",(meuVetor+posicaoDoValorProcurado));
    }

}

int buscaNoVetor(int * vetor, int tamanho, int valorASerProcurado){
    for(int i=0;i<tamanho; i++)
        if(*(vetor+i)==valorASerProcurado)
            return i;
    return -1;
}