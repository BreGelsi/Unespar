#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void abertura(){
    printf("Ola Vamos analisar um numero e dar a raiz quadrada dele\n");
}

void dados(int* numero){
    printf("Digite o numero desejado: ");
    scanf("%d", numero);
}

void raizQ(int numero, float* raiz){
    *raiz = sqrt(numero);
}

void fechamento(int numero, float raiz){
    printf("Apos a analise do numero %d, a sua raiz é %.2f\n", numero, raiz);
}

int main(){
    abertura();
    int numero = 0;
    dados(&numero);
    float raiz = 0;
    raizQ(numero, &raiz);
    fechamento(numero, raiz);

    return 0;

}