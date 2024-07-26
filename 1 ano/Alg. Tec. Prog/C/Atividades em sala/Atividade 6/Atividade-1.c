#include <stdio.h>

int main(){
    int matriz[3][3], maior = 0;

    printf("Vamos preencher uma matriz 3X3 e mostrar seus valores, apontando o maior\n");
    printf("Serao aceitos apenas valores maiores que zero\n");

    for(int i = 0; i < 3; i++){
        printf("Linha %d\n", i + 1);
        for(int j = 0; j < 3; j ++){
            printf("Digite %d numero dessa linha : ", j + 1);
            scanf("%d", &matriz[i][j]);
            if(matriz[i][j] > maior){
                maior = matriz[i][j];
            }
        }
    }

    for(int i = 0; i < 3; i++){
        printf("Os valores da linha %d\n", i + 1);
        for( int j = 0; j < 3; j++){
            printf("Linha %d ; coluna %d = %d\n", i + 1, j + 1, matriz[i][j]);
        }
    }
    printf("O maior valor é %d", maior);

    return 0;
    
}