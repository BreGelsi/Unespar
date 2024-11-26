#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 41

int main() {
    int anoAtual;
    char nomeArquivoEntrada[100], nomeArquivoSaida[100];

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    FILE *arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    if (arquivoEntrada == NULL) {
        printf("Falha ao abrir o arquivo de entrada.\n");
        return 1;
    }

    FILE *arquivoSaida = fopen(nomeArquivoSaida, "w");
    if (arquivoSaida == NULL) {
        printf("Falha ao abrir o arquivo de saída.\n");
        fclose(arquivoEntrada);
        return 1;
    }

    char nome[MAX_NAME_LENGTH];
    int anoNascimento;

    while (fscanf(arquivoEntrada, "%40s %d", nome, &anoNascimento) == 2) {
        int idade = anoAtual - anoNascimento;

        fprintf(arquivoSaida, "%s ", nome);

        if (idade < 18) {
            fprintf(arquivoSaida, "menor de idade\n");
        } else if (idade > 18) {
            fprintf(arquivoSaida, "maior de idade\n");
        } else {
            fprintf(arquivoSaida, "entrando na maioridade\n");
        }
    }

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Processamento do arquivo concluído.\n");

    return 0;
}
