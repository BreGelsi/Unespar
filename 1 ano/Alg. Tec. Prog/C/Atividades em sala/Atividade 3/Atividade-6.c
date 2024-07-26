#include <stdio.h>

int main(){
    int numeros[10], pares = 0, impares = 1;
    
    printf("Vamos analisar 10 numeros e fazer 2 operaçoes com eles!\n");

    for (int i = 0; i <= 9; i++){
       
        printf("Digite o %d numero : ", i + 1);
        scanf("%d", &numeros[i]);
        
        if(numeros[i] % 2 == 0){
            pares += numeros[i];
        } else if (numeros[i] % 2 == 1){
            impares *= numeros[i];
        }
    }
    
    printf("A primeira operaçao, soma dos pares deu %d\n", pares);
    
    printf("A segunda operaçao, produto dos impares %d", impares);

    return 0;
}