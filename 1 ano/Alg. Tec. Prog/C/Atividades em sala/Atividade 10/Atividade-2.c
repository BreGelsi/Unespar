#include <stdio.h>
#include <stdlib.h>

//Faça uma uma função que receba dois números a e b, em seguida, decremente o 
//primeiro e incremente o segundo, e mostre os novos valores na função principal. 
//Dica: a e b devem ser passados por referência.

void abertura (){
    printf("| Ola bem vindo ao programa de incremento e decremento |\n");
    printf("| Iremos armazenar os valores digitados | \n");
}

void dados(float* a, float* b){
    printf("Digite o primeiro valor: ");
    scanf("%f", a);
    printf("Digite o segundo valor: "); 
    scanf("%f", b);

}

void funcao(float* a, float* b){
    *a = *a - 1;
    *b = *b + 1;
}

void fechamento(float a, float b){
    printf("| Os valores alterados sao: %.2f e %.2f |\n", a, b);
    printf("| Muito obrigada por usar nosso programa |\n");
}

int main(){
    float a, b;
    abertura();
    dados(&a, &b);
    funcao(&a, &b);
    fechamento(a, b);
    return 0;
}