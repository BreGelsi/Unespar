#include <stdio.h>

int main(){
    int numero = 1000;
    for(int i = 0; i <= 1000; i++){
        numero = numero + i ;
        if( numero % 7 == 0 && numero <= 2000){
            printf("%d-", numero);
        }
    }
    return 0;
}