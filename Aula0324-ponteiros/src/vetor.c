#include <stdio.h>

// Função para exibir os elementos do vetor
// usando [] para referencias o parametro por referencia
// e tambem para a manipulação do vetor dentro da função
void exibir_vetor(int vetor[], int tamanho) {
    printf("Elementos do vetor: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

// Função para modificar um elemento usando ponteiro
void modificar_elemento(int vetor[], int indice, int novo_valor) {
    vetor[indice] = novo_valor;
    printf("Elemento no índice %d modificado para %d\n", indice, novo_valor);
}

// Função para calcular a soma dos elementos
int somar_elementos(int *vetor, int tamanho) {
    int soma = 0;
    for (int i = 0; i < tamanho; i++) {
        soma += vetor[i];
    }
    return soma;
}

int main() {
    int tamanho = 5;
    int vetor[] = {10, 20, 30, 40, 50};

    printf("Apresentação da manipulação das variaveis\n");
    printf("O conteudo a primeira posicao do vetor eh (usando *):  %d!\n", *vetor);
    printf("O conteudo a primeira posicao do vetor eh (usando []):  %d!\n", vetor[0]);

    printf("O endereço da primeira posicao do vetor eh (usando *):  %p!\n", (void*) vetor);
    printf("O endereço da primeira posicao do vetor eh (usando []):  %p!\n", (void*) &vetor[0]);
    
    printf("=== Manipulação de Ponteiros com Vetor ===\n\n");
    
    // Exibir vetor original
    exibir_vetor(vetor, tamanho);
    
    // Modificar um elemento
    modificar_elemento(vetor, 2, 99);
    exibir_vetor(vetor, tamanho);
    
    // Calcular soma
    int soma = somar_elementos(vetor, tamanho);
    printf("Soma dos elementos: %d\n", soma);
   
    return 0;
}