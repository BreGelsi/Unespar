#include <stdio.h>
int main(){
    int celsius, resultado = 0;
    printf("Bem vindo(a) ao conversor de Celsius para Fahrenheit\n");
    printf("Digite o valor em celsius : ");
    scanf("%d", &celsius);
    resultado = (1.8 * celsius) + 32;
    printf("O valor %d em Fahrenheit e %d", celsius, resultado);
    return 0;
}