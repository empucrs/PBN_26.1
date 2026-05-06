#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[]) {
    if (argc != 2) {
        fprintf(stderr, "Uso: %s <tamanho>\n", argv[0]);
        return 1;
    }

    int tamanho = atoi(argv[1]);

    char *matriz[tamanho] = malloc(tamanho * sizeof(char *));

    // inicializei a matriz com espaços
    for(int linha=0; linha<tamanho; linha++) 
      for(int coluna=0; coluna<tamanho; coluna++)
            matriz[linha][coluna] = ' ';

    //incluir 5 pontos na matriz de forma aleatória
    int count=0;
    int *sementes[5];
    do{
        int linha = rand() % tamanho;
        int coluna = rand() % tamanho;

        if(matriz[linha][coluna] == ' ') {
            matriz[linha][coluna] = '.';
            sementes[count] = &matriz[linha][coluna];
            count++;
        }

    }while(count<5);

    double distancia;
    for(int i=0; i<5; i++)// para cada semente, investigue a matriz
        for(int linha=0; linha<tamanho; linha++) 
            for(int coluna=0; coluna<tamanho; coluna++)
              if(
                (matriz[linha][coluna] == ' ')||
                (&matriz[linha][coluna] == sementes[i])) 
              continue;
                // calcula a distancia
                  --> Paramos aqui.
                  --> O uso do vetor de ponteiros para as sementes não é uma boa estratégia (rever)
                  
                distancia = sqrt(pow(linha - (sementes[i] - matriz[0]) / tamanho, 2) + pow(coluna - (sementes[i] - matriz[0]) % tamanho, 2));
                // se for menor distancia anota
                    
                    if(distancia < 2) 
                        matriz[linha][coluna] = '*';
              }



}
