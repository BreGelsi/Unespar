#include <stdio.h>
#include <stdlib.h>

//Crie uma subrotina que preencha um vetor com números inteiros aleatórios (utilize a função rand() ). Após o preenchimento
//, solicite um número qualquer ao usuário. Invoque outra subrotina, passando o vetor e o número digitado pelo usuário como 
//parâmetros, e verifique se o número digitado pelo usuário está presente no vetor. Na função principal, informe ao usuário 
//se o número está presente no vetor ou não

void abertura(){
    printf("| Bem vindo ao programa! |\n");
    printf("| Vamos preencher um vetor com números inteiros aleatórios |  \n");
    printf("| Depois verificar se um número digitado por você está presente no vetor. | \n");

}

void preencheVetor(int vetor[], int tamanho){
    for(int i = 0; i < tamanho; i++){
        vetor[i] = rand() % 100;
    }
}

void Numero(int* numero){
    printf("Digite um número: ");
    scanf("%d", numero);
}

void verificar(int vetor[], int tamanho, int* numero){
    for(int i = 0; i < tamanho; i++){
        if(vetor[i] == *numero){
            printf("O número %d está presente no vetor.\n", *numero);
            return;
        }
    }
    printf("O número %d não está presente no vetor.\n", *numero);
}

int main(){
    abertura();
    int tamanho = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);
    int vetor[tamanho];
    preencheVetor(vetor, tamanho);
    int numero = 0;
    Numero(&numero);
    verificar(vetor, tamanho, &numero);
    return 0;
}

