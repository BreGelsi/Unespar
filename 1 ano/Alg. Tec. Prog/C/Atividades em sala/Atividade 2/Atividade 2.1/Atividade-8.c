#include <stdio.h>

int main(){
    
    int idade;

    printf("Vamos ver em que categoria voce está");

    printf("Digite sua idade : ");
    scanf("%d", &idade);

    if (idade >= 5 && idade <= 7){
        printf("Sua categoria é infantil");
    } else if (idade >= 8 && idade <= 10){
        printf("Sua categoria é juvenil");
    } else if (idade >= 11 && idade <= 15){
        printf("Sua categoria é adolecente");
    } else if (idade >= 16 && idade <= 30){
        printf("Sua categoria é adulto");
    } else if (idade < 30){
        printf("Sua categoria é senior");
    } else {
        printf("Sem categoria ainda");
    }

    return 0;
}