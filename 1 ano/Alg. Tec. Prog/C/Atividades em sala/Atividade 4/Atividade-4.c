#include <stdio.h>

int main() {
    
    int numeros[6];
    int pares[6], impares[6];
    int Npares = 0, Nimpar = 0;

    printf("Digite seis numeros inteiros:\n");

    for(int i = 0; i < 6; i++) {
        
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);

        if(numeros[i] % 2 == 0) {
            
            pares[Npares] = numeros[i];
            Npares++;

        } else {
            
            impares[Nimpar] = numeros[i];
            Nimpar++;
        }
    }

    printf("\nNumeros pares:\n");
   
    for(int i = 0; i < Npares; i++) {
        printf("%d ", pares[i]);
    }
    
    printf("\nQuantidade de numeros pares: %d\n", Npares);

    printf("\nNumeros impares:\n");
    
    for(int i = 0; i < Nimpar; i++) {
        printf("%d ", impares[i]);
    }
    
    printf("\nQuantidade de numeros impares: %d\n", Nimpar);

    return 0;
}
