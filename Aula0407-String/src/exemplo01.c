#include <stdio.h>
#include <string.h>

#define TAM_MAX 100
// consumir duas strings do usuario

char* minha_strstr(char* string_original, char* substring);

int main(){
    char string_principal[TAM_MAX];
    char substring[TAM_MAX];

    printf("Digite a string principal: ");
    scanf("%s", string_principal);

    printf("Digite a substring a ser buscada: ");
    scanf("%s", substring);

// chamar a funcao de busca de substring
    char *posicao = minha_strstr(string_principal, substring);

// imprimir se a substring foi encontrada ou nao
//   Se a substring foi encontrada eu quero imprimir a posicao onde ela inicia na string principal
    if (posicao != NULL) {
        printf("Substring encontrada na posicao: %p -> %ld\n", posicao, posicao - string_principal);
    } else {
        printf("Substring (%s) nao foi encontrada na string (%s).\n", substring, string_principal);
    }
}

char* minha_strstr(char* string_original, char* substring){
    int tam_SO=-1;
    for(int i=0; i<=TAM_MAX; i++){
        if(string_original[i] == '\0'){
            tam_SO = i;
            break;
        }
    }
    if(tam_SO == -1) {
        return NULL; // String original não tem um terminador nulo
    }

    int tam_substring=-1;
    for(int i=0; i<=TAM_MAX; i++){
        if(substring[i] == '\0'){
            tam_substring = i;
            break;  
        }
    }
    if(tam_substring == -1) {
        return NULL; // Substring não tem um terminador nulo
    }

    if(tam_substring > tam_SO) {
        return NULL; // Substring é maior que a string original, não pode ser encontrada
    }

    for(int i=0; i <= tam_SO - tam_substring; i++){
        int j;
        for(j=0; j < tam_substring; j++){
            if(string_original[i + j] != substring[j]){
                break; // Caracteres não correspondem, sair do loop interno
            }
        }
        if(j == tam_substring){
            return &string_original[i]; // Substring encontrada, retornar ponteiro para a posição
        }
    }

    return NULL; // Substring não encontrada

}



