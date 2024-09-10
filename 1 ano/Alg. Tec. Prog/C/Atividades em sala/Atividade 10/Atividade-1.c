#include <stdio.h>
#include <stdlib.h>

//Faça uma função que receba dois números a e b, em seguida, faça a troca destes dois números e mostre os valores 
//trocados na função principal. Dica: a e b devem ser passados por referência.

void abertura(){
    printf("| Ola bem vindo ao programa de troca de valores |\n");
    printf("| Iremos armazenar os valores digitados | \n");
}

void dados(float*a , float* b){
    printf("Digite o primeiro valor: ");
    scanf("%f", a);
    printf("Digite o segundo valor: ");
    scanf("%f", b);
}

void funcao(float* a, float* b){
    float auxiliar;
    auxiliar = *a;
    *a = *b;
    *b = auxiliar;

}

void fechamento(float a, float b){
    printf("| Os valores trocados sao: %.2f e %.2f |\n", a, b);
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