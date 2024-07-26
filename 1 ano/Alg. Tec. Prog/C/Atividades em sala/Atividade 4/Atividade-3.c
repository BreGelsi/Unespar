#include <stdio.h>

int main() {
    
    int sorteios[20];
    int frequencia[6];
    
    for(int i = 0; i < 6; i++) {
        frequencia[i] = 0;
    }
    
    printf("Digite os numeros sorteados por um dado de seis lados jogado vinte vezes:\n");

    for(int i = 0; i < 20; i++) {
        do {
            printf("Sorteio %d: ", i + 1);
            scanf("%d", &sorteios[i]);
        } while(sorteios[i] < 1 || sorteios[i] > 6);
        frequencia[sorteios[i] - 1]++;
    }

    printf("Numeros sorteados:\n");
    for(int i = 0; i < 20; i++) {
        printf("%d ", sorteios[i]);
    }

    printf("\nFrequencia dos numeros sorteados:\n");
    for(int i = 0; i < 6; i++) {
        printf("Numero %d: %d vezes\n", i + 1, frequencia[i]);
    }

    return 0;
}
