#include <stdio.h>

int main(){

    int horas, faltas, h;

    printf("Analise para gratificaçao de natal\n");

    printf("Digite o numero de horas extras : ");
    scanf("%d", &horas);

    printf("Digite o numero de horas falta : ");
    scanf("%d", &faltas);

    h = horas - (2/3 * (faltas));

    if (h > 2400){
        printf("Premio de R$500");
    } else if (h > 1800 && h <= 2400){
        printf("Premio de R$400");
    } else if (h > 1200 && h <= 1800){
        printf("Premio de R$300");
    } else if (h >= 600 && h <= 1200){
        printf("Premio de R$200");
    } else {
        printf("Premio de R$100");
    }
    
    return 0;

}