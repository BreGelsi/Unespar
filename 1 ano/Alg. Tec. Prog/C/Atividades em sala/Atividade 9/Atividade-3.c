#include <stdio.h>
#include <stdlib.h>

void abertura(){
    printf("| Ola bem vindo ao programa |\n");
    printf("| Vamod analisar os 3 valores que adicionar e dizer quais triangulos pode formar | \n");
    printf("| Podendo variar entre : Equilatero, Isosceles e Escaleno |\n");
}

void dados(float* valores){;
    for (int i = 0; i < 3; i++){
        printf("Digite o %d valor : ", i+1);
        scanf("%f", &valores[i]);
    }
}

void analise(float* valores){
    if (valores[0] == valores[1] && valores[0] == valores[2]){
        printf("| Os valores digitados formam um triangulo Equilatero |\n");
    }else if (valores[0] == valores[1] || valores[0] == valores[2] || valores[1] == valores[2]){
        printf("| Os valores digitados formam um triangulo Isosceles |\n");
    }else if (valores[0] != valores[1] && valores[0] != valores[2] && valores[1] != valores[2]){
        printf("| Os valores digitados formam um triangulo Escaleno |\n");
    }

}

int main(){
    abertura();
    int codigo = 1;
    do{
        float valores[3];
        dados(valores);
        analise(valores);
        printf("| Deseja continuar ? | \n");
        printf("| Sim : 1 | Nao : 0 | \n");
        printf("Codigo : ");
        scanf("%d", &codigo);
    }while (codigo != 0);
    return 0;

}