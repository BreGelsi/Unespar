#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Faça um programa que receba do usuário um arquivo texto e mostre na tela quantas letras são vogais.

int main(){
    FILE* ponteiro_arquivo;
    char palavra[20];
    ponteiro_arquivo = fopen("vogais.txt", "w");
    if(ponteiro_arquivo == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    printf("Escreva uma palavra para testar a escrita no arquivo: ");
    scanf("%s", palavra);
    fprintf(ponteiro_arquivo, "%s", palavra);
    fclose(ponteiro_arquivo);

    ponteiro_arquivo = fopen("vogais.txt", "r"); 
    if (ponteiro_arquivo == NULL) {
        printf("Erro na abertura do arquivo para leitura!");
        return 1;
    }   
    int caractere;
    int vogais = 0;
    while ((caractere = fgetc(ponteiro_arquivo)) != EOF) { 
        caractere = tolower(caractere); 
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
            vogais++;
        }
    }

    printf("O arquivo possui %d vogais", vogais);

    fclose(ponteiro_arquivo);

    return 0;
}