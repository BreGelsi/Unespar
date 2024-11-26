#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Faça um programa que receba do usuário um arquivo texto. Crie outro arquivo texto contendo o texto do 
//arquivo de entrada, mas com as vogais substituídas por ‘*’.

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
    FILE* ponteiro_arquivo2;
    ponteiro_arquivo2 = fopen("vogais2.txt", "w");
    if(ponteiro_arquivo2 == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    int caractere;
    while ((caractere = fgetc(ponteiro_arquivo)) != EOF) { 
        caractere = tolower(caractere); 
        if(caractere == 'a' || caractere == 'e' || caractere == 'i' || caractere == 'o' || caractere == 'u'){
            fputc('*', ponteiro_arquivo2);
        }else{
            fputc(caractere, ponteiro_arquivo2);
        }
    }

    fclose(ponteiro_arquivo);
    fclose(ponteiro_arquivo2);

    return 0;
}