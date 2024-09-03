#include <stdio.h>
#include <stdlib.h>

void abertura(){
    printf("| Ola bem vindo ao programa |\n");
    printf("| Vamos conferir sua idade e dar a classificaçao |\n");
}

void dados(int* idade){
    printf("Digite sua idade : ");
    scanf("%d", idade);
}

void classificaçao(int idade){
    if (idade >= 18){
        printf("| Nadador sua classificaçao é : Adulto |\n");

    }else if(idade > 13 && idade < 18){
        printf("| Nadador sua classificaçao é : Juvenil-B |\n");
    }else if(idade > 10 && idade < 14){
        printf("| Nadador sua classificaçao é : Juvenil-A |\n");
    }else if(idade > 7 && idade < 11){
        printf("| Nadador sua classificaçao é : Infantil-B |\n");
    }else if(idade > 5 && idade < 8){
        printf("| Nadador sua classificaçao é : Infantil-A |\n");
    }
}

int main(){
    abertura();
    int codigo = 1;
    do{
        int idade;
        dados(&idade);
        classificaçao(idade);
        printf("| Deseja continuar ? | \n");
        printf("| Sim : 1 | Nao : 0 | \n");
        printf("Codigo : ");
        scanf("%d", &codigo);
    }while (codigo != 0);
    printf("| Obrigada por utilizar nosso programa |\n");
    return 0;

}