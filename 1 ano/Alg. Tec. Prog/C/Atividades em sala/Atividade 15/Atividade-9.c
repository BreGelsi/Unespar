#include <stdio.h>

void encontrarMaiorElemento(int array[], int tamanho) {
    int maiorElemento = array[0];
    int contador = 1;

    for (int i = 1; i < tamanho; i++) {
        if (array[i] > maiorElemento) {
            maiorElemento = array[i];
            contador = 1;
        } else if (array[i] == maiorElemento) {
            contador++;
        }
    }

    printf("O maior elemento é: %d\n", maiorElemento);
    printf("O número de vezes que o elemento ocorreu é: %d\n", contador);
}

int main() {
    int array[] = {5, 2, 15, 3, 7, 15, 8, 6, 15};
    int tamanho = sizeof(array) / sizeof(array[0]);

    encontrarMaiorElemento(array, tamanho);

    return 0;
}