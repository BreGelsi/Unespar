#include <stdio.h>

int somaDobro(int *a, int *b) {
    *a = 2 * (*a);
    *b = 2 * (*b);
    return *a + *b;
}

int main() {
    int a, b;
    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    int resultado = somaDobro(&a, &b);

    printf("Soma do dobro de A e B: %d\n", resultado);
    printf("Valor de A: %d\n", a);
    printf("Valor de B: %d\n", b);

    return 0;
}