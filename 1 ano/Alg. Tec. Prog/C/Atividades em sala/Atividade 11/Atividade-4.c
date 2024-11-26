#include <stdio.h>
#include <stdlib.h>

//Faça um programa que controle o estoque de uma loja de brinquedos. Atualmente, no estoque há 40 itens, cada um contendo 
//código, descrição, preço de compra, preço de venda, quantidade em estoque e estoque mínimo. O programa deverá: 
///Criar uma rotina para cadastrar os produtos.
///Criar uma rotina para mostrar o valor do lucro obtido com a venda de determinado produto (inserido pelo usuário) 
///e o percentual que esse valor representa.
///Criar uma rotina que mostre os produtos com quantidade em estoque abaixo do estoque mínimo permitido.

struct Brinquedo{
    int codigo;
    char descricao[50];
    float precoCompra;
    float precoVenda;
    int quantidadeEstoque;
    int estoqueMinimo;
};

void abertura (){
    printf("| Bem vindo ao programa! |\n");
    printf("| Vamos controlar o estoque de uma loja de brinquedos. |\n");
}

void cadastrarProdutos(struct Brinquedo* brinquedos){
    for(int i = 0; i < 40; i++){
        printf("Brinquedo %d\n", i+1);
        printf("Digite o código do brinquedo: ");
        scanf("%d", &brinquedos[i].codigo);
        getchar();
        printf("Digite a descrição do brinquedo: ");
        fgets(brinquedos[i].descricao, 50, stdin);
        brinquedos[i].descricao[strcspn(brinquedos[i].descricao, "\n")] = 0;
        printf("Digite o preço de compra do brinquedo: ");
        scanf("%f", &brinquedos[i].precoCompra);
        printf("Digite o preço de venda do brinquedo: ");
        scanf("%f", &brinquedos[i].precoVenda);
        printf("Digite a quantidade em estoque do brinquedo: ");
        scanf("%d", &brinquedos[i].quantidadeEstoque);
        printf("Digite o estoque mínimo do brinquedo: ");
        scanf("%d", &brinquedos[i].estoqueMinimo);
    }
}

void lucro(struct Brinquedo* brinquedos){
    int codigo = 0;
    printf("Digite o código do brinquedo: ");
    scanf("%d", &codigo);
    for(int i = 0; i < 40; i++){
        if(brinquedos[i].codigo == codigo){
            float lucro = brinquedos[i].precoVenda - brinquedos[i].precoCompra;
            float percentual = (lucro / brinquedos[i].precoCompra) * 100;
            printf("O lucro obtido com a venda do brinquedo é de %.2f e representa %.2f%% do valor de compra.\n", lucro, percentual);
            return;
        }
    }
    printf("Brinquedo não encontrado.\n");
}

void estoqueMinimo(struct Brinquedo* brinquedos){
    for(int i = 0; i < 40; i++){
        if(brinquedos[i].quantidadeEstoque < brinquedos[i].estoqueMinimo){
            printf("Brinquedo %d\n", i+1);
            printf("Código: %d\n", brinquedos[i].codigo);
            printf("Descrição: %s\n", brinquedos[i].descricao);
            printf("Preço de compra: %.2f\n", brinquedos[i].precoCompra);
            printf("Preço de venda: %.2f\n", brinquedos[i].precoVenda);
            printf("Quantidade em estoque: %d\n", brinquedos[i].quantidadeEstoque);
            printf("Estoque mínimo: %d\n", brinquedos[i].estoqueMinimo);
        }
    }
}

void fechamento(){
    printf("| Obrigado por usar o programa! |\n");
}

int main(){
    abertura();
    struct Brinquedo brinquedos[40];
    cadastrarProdutos(brinquedos);
    lucro(brinquedos);
    estoqueMinimo(brinquedos);
    fechamento();
    return 0;
}

