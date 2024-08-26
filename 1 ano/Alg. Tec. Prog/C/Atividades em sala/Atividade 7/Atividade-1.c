#include <stdio.h>
#include <stdlib.h>

int qnt = 0;
int qnt_F = 0;
int qnt_M = 0;

struct Dados{
    char sexo;
    int codigo;
    int horas;

};


void abertura(){
    printf("Ola, vamos fazer a analise de seus professores e respectivos salarios\n");
};

void Quantiade(){
    printf("Digite a quantidade de professores que deseja adicionar : ");
    scanf("%d", &qnt);
};


void professores(struct Dados dados[]){
    for (int i = 0; i < qnt; i++ ){

        printf("Digite o codigo do professor : ");
        scanf("%d", &dados[i].codigo);

        printf("Digite o sexo do %d professor : ", i + 1);
        scanf(" %c", &dados[i].sexo);

        printf("Digite a quantidade de horas trabalhadas : ");
        scanf(" %d", &dados[i].horas);


        if (dados[i].sexo == 'M'){
            qnt_M++;
        } else if (dados[i].sexo == 'F'){
            qnt_F++;
        }else{
            printf("Genero invalido\n");
        }
        
        
    };
};

void contas(struct Dados dados[]){
    printf("Vamos fazer o calculo do salario conforme os descontos\n");
    
    float salario_bruto;
    float desconto;
    float salario_liquido;

    float total_bruto_M = 0;
    float total_bruto_F = 0;

    for (int i = 0; i < qnt; i++) {
        salario_bruto = dados[i].horas * 60.5;

        if (dados[i].horas < 70) {
            desconto = salario_bruto * 0.08;  
        } else {
            desconto = salario_bruto * 0.05;  
        }

        salario_liquido = salario_bruto - desconto;

        printf("Codigo: %d | Salario Bruto: %.2f | Desconto: %.2f | Salario Liquido: %.2f\n",
               dados[i].codigo, salario_bruto, desconto, salario_liquido);

        if (dados[i].sexo == 'M') {
            total_bruto_M += salario_bruto;
        } else if (dados[i].sexo == 'F') {
            total_bruto_F += salario_bruto;
        }
    }
    
    if (qnt_M > 0) {
        printf("Media dos salarios brutos dos professores masculinos: %.2f\n", total_bruto_M / qnt_M);
    } else {
        printf("Nao ha professores masculinos para calcular a media.\n");
    }

    if (qnt_F > 0) {
        printf("Media dos salarios brutos das professoras femininas: %.2f\n", total_bruto_F / qnt_F);
    } else {
        printf("Nao ha professoras femininas para calcular a media.\n");
    }

}

int main(){
    abertura();
    Quantiade();
    struct Dados *dados = (struct Dados *)malloc(qnt * sizeof(struct Dados));
        if (dados == NULL) {
            printf("Erro ao alocar memoria\n");
            return 1;
        }

    professores(dados);
    contas(dados);
    
    free(dados);

    return 0;
}