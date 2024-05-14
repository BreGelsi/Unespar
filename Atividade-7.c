#include <stdio.h>
int main(){
    float n1 , n2, n3, media = 0;
    printf("Bem vindo(a) a calculadora de media de notas\n");
    printf("Digite a primeira nota : ");
    scanf("%f", &n1);
    printf("Digite a segunda nota : ");
    scanf("%f", &n2);
    printf("Digite a terceira nota : ");
    scanf("%f", &n3);
    media = (n1 + n2 + n3) / 3;
    printf("A soma das sua notas %.2f,%.2f,%.2f e %.1f", n1, n2, n3, media);
    return 0;
}