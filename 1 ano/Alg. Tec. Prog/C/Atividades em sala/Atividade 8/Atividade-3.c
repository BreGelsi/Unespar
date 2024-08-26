#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void abertura(){
    printf("Ola, vamos calcular a distancia entre dois pontos\n");
}

void dadosConta(int *x1, int *y1, int *x2, int *y2){
    printf("Digite o valor de x1: ");
    scanf("%d", x1);
    printf("Digite o valor de y1: ");
    scanf("%d", y1);
    printf("Digite o valor de x2: ");
    scanf("%d", x2);
    printf("Digite o valor de y2: ");
    scanf("%d", y2);
}

void distancia(int x1, int y1, int x2, int y2, float* distanciaT){
    *distanciaT = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void fechamento(int x1, int y1, int x2, int y2, float distanciaT){
    printf("Apos a analise dos pontos temos os seguintes dados:\n");
    printf("X1 = %d | Y1 = %d\n", x1, y1);
    printf("X2 = %d | Y2 = %d\n", x2, y2);
    printf("Distancia = %.2f\n", distanciaT);
}

int main(){
    abertura();
    int x1, y1, x2, y2;
    dadosConta(&x1, &y1, &x2, &y2);
    float distanciaT = 0;
    distancia(x1, y1, x2, y2, &distanciaT);
    fechamento(x1, y1, x2, y2, distanciaT);

    return 0;
}
