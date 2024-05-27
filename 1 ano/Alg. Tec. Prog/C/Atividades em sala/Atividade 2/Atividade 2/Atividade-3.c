#include <stdio.h>
int main(){
    int numero;
   
    printf("Digite seu codigo : ");
    scanf("%d", &numero);

    switch(numero){
        case 1:
            printf("\nCodigo do gerente");
            break;
        case 2:
            printf("\nCodigo do supervisor");
            break;
        case 3:
            printf("\nCodigo do encarregado");
            break;
        default:
            printf("Codigo nao identificado");
            break;
    }
}