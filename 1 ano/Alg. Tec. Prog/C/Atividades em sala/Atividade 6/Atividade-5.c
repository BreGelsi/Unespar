#include <stdio.h>

int main(){
    int vendedor_A[4][7], vendedor_B[4][7], vendedor_C[4][7];
    int total_a = 0, total_b = 0, total_c = 0, total_mes = 0;
    int total_semana1 = 0, total_semana2 = 0, total_semana3 = 0, total_semana4 = 0;

    printf("Vamos analisar as vendas de 3 vendedores\n");
    printf("Vamos pedir os dados das vendas a seguir : \n");

    for(int i = 0; i < 4; i++){
        printf("Vendas da %d semana\n", i + 1);
        for(int j = 0; j < 7; j++){
            
            printf("Digite o numero de vendas do vendedor A no %d dia : ", j + 1);
            scanf("%d", &vendedor_A[i][j]);

        }
        for(int j = 0; j < 7; j++){

            printf("Digite o numero de vendas do vendedor B no %d dia : ", j + 1);
            scanf("%d", &vendedor_B[i][j]);

        }
        for(int j = 0; j < 7; j++){

            printf("Digite o numero de vendas do vendedor C no %d dia : ", j + 1);
            scanf("%d", &vendedor_C[i][j]);

        }
    }

    printf("\nAgora vamos mostrar as vendas de cada funcionario no mes\n");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            total_a = vendedor_A[i][j] + total_a;
            total_b = vendedor_B[i][j] + total_b;
            total_c = vendedor_C[i][j] + total_c;
        }
    }

    printf("Vendas do funcionario A : %d\n", total_a);
    printf("Vendas do funcionario B : %d\n", total_b);
    printf("Vendas do funcionario C : %d\n", total_c);

    printf("\nAgora vamos mostrar total de vendas em cada semana de todos os vendedores juntos\n");

    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 7; j++){
            if(i == 0){
                total_semana1 += vendedor_A[i][j] + vendedor_B[i][j] + vendedor_C[i][j];
            } else if( i == 1){
                total_semana2 += vendedor_A[i][j] + vendedor_B[i][j] + vendedor_C[i][j];
            } else if (i == 2){
                total_semana3 += vendedor_A[i][j] + vendedor_B[i][j] + vendedor_C[i][j];
            } else{
                total_semana4 += vendedor_A[i][j] + vendedor_B[i][j] + vendedor_C[i][j];
            }
        }
    }

    printf("O total da 1 semana é %d\n", total_semana1);
    printf("O total da 2 semana é %d\n", total_semana2);
    printf("O total da 3 semana é %d\n", total_semana3);
    printf("O total da 4 semana é %d\n", total_semana4);

    printf("\nAgora vamos mostrar o total de vendas no mes contando todos os vendedores\n");

    total_mes = total_a + total_b + total_c;

    printf("O total no mes é : %d", total_mes);

    return 0;

}