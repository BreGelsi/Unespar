#include <stdio.h>

int main() {
    int var1, var2;
    int *ptr1, *ptr2;
    
    ptr1 = &var1;
    ptr2 = &var2;
    
    if (ptr1 > ptr2) {
        printf("O maior endereço é: %p\n", ptr1);
    } else {
        printf("O maior endereço é: %p\n", ptr2);
    }
    
    return 0;
}