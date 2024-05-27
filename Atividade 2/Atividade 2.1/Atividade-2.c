#include <stdio.h>

int main() {
    float N1, N2, media;

    printf("Vamos calcular sua media e dizer se foi Aprovado ou Reprovado na materia\n");

    printf("Digite a primeira nota: ");
    scanf("%f", &N1);

    printf("Digite a segunda nota: ");
    scanf("%f", &N2);

    media = (N1 + N2) / 2;

    if (media >= 7) {
        printf("Aprovado(a), sua media foi %.1f\n", media);
    } else if (media >= 4 && media <= 6.9) {
        printf("Exame, sua media foi %.1f\n", media);
    } else if (media >= 0 && media <= 3.9) {
        printf("Reprovado, sua media foi %.1f\n", media);
    }
    
    return 0;
}
