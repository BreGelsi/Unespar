#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

//Faça um programa que receba do usuário um arquivo texto e um caracter. Mostre na tela quantas vezes 
//aquele caractere ocorre dentro do arquivo.

int main(){
    FILE* ponteiro_arquivo;
    char palavra[20];
    char caractere;
    ponteiro_arquivo = fopen("caracteres.txt", "w");
    if(ponteiro_arquivo == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    printf("Escreva uma palavra para testar a escrita no arquivo: ");
    scanf("%s", palavra);
    fprintf(ponteiro_arquivo, "%s", palavra);
    fclose(ponteiro_arquivo);

    ponteiro_arquivo = fopen("caracteres.txt", "r"); 
    if (ponteiro_arquivo == NULL) {
        printf("Erro na abertura do arquivo para leitura!");
        return 1;
    }   
    int contador = 0;
    printf("Digite um caractere para contar quantas vezes ele aparece no arquivo: ");
    scanf(" %c", &caractere);
    int caractere_arquivo;
    while ((caractere_arquivo = fgetc(ponteiro_arquivo)) != EOF) { 
        if(toupper(caractere_arquivo) == toupper(caractere)){
            contador++;
        }
    }

    printf("O arquivo possui %d vezes o caractere %c", contador, caractere);

    fclose(ponteiro_arquivo);

    return 0;
}