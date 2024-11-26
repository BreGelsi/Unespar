#include <stdio.h>

void trocarValores(int *ptrA, int *ptrB) {
    int temp = *ptrA;
    *ptrA = *ptrB;
    *ptrB = temp;
}

int main() {
    int a, b;

    printf("Digite o valor de A: ");
    scanf("%d", &a);

    printf("Digite o valor de B: ");
    scanf("%d", &b);

    printf("Valores antes da troca: A = %d, B = %d\n", a, b);

    trocarValores(&a, &b);

    printf("Valores depois da troca: A = %d, B = %d\n", a, b);

    return 0;
}