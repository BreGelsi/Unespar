#include <stdio.h>

int main(){
    int vet[18], matriz[3][6];

    printf("Vamos analisar um vetor de 18 itens e no final montar uma matriz\n");

    for(int i = 0; i < 18; i++){
        printf("Digite o %d numero do vetor : ", i + 1);
        scanf("%d", &vet[i]);
    }

    printf("para o vetor com os numeros digitados abaixo :\n");

    for(int i = 0; i < 18; i++){
        printf("Numero %d = %d\n",i + 1, vet[i] );
    }

    printf("\nMontamos a matriz B(3X6)\n");

    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < 6; j++){
            if(i == 0){
                matriz[0][j] = vet[j];
            } else if (i == 1){
                matriz[1][j] = vet[j + 6];
            } else {
                matriz[2][j] = vet[j + 12];
            }
        }
    }

    printf("Vamos mostrar a matriz (3X6) que foi gerada\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 6; j++){
            printf("\nLinha %d ; Coluna %d = %d\n", i + 1, j + 1, matriz[i][j]);
        }
    }

    return 0;


}