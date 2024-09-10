#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Faça uma função que receba os valores a, b e c passados por valor, receba também dois valores x1 e x2 passados por referência. 
//Em seguida, calcule na função e mostre na função principal as duas raízes da equação do segundo grau nas variáveis x1 e x2.

void abertura(){
    printf("| Ola bem vindo ao programa de calculo de raizes de uma equacao do segundo grau |\n");
    printf("| Iremos armazenar os valores digitados | \n");
}

void dados(float* a, float* b, float* c){
    printf("Digite o valor de a: ");
    scanf("%f", a);
    printf("Digite o valor de b: ");
    scanf("%f", b);
    printf("Digite o valor de c: ");
    scanf("%f", c);
}

void funcao(float a, float b, float c, float* x1, float* x2){
    if(a == 0){
        printf("Valor de 'a' não pode ser zero em uma equacao de segundo grau.\n");
        return;
    }
    float delta;
    delta = (b * b) - 4 * a * c;
    if(delta < 0){
        printf("A equacao nao possui raizes reais\n");
    }else if(delta == 0){
        *x1 = -b / (2 * a);
        *x2 = *x1;
    }else{
        *x1 = (-b + sqrt(delta)) / (2 * a);
        *x2 = (-b - sqrt(delta)) / (2 * a);
    }
}

void fechamento(float x1, float x2){
    printf("| As raizes da equacao sao: %.2f e %.2f |\n", x1, x2);
    printf("| Muito obrigada por usar nosso programa |\n");
}

int main(){
    float a, b, c, x1, x2;
    abertura();
    dados(&a, &b, &c);
    funcao(a, b, c, &x1, &x2);
    fechamento(x1, x2);
    return 0;
}