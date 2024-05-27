#include <stdio.h>

int main(){

    int N1, N2;

    printf("Vamos ver qual dos numeros é o maior \n");

    printf("Digite o primeiro numero : ");
    scanf("%d", &N1);

    printf("Digite o segund numero : ");
    scanf("%d", &N2);

    if (N1 > N2){
        printf("O maior é o primeiro numero %d ", N1);
    } else if (N1 < N2) {
        printf("O maior é o segundo numero %d", N2);
    } else {
        printf("Eles sao iguais");
    }

    return 0;
}