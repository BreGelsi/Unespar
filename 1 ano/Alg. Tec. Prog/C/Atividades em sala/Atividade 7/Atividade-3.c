#include <stdio.h>
#include <stdlib.h>

struct Dados{
    char marca[15];
    int ano;
    float preço;


};

void abertura(){
    printf("Ola bem vindo ao registro de carros\n");
    printf("Vamos iniciar o cadastro de seus veiculos\n");
};

int qnt_carros = 0;

void quantidade(){
    printf("Digite a quantidade de carros que deseja adicionar : ");
    scanf(" %d", &qnt_carros);

};

void registro(struct Dados dados[]){
    for (int i = 0; i < qnt_carros; i++){
        printf("Digite a marca do %d carro  [MAX 15 letras : ", i+1);
        scanf(" %s", dados[i].marca);
        
        printf("Digite o ano do %d carro : ", i+1);
        scanf("%d", &dados[i].ano);

        printf("Digite o preço do %d carro : ", i+1);
        scanf("%f", &dados[i].preço);

    };

    
}

void analise(struct Dados dados[]){
    float valor = 1;
    printf("Vamos analisar os carros com valores menores que o que voce desejar\n");
    while(valor != 0){
        printf("\nDigite o valor para filtrar os preços : ");
        scanf("%f", &valor);
        for (int i = 0; i < qnt_carros; i++){
            if (dados[i].preço < valor){
                printf("Temos o carro da marca %s | ano %d | preço %.2f\n", dados[i].marca, dados[i].ano, dados[i].preço);
            }
        }

    }

    

};



int main(){
    abertura();
    quantidade();
    struct Dados *dados = (struct Dados *)malloc(qnt_carros * sizeof(struct Dados));
        if (dados == NULL){
            printf("Erro ao alocar memoria");
            return 1;
        }
    registro(dados);
    analise(dados);

    free(dados);

    return 0 ;

}