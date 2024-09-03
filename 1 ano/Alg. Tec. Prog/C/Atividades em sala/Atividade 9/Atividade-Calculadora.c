//Calculadora

#include <stdio.h>
#include <stdlib.h>

struct Dados{
    int qnt_numeros;
    int cod_operaçao;
    float resultado;
};


void abertura(){
    printf("|Ola bem vindo a calculadora !|\n");
    printf("|Vamos realizar operaçoes matematicas|\n");
}

void dadosUsuario(struct Dados* dados){
    printf("Digite a quantidade de numeros que deseja realizar a operaçao : ");
    scanf("%d", &dados->qnt_numeros);

}

void operacao(struct Dados* dados, float* numeros){
    for (int i = 0; i < dados->qnt_numeros; i++){
        printf("Digite o %d numero : ", i+1);
        scanf("%f", &numeros[i]);
    }
    printf("Digite o codigo da operaçao que deseja realizar \n");
    printf("Adiçao : 1 | Subtraçao : 2 | Multiplicaçao : 3 | Divisao : 4| Sair : 0|\n");
    printf("Codigo : ");
    scanf("%d", &dados->cod_operaçao);
    do{
        switch (dados->cod_operaçao){
            case 1:
                dados->resultado = 0;
                for (int i = 0; i < dados->qnt_numeros; i++) {
                    dados->resultado += numeros[i];
                }
                break;
            case 2:
                dados->resultado = numeros[0];
                for (int i = 1; i < dados->qnt_numeros; i++) {
                    dados->resultado -= numeros[i];
                }
                break;
            case 3:
                dados->resultado = 1;
                for (int i = 0; i < dados->qnt_numeros; i++) {
                    dados->resultado *= numeros[i];
                }
                break;
            case 4:
                dados->resultado = numeros[0];
                for (int i = 1; i < dados->qnt_numeros; i++) {
                    if (numeros[i] != 0) {
                        dados->resultado /= numeros[i];
                    } else {
                        printf("Erro: Divisao por zero.\n");
                        dados->resultado = 0;
                        break;
                    }
                }
                break;
            case 0 :
                printf("Saindo...\n");
                break;
        default:
            printf("Código inválido! Tente novamente.\n");
            break;
        }
        if (dados->cod_operaçao >= 1 && dados->cod_operaçao <= 4) {
            printf("Resultado: %.2f\n", dados->resultado);
        }

        printf("\nDeseja realizar uma nova operaçao ?\n");

        printf("Adiçao : 1 | Subtraçao : 2 | Multiplicaçao : 3 | Divisao : 4| Sair : 0|\n");
        scanf("%d", &dados->cod_operaçao);
        
            
      
        

    }while (dados->cod_operaçao != 0);

}

void fechamento(){
    printf("|Obrigada por utilizar nossa calculadora !|\n");
}



int main(){
    abertura();
    struct Dados dados;
    dadosUsuario(&dados);
    float* numeros = (float*)malloc(dados.qnt_numeros * sizeof(float));
    if (numeros == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    operacao(&dados, numeros);
    fechamento();
    free(numeros);
    return 0;
}