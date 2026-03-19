#include <stdio.h>

void pagamento(int v, int *n100, int *n50, int *n10, int *n5, int *n1);

int main(){

    int valor;

    //1o interagir com o usuario para pedir valor a ser divido em cedulas
    printf("Informe o valor a ser usado (valor inteiro): ");
    scanf("%d", &valor);
    printf("O valor informado pelo usuário foi R$ %d\n", valor);

    //2o chamar a funcao de distribuicao
    int notas100, notas50, notas10, notas5, notas1;
    pagamento(valor, &notas100, &notas50, &notas10, &notas5, &notas1);

    //3o apresentar o resultado
    printf("O resultado da separação em cédulas é \n");
    printf("  -> %d cédulas de 100 reais \n", notas100);
    printf("  -> %d cédulas de  50 reais \n", notas50);
    printf("  -> %d cédulas de  10 reais \n", notas10);
    printf("  -> %d cédulas de   5 reais \n", notas5);
    printf("  -> %d cédulas de   1 reais \n", notas1);

}

void pagamento(int v, int *n100, int *n50, int *n10, int *n5, int *n1){

    int lValor=v;
    int lN100, lN50, lN10, lN5, lN1;

    // calcula o número de cedulas de 100 a serem retornadas
    lN100 = lValor/100;    
    // remove o valor das cedulas de 100 que foram separadas
    lValor-=lN100*100;

    // calcula o número de cédulas de 50 a serem retornadas
    lN50=lValor/50;
    // remove o valor das cédulas de 50 que foram separadas
    lValor-=lN50*50;

    // calcula o número de cédulas de 10 a serem retornadas
    lN10=lValor/10;
    // remove o valor das cédulas de 10 que foram separadas
    lValor-=lN10*10;

    // calcula o número de cédulas de 5 a serem retornadas
    lN5=lValor/5;
    // remove o valor das cédulas de 5 que foram separadas
    lValor-=lN5*5;

    // calcula o número de cédulas de 1 a serem retornadas
    lN1=lValor;

    *n100=lN100;
    *n50=lN50;
    *n10=lN10;
    *n5=lN5;
    *n1=lN1;
}