#include <stdio.h>

int main(){
    int matriz_A[3][4], matriz_B[3][4];

    printf("Vamos anlaisar a matriz A(3X4) e montar uma matriz B\n");
    printf("Vamos montar a Matriz A primeiro\n");

    for(int i = 0; i < 3; i++){
        printf("Linha %d\n", i + 1);
        for(int j = 0; j < 4; j++){
            printf("Digite o %d numero da coluna %d : ", j + 1, j + 1);
            scanf("%d", &matriz_A[i][j]);
        }
    }

    printf("Agora vamos montar a matriz B\n");
    printf("Se o numero da A for par vamos multiplicar por 2 e se for impar por 3\n");
    printf("Desta forma gerando a matriz B\n");

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            if(matriz_A[i][j] % 2 == 0){
                matriz_B[i][j] = 2 * matriz_A[i][j];
            } else {
                matriz_B[i][j] = 3 * matriz_A[i][j];
            }
        }
    } 

    printf("Vamos mostrar sua matriz A(3X4)\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("\nLinha %d ; Coluna %d = %d\n", i + 1, j + 1, matriz_A[i][j]);
        }
    }

    printf("Agora vamos mostrar a matriz B(3X4) criada com dados da A(3X4)\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("\nLinha %d ; Coluna %d = %d\n", i + 1, j + 1, matriz_B[i][j]);
        }
    }

    return 0;
}