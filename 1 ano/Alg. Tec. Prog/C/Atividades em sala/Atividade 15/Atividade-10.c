#include <stdio.h>

int somarArrays(int* array1, int* array2, int* resultado, int tamanho1, int tamanho2) {
    if (tamanho1 != tamanho2) {
        return 0;
    }

    for (int i = 0; i < tamanho1; i++) {
        resultado[i] = array1[i] + array2[i];
    }

    return 1;
}

int main() {
    int array1[] = {1, 2, 3, 4, 5};
    int array2[] = {6, 7, 8, 9, 10};
    int resultado[5];

    int tamanho1 = sizeof(array1) / sizeof(array1[0]);
    int tamanho2 = sizeof(array2) / sizeof(array2[0]);

    int sucesso = somarArrays(array1, array2, resultado, tamanho1, tamanho2);

    if (sucesso) {
        printf("Soma dos arrays: ");
        for (int i = 0; i < tamanho1; i++) {
            printf("%d ", resultado[i]);
        }
        printf("\n");
    } else {
        printf("Os arrays têm tamanhos diferentes.\n");
    }

    return 0;
}