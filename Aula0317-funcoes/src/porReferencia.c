#include <stdio.h>

void multiplica(int* x) {
    *x = *x * *x;
}

int main() {
    int t = 10;
    printf("pre multiplicacao por referencia: %d\n", t); // saída: 100
    multiplica(&t);
    printf("pos multiplicacao por referencia: %d\n", t); // saída: 100
}