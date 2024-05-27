#include <stdio.h>

int main(){

    float salario;

    printf("Vamos anlisar a possibilidade de aumento de salario\n");

    printf("Digite seu salario atual : ");
    scanf("%f", &salario);

    if (salario <= 499.99){
        salario = (salario * 0.15) + salario;
        printf("Seu novo salario com aumento é de %.2f", salario);
    } else if (salario >= 500 && salario <= 1499.99){
        salario = (salario * 0.1) + salario;
        printf("Seu novo salario com aumento é de %.2f", salario);
    } else if (salario >= 1500 && salario <= 2499.99){
        salario = (salario * 0.05) + salario;
        printf("Seu novo salario com aumento é de %.2f", salario);
    } else if (salario >= 2500) {
        printf("Seu salario não é elegivel para aumento");
    }

    return 0; 
}