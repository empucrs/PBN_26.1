#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void func1(){
    int vet[] = { 4, 9, 12 };
    int i, *ptr;
    ptr = vet;
    for(i =0; i<3; i++)
        printf("%d ", *ptr++);
}

void func2(){
    int vet[] = { 4, 9, 12 };
    int i, *ptr;
    ptr = vet;
    for(i =0; i<3; i++)
        printf("%d ", (*ptr)++);
}

int main() {
    printf("função 01 \n");
    func1();
    printf("função 02 \n");
    func2();
    return 0;
}
