#include <stdio.h>

int main(){
    int numero, tabuada;
   
   printf("Vamos mostrar a tabuada do numero digitado\n");
    
    printf("Digite o numero para a tabuada dele : ");
    scanf("%d", &numero);

    for (int i = 0; i <= 9; i++){
        tabuada = numero * (i + 1);
        printf("%d X %d = %d\n", numero, i + 1, tabuada);
    }

    return 0;
}