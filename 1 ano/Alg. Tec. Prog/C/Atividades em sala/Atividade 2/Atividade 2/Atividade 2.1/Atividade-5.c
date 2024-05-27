#include <stdio.h>

int main(){

    float salario;

    printf("Vamos analisar se receberá aumento de salario\n");

    printf("Digite seu salario : ");
    scanf("%f", &salario);
    
    if (salario < 500){
        salario = (salario * 0.3) + salario;
        printf("Voce recebeu aumento de salario, o atual é %.2f", salario);
    } else {
        printf("Lamento, nao recebeu um aumento");
    }

    return 0;
}