#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char frase[50], vogais[6] = "AEIOU";
    int len;

    printf("Vamos codificar a frase que digitar\n");

    printf("Digite sua frase : ");
    fgets(frase, sizeof(frase), stdin);
    frase[strcspn(frase, "\n")] = '\0';

    len = strlen(frase);

    for(int i = 0; i < len; i++){
        frase[i] = toupper(frase[i]);
    }

    for(int i = 0; i < len; i++){
        if(frase[i] == vogais[0]){
            frase[i] = '*';
        } else if(frase[i] == vogais[1]){
            frase[i] = '*';
        } else if (frase[i] == vogais[2]){
            frase[i] = '*';
        } else if (frase[i] == vogais[3]){
            frase[i] = '*';
        } else if(frase[i] == vogais[4]){
            frase[i] = '*';
        }
    }

    printf("Sua frase decodificada é\n");
    printf("%s", frase);

    return 0;


}