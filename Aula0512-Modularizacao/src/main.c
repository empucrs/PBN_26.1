#include <stdio.h>
#include "bibfunc.h"
#include "dubfunc.h"

int main() {
    int v;
    printf("Digite um valor inteiro: ");
    scanf("%d", &v);

    printf("Fatorial de %d: %d\n", v, fatorial(v));
    printf("Somatório de %d: %d\n", v, somatorio(v));
    printf("Dobro do somatório de %d: %d\n", v, dubfunc(v));
    return 0;
}
