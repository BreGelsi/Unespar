#include <stdio.h>
#include <stdlib.h>

//Desenvolva um programa que leia a quantidade total de segundos e converta para Horas, Minutos e Segundos. Imprima o 
//resultado da conversão na função principal no formato HH:MM:SS. Para isso, utilize a função com protótipo void 
//converteHora(int totalSegundos, int *hora, int *min, int *seg)

void abertura(){
    printf("| Ola bem vindo ao programa de conversao de segundos para horas, minutos e segundos |\n");
    printf("| Iremos armazenar o valor digitado | \n");
}

void dados(int* totalSegundos){
    printf("Digite a quantidade total de segundos: ");
    scanf("%d", totalSegundos);
}

void converteHora(int totalSegundos, int* hora, int* min, int* seg){
    *hora = totalSegundos / 3600;
    *min = (totalSegundos % 3600) / 60;
    *seg = (totalSegundos % 3600) % 60;
}

void fechamento(int hora, int min, int seg){
    printf("| O total de segundos convertidos para horas, minutos e segundos e: %02d:%02d:%02d |\n", hora, min, seg);
    printf("| Muito obrigada por usar nosso programa |\n");
}

int main(){
    int totalSegundos, hora, min, seg;
    abertura();
    dados(&totalSegundos);
    converteHora(totalSegundos, &hora, &min, &seg);
    fechamento(hora, min, seg);
    return 0;
}