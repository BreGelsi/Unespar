#include <stdio.h>

int main(){

    float valor;
    int codigo, quantidade;

    printf("Vamos calcular sua compra\n");

    printf("Digite o codigo do seu produto : ");
    scanf("%d", &codigo);

    printf("Digite a quantidade de unidades que deseja : ");
    scanf("%d", &quantidade);

    if (codigo >= 1 && codigo <= 10){
        valor = 10;
        printf("O preço unitario de seu produto é 10R$\n");
    } else if (codigo >= 11 && codigo <= 20){
        valor = 15;
        printf("O preço unitario de seu produto é 15R$\n");
    } else if (codigo >= 21 && codigo <= 30){
        valor = 20;
        printf("O preço unitario de seu produto é 20R$\n");
    } else if (codigo >= 31 && codigo <= 40){
        valor = 30;
        printf("O preço unitario de seu produto é 30R$\n");
    } else {
        printf("Codigo invalido. Por favor, insira um codigo entre 1 e 40.\n");
        return 0; 
    }

    valor = valor * quantidade;

    printf("O valor toal da sua nota é %.2f\n", valor);

    if (valor < 250){
        valor = valor - (valor * 0.05);
        printf("O valor apos o desconto de 5 é %.2f\n", valor);
    } else if (valor >= 250 && valor <= 500){
        valor = valor - (valor * 0.1);
        printf("O valor apos o desconto de 10 é %.2f\n", valor);
    } else if (valor > 500){
        valor = valor - (valor * 0.15);
        printf("O valor apos o desconto de 15 é %.2f\n", valor);
    }

    return 0;

}