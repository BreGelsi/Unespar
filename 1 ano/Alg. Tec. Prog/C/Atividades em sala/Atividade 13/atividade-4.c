#include <stdio.h>

#define NUM_FILIAIS 4

int main() {
    FILE *arquivo;
    char nomeArquivo[] = "/Users/brenogelsibarros/Documents/Faculdade/1 ano/Alg. Tec. Prog/C/Atividades em sala/Atividade 13/atividade-4.c";
    double vendasTotais[NUM_FILIAIS] = {0};
    int numVendas[NUM_FILIAIS] = {0};

    arquivo = fopen(nomeArquivo, "r");
    if (arquivo == NULL) {
        printf("Falha ao abrir o arquivo.\n");
        return 1;
    }

    int filial;
    double venda;
    while (fscanf(arquivo, "%d,%lf", &filial, &venda) == 2) {
        vendasTotais[filial - 1] += venda;
        numVendas[filial - 1]++;
    }

    fclose(arquivo);

    printf("Relatório de vendas:\n");
    for (int i = 0; i < NUM_FILIAIS; i++) {
        printf("Filial %d: Vendas totais = %.2lf, Venda média = %.2lf\n", i + 1, vendasTotais[i], vendasTotais[i] / numVendas[i]);
    }

    return 0;
}