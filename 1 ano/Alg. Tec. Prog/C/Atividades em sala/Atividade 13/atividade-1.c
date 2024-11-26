#include <stdio.h>
#include <stdlib.h>

//Faça um programa que receba dois arquivos do usuário, e crie um terceiro arquivo com o conteúdo dos dois primeiros 
//juntos (o conteúdo do primeiro seguido do conteúdo do segundo).


int main(){
    FILE *arquivo1, *arquivo2, *arquivo3;
    char c;

    arquivo1 = fopen("arquivo1.txt", "w");
    arquivo2 = fopen("arquivo2.txt", "w");
    arquivo3 = fopen("arquivo3.txt", "w");

    if(arquivo1 == NULL || arquivo2 == NULL || arquivo3 == NULL){
        printf("Erro na abertura dos arquivos\n");
        exit(1);
    }

    printf("Digite o conteudo do arquivo 1: ");
    while((c = getchar()) != '\n'){
        fputc(c, arquivo1);
    }

    printf("Digite o conteudo do arquivo 2: ");
    while((c = getchar()) != '\n'){
        fputc(c, arquivo2);
    }

    fclose(arquivo1);
    fclose(arquivo2);

    arquivo1 = fopen("arquivo1.txt", "r");
    arquivo2 = fopen("arquivo2.txt", "r");

    if(arquivo1 == NULL || arquivo2 == NULL){
        printf("Erro na abertura dos arquivos\n");
        exit(1);
    }

    while((c = fgetc(arquivo1)) != EOF){
        fputc(c, arquivo3);
    }

    while((c = fgetc(arquivo2)) != EOF){
        fputc(c, arquivo3);
    }

    fclose(arquivo1);
    fclose(arquivo2);
    fclose(arquivo3);

    return 0;
}