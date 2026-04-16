#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int x;
    int y;
} ponto;

void printPontoCopia(ponto p);

float distanciaEuclidiana(ponto a, ponto b);
float distanciaEuclidianaRef(ponto* a, ponto* b);

int main() {

    ponto p1;

    p1.x = 10;
    p1.y = 23;

    printPontoCopia(p1);

    ponto p2; 
    p2.x=20;
    p2.y=33;

    //float distancia = distanciaEuclidiana(p1, p2);
    float distancia = distanciaEuclidianaRef(&p1, &p2);

    printf("A distancia euclidiana entre [%d,%d] e [%d,%d] eh %.2f\n", p1.x, p1.y, p2.x, p2.y, distancia);

}

void printPontoCopia(ponto p){
    printf("[x,y] = [%d,%d]\n", p.x, p.y);
}

float distanciaEuclidiana(ponto a, ponto b){
    float resultado=0;

    // calculo da distancia euclidiana
    float dx = b.x - a.x;
    float dy = b.y - a.y;
    float pdx=pow(dx, 2.0);
    float pdy=pow(dy,2.0);
    resultado = sqrt(pdy+pdy);

    return resultado;
}

float distanciaEuclidianaRef(ponto* a, ponto* b){
    float resultado=0;

    // calculo da distancia euclidiana
    // as referencias precisam ser acessadas pelo operador ->
    float dx = b->x - a->x;
    // ou ainda pelo indicação de referencia (* variável) e o operador .
    float dy = (*b).y - (*a).y;
    float pdx=pow(dx, 2.0);
    float pdy=pow(dy,2.0);
    resultado = sqrt(pdy+pdy);

    return resultado;
}
