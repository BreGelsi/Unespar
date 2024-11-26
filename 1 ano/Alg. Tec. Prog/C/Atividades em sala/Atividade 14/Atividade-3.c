#include <stdio.h>

int main() {
    int var1, var2;
    int *ptr1, *ptr2;

    printf("Digite o valor da variável 1: ");
    scanf("%d", &var1);
    printf("Digite o valor da variável 2: ");
    scanf("%d", &var2);

    ptr1 = &var1;
    ptr2 = &var2;

    if (ptr1 > ptr2) {
        printf("O conteúdo do endereço maior é: %d\n", *ptr1);
    } else {
        printf("O conteúdo do endereço maior é: %d\n", *ptr2);
    }

    return 0;
}
