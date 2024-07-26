#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[50];
    int len, cont = 0;

    printf("Vamos fazer a analise de uma palavra sua e dizer se ela é um palindromo ou nao\n");

    printf("Digite a palavra : ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    len = strlen(frase);

    for(int i = 0; i < len; i++){
        frase[i] = toupper(frase[i]);
    }

    int fraseinv[50];
    for(int i = 0; i < len; i++) {
        fraseinv[i] = frase[len - 1 - i];
    }

    for(int i = 0; i < len; i++){
        if (frase[i] == fraseinv[i]){
            cont++;
        }
    }

    if(cont == len){
        printf("é um palindromo");
    } else {
        printf("Nao é um palindromo");
    }

    return 0;

}