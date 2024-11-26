#include <stdio.h> 
#include <stdlib.h>

int main(){
    FILE* ponteiro_arquivo;
    char palavra[20];
    ponteiro_arquivo = fopen("arquivo.txt", "w");
    if(ponteiro_arquivo == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }
    printf("Escreva uma palavra para testar a escrita no arquivo: ");
    scanf("%s", palavra);
    fprintf(ponteiro_arquivo, "%s", palavra);
    fclose(ponteiro_arquivo);
    printf("Dados gravados com sucesso!");
    return 0;
}