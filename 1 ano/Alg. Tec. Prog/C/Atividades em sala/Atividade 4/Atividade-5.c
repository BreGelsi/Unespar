#include <stdio.h>

int main() {
    
    int RA[7];
    float medias[7];
    int IMMedia = 0;
    float maiorMedia = 0;

    printf("Digite os registros academicos (RA) e as medias finais de sete alunos:\n");

    for(int i = 0; i < 7; i++) {
        printf("Aluno %d\n", i + 1);
        printf("RA: ");
        scanf("%d", &RA[i]);
        printf("Media final: ");
        scanf("%f", &medias[i]);

        if(medias[i] > maiorMedia) {
            maiorMedia = medias[i];
            IMMedia = i;
        }
    }

    printf("\nRA do aluno com a maior media: %d com media %.2f\n", RA[IMMedia], maiorMedia);

    printf("\nAlunos nao aprovados (media < 7) e nota necessaria no exame final:\n");
    for(int i = 0; i < 7; i++) {
        if(medias[i] < 7) {
            float notapassa = 10 - medias[i];
            printf("RA: %d precisa de %.2f na prova de exame final para ser aprovado.\n", RA[i], notapassa);
        }
    }

    return 0;
}
