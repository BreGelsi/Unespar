#include <stdio.h>
#include <stdlib.h>

int* criarVetor(int n) {
    int* vetor = (int*) malloc(n * sizeof(int));
    return vetor;
}

void imprimirVetor(int* vetor, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void liberarVetor(int* vetor) {
    free(vetor);
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int* vetor = criarVetor(n);

    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Elementos do vetor: ");
    imprimirVetor(vetor, n);

    liberarVetor(vetor);

    return 0;
}