#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void abertura(){
    printf("Ola, vamos calcular a distancia entre dois pontos\n");
}

void dadosConta(float *x1, float *y1, float *x2, float *y2){
    printf("Digite o valor de x1: ");
    scanf("%f", x1);
    printf("Digite o valor de y1: ");
    scanf("%f", y1);
    printf("Digite o valor de x2: ");
    scanf("%f", x2);
    printf("Digite o valor de y2: ");
    scanf("%f", y2);
}

void distancia(float x1, float y1, float x2, float y2, float* distanciaT){
    *distanciaT = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void fechamento(float x1, float y1, float x2, float y2, float distanciaT){
    printf("Apos a analise dos pontos temos os seguintes dados:\n");
    printf("X1 = %.2f | Y1 = %.2f\n", x1, y1);
    printf("X2 = %.2f | Y2 = %.2f\n", x2, y2);
    printf("Distancia = %.2f\n", distanciaT);
}

int main(){
    abertura();
    float x1, y1, x2, y2;
    dadosConta(&x1, &y1, &x2, &y2);
    float distanciaT = 0;
    distancia(x1, y1, x2, y2, &distanciaT);
    fechamento(x1, y1, x2, y2, distanciaT);

    return 0;
}
