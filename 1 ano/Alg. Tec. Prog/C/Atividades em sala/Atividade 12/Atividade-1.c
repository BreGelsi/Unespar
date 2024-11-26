#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Escreva um programa que:
//Crie/abra um arquivo texto de nome “arq.txt”
//Permita que o usuário grave diversos caracteres nesse arquivo, até que o usuário entre com o caractere ‘0’
//Feche o arquivo
//Agora, abra e leia o arquivo, caractere por caractere, e escreva na tela todos os caracteres armazenados

int main(){
    FILE* ponteiro_arquivo;
    char palavra[20];
    ponteiro_arquivo = fopen("arquivo.txt", "w");
    if(ponteiro_arquivo == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    do{
        printf("Escreva uma palavra para testar a escrita no arquivo: ");
        scanf("%s", palavra);
        fprintf(ponteiro_arquivo, "%s", palavra);
    }while(palavra[0] != '0');
    fclose(ponteiro_arquivo);

    ponteiro_arquivo = fopen("arquivo.txt", "r"); 
    if (ponteiro_arquivo == NULL) {
        printf("Erro na abertura do arquivo para leitura!");
        return 1;
    }   
    int caractere;
    while ((caractere = fgetc(ponteiro_arquivo)) != EOF) { 
        printf("%c", caractere); 
    }

    fclose(ponteiro_arquivo);

    return 0;
}