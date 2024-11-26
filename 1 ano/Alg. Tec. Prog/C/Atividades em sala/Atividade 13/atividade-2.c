#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    FILE *arquivoEntrada, *arquivoSaida;
    char nomeArquivoEntrada[50], nomeArquivoSaida[50], nomeCidade[40], nomeCidadeMaisPopulosa[40];
    int habitantes, habitantesMaisPopulosos = 0;

    printf("Digite o nome do arquivo de entrada: ");
    scanf("%s", nomeArquivoEntrada);
    printf("Digite o nome do arquivo de saída: ");
    scanf("%s", nomeArquivoSaida);

    arquivoEntrada = fopen(nomeArquivoEntrada, "r");
    arquivoSaida = fopen(nomeArquivoSaida, "w");

    if (arquivoEntrada == NULL || arquivoSaida == NULL) {
        printf("Erro ao abrir os arquivos.\n");
        return 1;
    }

    while (fscanf(arquivoEntrada, "%s %d", nomeCidade, &habitantes) != EOF) {
        if (habitantes > habitantesMaisPopulosos) {
            habitantesMaisPopulosos = habitantes;
            strcpy(nomeCidadeMaisPopulosa, nomeCidade);
        }
    }

    fprintf(arquivoSaida, "Cidade mais populosa: %s\n", nomeCidadeMaisPopulosa);
    fprintf(arquivoSaida, "Número de habitantes: %d\n", habitantesMaisPopulosos);

    fclose(arquivoEntrada);
    fclose(arquivoSaida);

    printf("Arquivo de saída gerado com sucesso.\n");

    return 0;
}
