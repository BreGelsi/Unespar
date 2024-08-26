#include <stdio.h>
#include <stdlib.h>

struct Dados{
    char nome[15];
    float preço;
    int codigo;
    int quantidade;

};

void abertura(){
   
    printf("| Ola bem vindo ao estoque do mercado | \n");
    printf("Vamos realizar o registro dos produtos\n");
};

int qnt_produtos = 0;

void quantidade(){
    
    printf("Digite a quantidade de produtos que deseja adicionar : ");
    scanf("%d", &qnt_produtos);

};

void registro(struct Dados dados[]){
   
    for (int i = 0; i < qnt_produtos; i++){
       
        printf(" | Registro do %d produto |\n", i+1);
       
        printf("Digite o codigo do produto : ");
        scanf(" %d", &dados[i].codigo);

        printf("Digite o nome do produto [MAX 15 letras] : ");
        scanf(" %s", dados[i].nome);

        printf("Digite o valor do produto : ");
        scanf(" %f", &dados[i].preço);

        printf("Digite a quantidade de estoque : ");
        scanf(" %d", &dados[i].quantidade);
    }
}

void pedido(struct Dados dados[]){
    
    printf("\n| Vamos realizar seu pedido agora |\n");
    
    int codigo_pedido = 1;
    int qnt_compra = 0;
    float pagar = 0.0;
   
    do{
        
        printf("\nDigite o codigo do prdoduto : ");
        scanf(" %d", &codigo_pedido);
        if(codigo_pedido == 0){
            printf("| Encerrando o programa |\n");
            break;
        }

        printf("Digite a quantidade : ");
        scanf(" %d", &qnt_compra);

        
        for (int i = 0; i < qnt_produtos; i++){
            if (codigo_pedido == dados[i].codigo ){
                printf("O codigo corresponde ao produto %s\n", dados[i].nome);
                if(dados[i].quantidade > 0 && qnt_compra < dados[i].quantidade ){
                    
                    printf("Temos %d desse produto e voce quer %d\n", dados[i].quantidade, qnt_compra);
                    dados[i].quantidade = dados[i].quantidade - qnt_compra;
                    pagar = qnt_compra * dados[i].preço;
                    printf("O total a se pagar pelos produtos é %.2f\n", pagar);
                    printf("| O novo estoque desse produto é = %d |\n", dados[i].quantidade);

                    
                    
                }else{
                    printf("| Produto sem estoque |");
                }
                
            }else{
                printf("| Codigo invalido |\n");
            }
        }

    }while(codigo_pedido != 0);

}


int main(){
    abertura();
    quantidade();
    struct Dados *dados = (struct Dados *)malloc(qnt_produtos * sizeof(struct Dados));
        if(dados == NULL){
            printf("Erro ao alocar dados");
            return 1;
        }
    registro(dados);
    pedido(dados);

    free(dados);
    return 0;
}