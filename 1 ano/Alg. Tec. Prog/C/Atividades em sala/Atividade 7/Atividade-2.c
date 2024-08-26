#include <stdio.h>
#include <stdlib.h>

int i = 0;

struct Dados{
    int idade;
    float salario;
    char sexo;
    int numero_F;

};

int qnt_pessoas = 0;

void abertura(){
    printf("Ola vamos realizar os registros\n");
};

void pesquisa(struct Dados dados[]){
    do{
        printf("Digite a idade : ");
        scanf(" %d", &dados[i].idade);
        if(dados[i].idade == 0){
            break;
        }

        printf("Digite o salario : ");
        scanf(" %f", &dados[i].salario);

        printf("Digite o sexo [M/F] : ");
        scanf(" %c", &dados[i].sexo);

        printf("Digite o numero de filhos : ");
        scanf(" %d", &dados[i].numero_F);

        qnt_pessoas++;
        i++;

    } while (1);

};

float media_IM = 0.0;
float media_salario = 0.0;
float media_Filhos = 0.0;
float maior_salario = 0.0;
int qnt_M = 0;
    
int menor_idade = 100;

void contas(struct Dados dados[]){
    

    for (int i = 0; i < qnt_pessoas; i++){
        if(dados[i].sexo == 'F' && dados[i].salario < 300){
            media_IM = media_IM + dados[i].idade;
            qnt_M++;

        } 

        media_salario = media_salario + dados[i].salario;
        media_Filhos = media_Filhos + dados[i].numero_F;

        if(dados[i].salario > maior_salario){
            maior_salario = dados[i].salario;
        }

        if(dados[i].idade < menor_idade){
            menor_idade = dados[i].idade;
        }

    };

    media_salario = media_salario / qnt_pessoas;
    media_Filhos = media_Filhos / qnt_pessoas;
    media_IM = media_IM / qnt_M;

};

void final(float media_IM, float media_salario, float media_Filhos, int menor_idade){
    printf("Com base nos dados fornecidos de %d pessoas temos esses resultados : \n", qnt_pessoas);
    printf("-A media de idade das mulheres com salario inferior a 300 : %.f\n", media_IM);
    printf("-Media salarial da populaçao : %.2f\n", media_salario);
    printf("-Media de filhos da populaçao : %.1f\n", media_Filhos);
    printf("-Menor idade : %d\n", menor_idade);
}


int main(){
    abertura();

    struct Dados *dados = (struct Dados *)malloc(i * sizeof(struct Dados));
        if(dados == NULL){
            printf("Erro ao alocar memoria\n");
            return 1;
        };

    pesquisa(dados);
    contas(dados);
    final(media_IM, media_salario, media_Filhos, menor_idade);

    free(dados);
    return 0;
}