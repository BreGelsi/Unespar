#include <stdio.h>

int main() {
    int num = 10;
    float real = 3.14;
    char character = 'A';

    int *ptrInt = &num;
    float *ptrReal = &real;
    char *ptrChar = &character;

    printf("Antes da modificação:\n");
    printf("Inteiro: %d\n", *ptrInt);
    printf("Real: %.2f\n", *ptrReal);
    printf("Caractere: %c\n", *ptrChar);

    *ptrInt = 20;
    *ptrReal = 2.71;
    *ptrChar = 'B';

    printf("\nApós a modificação:\n");
    printf("Inteiro: %d\n", *ptrInt);
    printf("Real: %.2f\n", *ptrReal);
    printf("Caractere: %c\n", *ptrChar);

    return 0;
}