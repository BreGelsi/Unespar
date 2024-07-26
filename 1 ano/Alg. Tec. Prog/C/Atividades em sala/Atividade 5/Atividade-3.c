#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[50], vogais[6] = "AEIOU";
    int letras = 0;
    
    printf("Vamos analisar uma frase e dizer quantas vogais tem\n ");

    printf("Digite a frase : ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    int len = strlen(frase);

    for(int i = 0; i < len; i++){
        frase[i] = toupper(frase[i]);
    }

    for(int i = 0; i < len; i++){
        if(frase[i] == vogais[0]){
            letras++;
        } else if (frase[i] == vogais[1]){
            letras++;
        } else if(frase[i] == vogais[2]){
            letras++;
        } else if (frase[i] == vogais[3]){
            letras++;
        } else if (frase[i] == vogais[4]){
            letras++;
        }

    }

    printf("Tem %d vogais no total\n", letras);

    return 0;
}