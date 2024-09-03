#include <stdio.h>
#include <stdlib.h>

void abertura(){
    printf("| Ola bem vindo ao sistema de notas | \n");
    printf("| Vamos calcular a media de notas | \n");
}

float* notasA(float* notas, float* maiores){
    for(int i = 0; i < 3; i++){
        printf("Digite a %d nota : ", i+1);
        scanf("%f", &notas[i]);
    }
    printf("| Agora vamos analisar as duas maiores notas e com elas fazer a media | \n");
    if ( notas[0] > notas[1] || notas[0] > notas[2]){
        maiores[0] = notas[0];
        if (notas[1] > notas[2]){
            maiores[1] = notas[1];
        }else{
            maiores[1] = notas[2];
        }
    }else if (notas[1] > notas[0] || notas[1] > notas[2]){
        maiores[0] = notas[1];
        if (notas[0] > notas[2]){
            maiores[1] = notas[0];
        }else{
            maiores[1] = notas[2];
        }
    }else{
        printf("As duas maiores notas sao iguais\n");
    }
    return maiores;
    
    
}

void encerramento(){
    printf("| Obrigada por utilizar nosso sistema de notas | \n");
}


int main(){
    int codigo = 1;
    abertura();
    float notas[3];
    float maiores[2];
    do {
        notasA(notas, maiores);
        printf("| A media das duas maiores notas é : %.2f | \n", (maiores[0] + maiores[1])/2);
        printf("| A media com as tres notas é : %.2f | \n", (notas[0] + notas[1] + notas[2])/3);
        printf("| Deseja continuar ? | \n");
        printf("| Sim : 1 | Nao : 0 | \n"); 
        printf("Codigo : ");
        scanf("%d", &codigo);

    }while (codigo != 0);
    encerramento();
    return 0;
}