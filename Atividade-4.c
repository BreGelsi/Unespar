#include <stdio.h>
int main(){
    float salario, aumento, salarioF = 0;
    printf("Ola bem vindo(a) ao simulador de aumento de salario\n");
    printf("Digite seu salario : ");
    scanf("%f", &salario);
    printf("Digite o aumento que deseja : ");
    scanf("%f", &aumento);
    aumento = aumento / 100;
    salarioF = (salario * aumento) + salario;
    printf("O salario final é %.2f", salarioF);
    return 0;
}