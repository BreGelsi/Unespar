#include <stdio.h>

int main(){
    int soma = 0, repeti = 0, idade[100];
    float media;

    printf("Vamos calcular a media das idades que digitar\n");
    printf("Caso deseje parar digite 0\n");


    while (1){
        
        printf("Digite a idade : ");
        scanf("%d", &idade[repeti]);

        if (idade[repeti] == 0){
            
            break;;
        }

        soma += idade[repeti];
        repeti++;

    } 

    if (repeti > 0){

        media = soma / repeti;

        printf("A media das %d idades é %.1f", repeti, media);

    } else {
        printf("Nao digitou idade valida");
    }


    return 0;
}