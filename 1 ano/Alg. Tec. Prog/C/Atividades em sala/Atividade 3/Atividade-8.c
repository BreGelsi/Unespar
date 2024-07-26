#include <stdio.h>

int main(){
    int quantidade, idades = 0;
    float media = 0.0;

    printf("Vamos calcular a media de idade\n");

    printf("Digite a quantidade de idades que deseja adicionar : ");
    scanf("%d", &quantidade);

    int idade[quantidade];

    for (int i = 0; i <= quantidade; i ++){
        

        printf("Digite a idade : ");
        scanf("%d", &idade[i]);

        if (idade[i] == 0){
            break;
        }

        media += idade[i];
        idades++;

    }

    if (idades > 0){
       
        media = media / idades;
        
        printf("A media das idades é %.1f", media);
    } else {
        printf("Nenhuma idade digitada");
    }


    return 0;
}