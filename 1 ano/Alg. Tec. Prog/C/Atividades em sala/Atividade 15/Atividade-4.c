#include <stdio.h>

void ordenarValores(int *a, int *b, int *c) {
    int temp;
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
    
    if (*b > *c) {
        temp = *b;
        *b = *c;
        *c = temp;
    }
    
    if (*a > *b) {
        temp = *a;
        *a = *b;
        *b = temp;
    }
}

int main() {
    int a, b, c;
    
    printf("Digite três valores inteiros: ");
    scanf("%d %d %d", &a, &b, &c);
    
    ordenarValores(&a, &b, &c);
    
    printf("Valores ordenados: %d %d %d\n", a, b, c);
    
    return 0;
}