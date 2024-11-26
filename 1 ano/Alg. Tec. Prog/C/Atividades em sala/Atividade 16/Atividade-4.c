#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char *stringOriginal;
    char *stringCopiada;

    printf("Digite uma string: ");
    stringOriginal = (char *)malloc(sizeof(char) * 100);
    fgets(stringOriginal, 100, stdin);

    stringCopiada = (char *)malloc(sizeof(char) * (strlen(stringOriginal) + 1));

    strcpy(stringCopiada, stringOriginal);

    printf("String original: %s", stringOriginal);
    printf("String copiada: %s", stringCopiada);

    free(stringOriginal);
    free(stringCopiada);

    return 0;
}
