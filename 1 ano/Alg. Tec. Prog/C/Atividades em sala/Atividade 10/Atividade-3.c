#include <stdio.h>
#include <stdlib.h>

//Faça uma função que receba o raio (por valor), perímetro (por referência) e área de um círculo 
//(por referência) e calcule o perímetro e área. Em seguida, mostre na função principal o valor 
//do perímetro e da área do círculo.

void abertura(){
    printf("| Ola bem vindo ao programa de calculo de perimetro e area de um circulo |\n");
    printf("| Iremos armazenar o raio digitado | \n");
}

void raio_Dados(float* raio){
    printf("Digite o raio do circulo: ");
    scanf("%f", raio);
}

void dados(float raio, float* perimetro, float* area){
    *perimetro = 2 * 3.14 * raio;
    *area = 3.14 * (raio * raio);
}

void fechamento(float perimetro, float area, float raio){
    printf("| O raio do circulo é : %.2f |\n", raio);
    printf("| O perimetro do circulo e: %.2f |\n", perimetro);
    printf("| A area do circulo e: %.2f |\n", area);
    printf("| Muito obrigada por usar nosso programa |\n");

}

int main(){
    float raio, perimetro, area;
    abertura();
    raio_Dados(&raio);
    dados(raio, &perimetro, &area);
    fechamento(perimetro, area, raio);
    return 0;
}
