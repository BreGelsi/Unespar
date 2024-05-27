#include <stdio.h>

int main(){
    
    int codigo;
    float valor;

    printf("Vamos calcular o valor de seu emprestimo\n");

    printf("Digite o valor que deseja investir : ");
    scanf("%f", &valor);

    printf("Digite o codigo que deseja utilizar de investimento : ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            valor = (valor * 0.05) + valor;
            printf("O valor do rendimento com um mes na poupança é %.2f", valor);
            break;
        case 2:
            valor = (valor * 0.011) + valor;
            printf("O valor do rendimento nos fundos de renda fixa é %.2f", valor);
            break;

    }

    return 0;

}