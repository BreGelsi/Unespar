#include <stdio.h>

int main(){
   
    int idade[10];
    int i, pessoas = 0, pessoas2 = 0;
    float peso[10], altura[10];
    float med1 = 0.0, porcentagem;
   
    printf("Vamos começar o registro de 10 pessoas\n");
   
    for (i = 0; i <= 9; i++){
       
        printf("Digite a idade da %d pessoa : ", i + 1 );
        scanf("%d", &idade[i]);
        
        printf("Digite o peso da %d pessoa : ", i + 1);
        scanf("%f", &peso[i]);

        printf("Digite a altura da %d pessoa : ", i + 1);
        scanf("%f", &altura[i]);

        printf("Iniciando uma nova pessoa\n");

    }
    
    printf("Vamos realizar a primera operaçao, média das idades\n");
    
    for (i = 0; i <= 9; i++){
        med1 += idade[i];
    }
    
    med1 = med1 / 10;
    
    printf("A media de idades é %.f\n", med1);
    
    printf("Vamos realizar a segunda operaçao, quantas pessoas tem 90Kg+ e 1,50-\n");
   
    for (i = 0; i <= 9; i++){
        
        if (peso[i] > 90 && altura[i] < 1.50){
            pessoas++;
        }
    }
    
    printf("O numero de pessoas nessas condiçoes é %d\n", pessoas);
   
    printf("Vamos realizar a terceira operaçao, porcentagem de pessoas entre 10 e 30 anos com 1,90+\n");
   
    for (i = 0; i <= 9; i++){
        
        if(idade[i] >= 10 && idade[i] <= 30 && altura[i] > 1.90 ){
            pessoas2++;
        }
    }
    
    porcentagem = (pessoas2 * 100) / 10;
    
    printf("Sao %.1f porcento de pessoas com idade entre 10 e 30 e 1.90+ de altura", porcentagem);

    return 0;
}