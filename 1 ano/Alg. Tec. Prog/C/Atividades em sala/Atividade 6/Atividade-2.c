#include <stdio.h>

int main(){
    int matriz_A[2][2], matriz_B[2][2], maior = 0;

    printf("Vamos analisar uma matriz 2X2, ver o maior numero e montar uma matriz B\n");

    for(int i = 0 ; i < 2; i ++){
        printf("Linha %d\n", i + 1);
        for( int j = 0; j < 2; j++){
            printf("Digite o numero %d numero da coluna %d : ", j + 1, j + 1);
            scanf("%d", &matriz_A[i][j]);
            if(matriz_A[i][j] > maior){
                maior = matriz_A[i][j];
            }
        }
    }

    printf("Vamos mostrar sua matriz A(2X2)\n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Linha %d ; Coluna %d = %d\n", i + 1, j + 1, matriz_A[i][j]);
        }
    }

    printf("E o maior numero dela é %d\n", maior);

    printf("Agora vamos gerar a matriz B(2X2) pegando o maior numero de A e multiplicando pelos numeros presente no mesmo\n ");

    for(int i = 0; i < 2; i ++){
        for(int j = 0; j < 2; j++){
            matriz_B[i][j] =  maior * matriz_A[i][j] ;
        }
    }

    printf("A matriz B(2X2) é : \n");
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            printf("Linha %d ; Coluna %d = %d\n", i + 1, j + 1, matriz_B[i][j]);
        }
    }

    return 0;

}