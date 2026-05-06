#include <stdio.h>
#include <stdlib.h>
#define SIZE 2000000 // um milhão
int main()
{
	// Declaração de variável com espaço alocado na stack
    //double array[SIZE];
	
	// Declaração de variável array como um ponteiro
	//  + alocação do espaço contíguo na heap
	double *array = malloc((sizeof *array) * SIZE);
    printf("tam. mem: %zu\n", sizeof(double)*SIZE);
    for(int i=0; i<SIZE; i++)
        array[i] = i;
	free(array);
}
