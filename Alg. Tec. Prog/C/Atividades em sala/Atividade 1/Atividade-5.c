#include <stdio.h>
int main(){
    int ano, ano2050, idade, nascimento = 0;
    printf("Bem vindo(a) vamos calcular sua idade e quantos anos tera em 2050\n");
    printf("Digite o ano em que estamos : ");
    scanf("%d", &ano);
    printf("Digite em que ano nasceu : ");
    scanf("%d", &nascimento);
    idade = ano - nascimento;
    ano2050 = 2050 - nascimento;
    printf("Voce tem %d anos e em 2050 tera %d anos", idade, ano2050);
    return 0;
}