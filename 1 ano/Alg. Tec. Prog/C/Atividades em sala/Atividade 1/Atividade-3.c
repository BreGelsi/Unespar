#include <stdio.h>
int main(){
    float base, altura, area = 0.0;
    printf("Qual a altura do triangulo : ");
    scanf("%f", &altura);
    printf("Qual a base do triangulo : ");
    scanf("%f", &base);
    area = (base * altura) / 2;
    printf("Com a base %.2f e a altura %.2f temos a area de %.2f", base, altura, area);
    return 0;
}