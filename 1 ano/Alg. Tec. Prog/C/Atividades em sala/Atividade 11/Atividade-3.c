#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Um vendedor recebe um salário fixo mais 6% de comissão sobre suas vendas. Crie um algoritmo que tenha um registro de vendedor,
// com o salário fixo, valor total de suas vendas, comissão e o salário final. Crie uma sub-rotina que receba um vendedor 
//como parâmetro (por valor ou por referência). Na subrotina, peça ao usuário para digitar o valor do salário fixo, o valor 
//total de vendas e calcule (na mesma subrotina) a comissão e o salário final. Na função principal, mostre todas as informações.
// Faça isso para dois funcionários diferentes (vetor).

struct Vendedor{
    float salarioFixo;
    float valorVendas;
    float comissao;
    float salarioFinal;
};

void abertura(){
    printf("| Bem vindo ao programa! |\n");
    printf("| Vamos calcular o salário final de dois vendedores. |\n");
}

void preencheVendedor(struct Vendedor* vendedor){
    printf("Digite o salário fixo do vendedor: ");
    scanf("%f", &vendedor->salarioFixo);

    printf("Digite o valor total de vendas do vendedor: ");
    scanf("%f", &vendedor->valorVendas);

    vendedor->comissao = vendedor->valorVendas * 0.06;
    vendedor->salarioFinal = vendedor->salarioFixo + vendedor->comissao;
}

void mostrarDados(struct Vendedor* vendedor){
    printf("| Dados do vendedor |\n");
    printf("Salário fixo: %.2f\n", vendedor->salarioFixo);
    printf("Valor total de vendas: %.2f\n", vendedor->valorVendas);
    printf("Comissão: %.2f\n", vendedor->comissao);
    printf("Salário final: %.2f\n", vendedor->salarioFinal);
}

void fechamento(){
    printf("| Obrigado por usar o programa! |\n");
}

int main(){
    abertura();
    struct Vendedor vendedores[2];
    for(int i = 0; i < 2; i++){
        printf("Vendedor %d\n", i+1);
        preencheVendedor(&vendedores[i]);
    }
    for(int i = 0; i < 2; i++){
        printf("Vendedor %d\n", i+1);
        mostrarDados(&vendedores[i]);
    }
    fechamento();
    return 0;
}