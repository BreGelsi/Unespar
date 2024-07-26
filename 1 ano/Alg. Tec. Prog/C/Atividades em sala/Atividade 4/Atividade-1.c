#include <stdio.h>

int main(){
   
   int numero[9], pares[9];
    
    printf("Vamos armazenar 9 numeros e mostrar a ordem de cada\n");
    
    for(int i = 0; i <= 8; i++){
        
        printf("Digite o %d numero : ", i + 1);
        scanf("%d", &numero[i]);
        
        if (numero[i] % 2 == 0){
            pares[i] = numero[i];
        } else {
            pares[i] = 0;
        }
    }

    for (int i = 0; i < 9; i++){
        
        printf("Voce digitou o numero %d na posicao %d\n", numero[i], i + 1);
    }
    
    printf("Vamos mostrar os pares agora\n");
    
    for (int i = 0; i < 9 ; i++){
        
        if (pares[i] != 0){
            printf("O numero %d na posição %d\n", pares[i], i + 1);
        }
        
    }

    return 0;
   
}