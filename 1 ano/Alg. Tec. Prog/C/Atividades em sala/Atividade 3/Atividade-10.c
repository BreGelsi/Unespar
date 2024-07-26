#include <stdio.h>

int main(){

    int codigo = 1;
    float media, n1, n2, n3;

    printf("Vamos realizar operaçoes com suas notas\n");
    printf("As opçoes sao 1- Média aritmética, 2-Média ponderada, 3-Sair\n");

    //Precisa de alteraçao para do while 

    while(1){
        
        printf("Digite o codigo : ");
        scanf("%d", &codigo);
        
        if (codigo > 0){
            break;
        } else {
            
            printf("Codigo invalido!\n");

        }
    }

    switch (codigo){
        case 1:
            
            printf("Digite a primeira nota : ");
            scanf("%f", &n1);
            
            printf("Digite a segunda nota : ");
            scanf("%f", &n2);

            media = (n1 + n2) / 2;

            printf("A media aritimetica é %.1f", media);
        case 2:

            printf("Digite a primeira nota : ");
            scanf("%f", &n1);
            
            printf("Digite a segunda nota : ");
            scanf("%f", &n2);

            printf("Digite a terceira nota : ");
            scanf("%f", &n3);

            media = ((n1 * 2)+ (n2 *3)+ (n3 * 4)) / (2+3+4);

            printf("A media ponderada é %.2f", media);
            
        case 3:
            printf("Saindo do programa");
            return 0;

    }
    return 0;
}