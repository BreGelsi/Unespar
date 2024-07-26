#include <stdio.h>

int main(){
    int numero[10];
    int i = 0;
    printf("Vamos ler e mostrar os 10 numeros que digitar\n");
    for( i = 0; i <= 9; i++){
       
        printf("Digite o %d numero : ", i + 1 );
        scanf("%d", &numero[i]);

    }
    printf("Os numeros digitados foram :\n");
    for (i = 0; i< 10; i++){
        if(i < 9){
            printf("%d, ",numero[i]);
        } else {
            printf("%d.", numero[i]);
        }
        
    }
    return 0;
}