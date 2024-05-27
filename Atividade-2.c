#include <stdio.h>
int main(){
    int numero;
   
    printf("Vamos analisar se o numero é par ou impar\n");
    printf("Digite o numero : ");
    scanf("%d", &numero);
   
    if (numero % 2 == 0){
        printf("É um numero Par");
    } else if (numero % 2 == 1) {
        printf("É um numero impar");
    }
    
    return 0;

}