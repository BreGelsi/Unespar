#include <stdio.h>
#include <stdlib.h>

void abertura(){
    printf("Bem vindo ao programa !\n");
}

void dados(int* numero1, int* numero2){
    printf("Digite o primeiro numero: ");
    scanf("%d", numero1);

    printf("Digite o segundo numero: ");
    scanf("%d", numero2);
}

void maiorN(int numero1, int numero2, int* maior){
    if (numero1 > numero2){
        *maior  = numero1;
    }else if (numero2 > numero1){
        *maior = numero2;
    }
}

int main(){
    abertura();
    int numero1 = 0, numero2 = 0;
    int maior = 0;
    dados(&numero1, &numero2);
    maiorN(numero1, numero2, &maior);

    printf("O amior numero é: %d\n", maior);
    return 0;
}