#include <stdio.h>

int main() {
    int b=10;
    printf("O endereço da variável b é %p!\n", &b);
    printf("Já o valor da variável b é %d!\n", b);

    int* ptr;  // declaração de uma variável a ser usada como ponteiro para um inteiro

    ptr = &b;

    printf("O endereço de ptr eh: %p \n", &ptr);
    printf("O conteudo de ptr eh: %p \n",  ptr);
    printf("O conteudo armazenado na referencia de ptr eh: %d \n", *ptr);

    int * badPtr;
    printf("O conteudo de badPtr eh: %p \n",  badPtr);
    printf("O conteudo armazenado na referencia de badPtr eh: %d \n", *badPtr);

    badPtr = (int *) 10;
    printf("O conteudo de badPtr eh: %p \n",  badPtr);
    //printf("O conteudo armazenado na referencia de badPtr eh: %d \n", *badPtr);

    badPtr = NULL;
    printf("O conteudo de badPtr eh: %p \n",  badPtr);
    printf("O conteudo de badPtr eh: 0x%X \n",  badPtr);
    if(badPtr==NULL)
        printf("badPtr foi inicializado com valor nulo\n");
    else
        printf("badPtr contem um valor diferente de nulo\n");
    printf("O conteudo armazenado na referencia de badPtr eh: %d \n", *badPtr);


    return 0;
}
