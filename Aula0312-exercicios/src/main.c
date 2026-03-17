#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    printf("Informe o valor a ser pago: ");
    int valor;
    scanf("%d", &valor);

    printf("O valor informado foi %d\n", valor);

    int notas100, notas50, notas10, notas5, notas1;
    
    notas100=valor/100;
    valor-=100*notas100;

    notas50=valor/50;
    valor-=50*notas50;

    notas10=valor/10;
    valor-=10*notas10;

    notas5=valor/5;
    valor-=5*notas5;

    notas1=valor;

    printf("O resultado de cedulas é:\n");
    printf("  Notas de 100: %d\n", notas100);
    printf("  Notas de  50: %d\n", notas50);
    printf("  Notas de  10: %d\n", notas10);
    printf("  Notas de   5: %d\n", notas5);
    printf("  Notas de   1: %d\n", notas1);

    return 0;
}
