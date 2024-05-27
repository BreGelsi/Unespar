#include <stdio.h>
int main(){
    
    float media;
   
    printf("Ola vamos analisar se foi aprovado na matéria\n");
    printf("Digite sua media final : ");
    scanf("%f", &media);
    
    if (media >= 7){
        printf("Aprovado");
    } else {
        printf("Reprovado");
    }
    return 0;
}