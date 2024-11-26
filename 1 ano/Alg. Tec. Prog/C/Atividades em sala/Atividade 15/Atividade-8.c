#include <stdio.h>

void preencherArray(int* array, int tamanho, int valor) {
    int* ptr = array;
    while (ptr < array + tamanho) {
        *ptr = valor;
        ptr++;
    }
}

int main() {
    int array[5];
    int valor = 10;

    preencherArray(array, sizeof(array) / sizeof(int), valor);

    for (int i = 0; i < sizeof(array) / sizeof(int); i++) {
        printf("%d ", array[i]);
    }

    return 0;
}