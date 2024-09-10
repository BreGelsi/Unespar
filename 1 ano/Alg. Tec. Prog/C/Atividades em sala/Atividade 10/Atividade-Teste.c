#include <stdio.h>
#include <stdlib.h>

void abertura(){
    printf("| Ola bem vindo ao calulo de media de notas |\n");

}

float dados(float* nota1, float* nota2, float* nota3){
    printf("Digite a primeira nota: ");
    scanf("%f", nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", nota3);
}

float funcao(float nota1, float nota2, float nota3, float* media){
    *media = (nota1 + nota2 + nota3) / 3;

}

void fechamento(){
    printf("| Muito obrigada por usar nosso programa |\n");
}

int main(){
    float nota1, nota2, nota3, media;
    abertura();
    dados(&nota1, &nota2, &nota3);
    funcao(nota1, nota2, nota3, &media);
    printf("A media das notas e: %.2f", media);
    fechamento();
    return 0;
}