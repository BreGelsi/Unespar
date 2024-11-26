#include <stdio.h>
#include <stdlib.h>

int main() {
    int quantidade;
    float *notas, media = 0;

    printf("Digite a quantidade de notas: ");
    scanf("%d", &quantidade);

    notas = (float *) malloc(quantidade * sizeof(float));

    if (notas == NULL) {
        printf("Erro ao alocar memoria!");
        return 1;
    }

    for (int i = 0; i < quantidade; i++) {
        printf("Digite a nota %d: ", i + 1);
        scanf("%f", &notas[i]);
        media += notas[i];
    }

    media /= quantidade;

    printf("A media das notas e: %.2f\n", media);

    free(notas);

    return 0;
}