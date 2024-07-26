#include <stdio.h>
int main (){
    int numero = 1;
    printf("Vamos realizar a soma de numeros impares entre 0 a 100\n");
    for ( int i = 0; i <= 100; i++)
    {
       numero = i;
       if(numero % 2 == 1){
        printf("%d\n", numero);
       }
        
    }

    return 0;
    
}