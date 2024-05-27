#include <stdio.h>

int main(){
    float N1, N2, N3, N4, Media;
    
    printf("Vamos analisar suas notas para saber se foi Aprovado ou Reprovado\n");
    
    printf("Digite a primeria nota : ");
    scanf("%f", &N1);

    printf("Digite a segunda nota : ");
    scanf("%f", &N2);

    printf("Digite a terceira nota : ");
    scanf("%f", &N3);

    printf("Digite a quarta nota : ");
    scanf("%f", &N4);

    Media = (N1 + N2 + N3 + N4) / 4;

    if (Media >= 7){
        printf("Aprovado(a) ! sua media foi de %.1f ", Media);
    } else {
        printf("Reprovado(a) sua media foi de %.1f", Media);
    }

    return 0;
}