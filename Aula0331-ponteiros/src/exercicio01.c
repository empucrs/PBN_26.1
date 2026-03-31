#include <stdio.h>

int main(){
    int nums[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int* ptr = nums; // ptr contem o endereço do início do vetor nums

    int i, bytes;
    
    printf("Consumo do consumo como vetor de inteiros\n");
    for(i=0, bytes=0; i<10; i++, bytes+=4)
        printf("%d: %p + %d bytes = %p ==> %d\n", i, ptr, bytes, (ptr+i), *(ptr+i));

    printf("Inicio do consumo como vetor de bytes\n");
    char *cptr = (char *)nums;
    for(i=0, bytes=0; i<40; i++, bytes++)
        printf("%d: %p + %d bytes = %p ==> %d\n", i, cptr, bytes, (cptr+bytes), *(cptr+bytes));

    return 0;
}