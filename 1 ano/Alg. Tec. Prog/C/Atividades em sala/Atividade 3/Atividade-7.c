#include <stdio.h>

int main(){
    int idade[15], codigo[15], bom = 0, regular = 0, otimo = 0;
    float media = 0.0, porcentagem = 0.0;

    printf("Vamos realizar uma pesquisa sobre o filme X\n");
    printf("Responda com honestidade!\n");

    for (int i = 0; i <= 14; i++){
        
        printf("Qual sua idade : ");
        scanf("%d", &idade[i]);

        printf("Digite o numero de sua satisfaçao (1- Regular, 2- Bom, 3-Otimo) : ");
        scanf("%d", &codigo[i]);
        
        switch(codigo[i]){
            
            case 1:
                
                regular += 1;
                break;
           
            case 2:
                
                bom += 1;
                break;
           
            case 3:
                
                otimo += 1;
                break;
        }
        
        if (codigo[i] == 3){
            media += idade[i];
        }

    }

    porcentagem = (bom * 100) / 15;
    media = media / otimo; 

    printf("A media de idade das pessoas que responderam otimo foi %.f\n", media);
    printf("A quantidade de pessoas que responderam regular foi %d\n", regular);
    printf("A porcentagem dos que responderam bom entre todos foi %.f\n", porcentagem);

    return 0;
}