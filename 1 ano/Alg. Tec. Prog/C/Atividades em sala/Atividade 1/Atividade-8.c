#include <stdio.h> 
int main(){
    int salario = 0;
    float salarioF, imposto = 0.0;
    printf("Bem vindo(a) a calculadora de salario\n");
    printf("Digite seu salario : ");
    scanf("%d", &salario);
    imposto = 10;
    salarioF = (salario + 50 ) - ((imposto / 100) * salario);
    printf("Seu salario final apos o imposto e a gratificação fica %.2f", salarioF);
    return 0;
}