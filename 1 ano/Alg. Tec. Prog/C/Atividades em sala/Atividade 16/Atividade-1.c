#include <stdio.h>
#include <stdlib.h>

void lerElementos(int *vetor, int n) {
    printf("Digite os elementos do vetor:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &vetor[i]);
    }
}

int main() {
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);

    int *vetor = (int *)malloc(n * sizeof(int));
    if (vetor == NULL) {
        printf("Erro ao alocar memória.\n");
        return 1;
    }

    lerElementos(vetor, n);

    printf("Vetor preenchido:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    return 0;
}