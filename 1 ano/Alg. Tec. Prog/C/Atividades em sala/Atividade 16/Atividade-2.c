#include <stdio.h>
#include <stdlib.h>

int main() {
    int size1, size2;
    int *array1, *array2, *sumArray;
    int i;

    printf("Insira o tamanho do primeiro array: ");
    scanf("%d", &size1);

    printf("Insira o tamanho do segundo array: ");
    scanf("%d", &size2);

    array1 = (int *)malloc(size1 * sizeof(int));
    array2 = (int *)malloc(size2 * sizeof(int));
    sumArray = (int *)malloc((size1 > size2 ? size1 : size2) * sizeof(int));

    printf("Insira os valores do primeiro array:\n");
    for (i = 0; i < size1; i++) {
        scanf("%d", &array1[i]);
    }

    printf("Insira os valores do segundo array:\n");
    for (i = 0; i < size2; i++) {
        scanf("%d", &array2[i]);
    }

    for (i = 0; i < (size1 > size2 ? size1 : size2); i++) {
        sumArray[i] = (i < size1 ? array1[i] : 0) + (i < size2 ? array2[i] : 0);
    }

    printf("A soma dos elementos dos dois arrays anteriores é:\n");
    for (i = 0; i < (size1 > size2 ? size1 : size2); i++) {
        printf("%d ", sumArray[i]);
    }
    printf("\n");

    free(array1);
    free(array2);
    free(sumArray);

    return 0;
}
