#include <stdio.h>

void trocarValores(int *a, int *b) {
    if (*a > *b) {
        int temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int valor1, valor2;

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor: ");
    scanf("%d", &valor2);

    trocarValores(&valor1, &valor2);

    printf("O maior valor é: %d\n", valor1);
    printf("O menor valor é: %d\n", valor2);

    return 0;
}