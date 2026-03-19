#include <stdio.h>

void quebraSegundos(int tempoEmSegundos, int *horas, int *minutos, int *segundos);

int main(){

    int tempo;

    //1o interagir com o usuario para pedir valor a ser divido em cedulas
    printf("Informe o tempo em segundos decorrido desde o início (valor inteiro): ");
    scanf("%d", &tempo);
    printf("O valor informado pelo usuário foi %d segundos\n", tempo);

    //2o chamar a funcao de distribuicao
    int horas, minutos, segundos;
    quebraSegundos(tempo, &horas, &minutos, &segundos);

    //3o apresentar o resultado
    printf("O resultado da separação de %d segundos é \n", tempo);
    printf("  -> %04d:%04d:%04d \n", horas,minutos,segundos);

}

void quebraSegundos(int tempoEmSegundos, int *horas, int *minutos, int *segundos){
    // separando a quantidade de horas do tempo total informado em segundos
    *horas=tempoEmSegundos/3600;
    // removendo as horas que foram computadas
    tempoEmSegundos-=*horas * 3600;

    // separando a quantidade de minutos do tempo restante informado em segundos
    *minutos=tempoEmSegundos/60;
    // removendo os minutos que foram computados
    tempoEmSegundos-=*minutos * 60;

    // salvando o restante de segundos
    * segundos = tempoEmSegundos;
}