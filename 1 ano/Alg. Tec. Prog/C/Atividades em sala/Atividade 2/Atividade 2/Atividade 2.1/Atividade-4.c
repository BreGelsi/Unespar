#include <stdio.h>

int main (){
   
    int codigo, n1, n2, produto;
    float med, divisao;

    printf("Ola, neste programa podemos realizar algumas interaçoes\n");
    
    printf("Para começar digite o primeiro numero : ");
    scanf("%d", &n1);

    printf("Digite o segundo numero : ");
    scanf("%d", &n2);
   
    printf("Digite o codigo da operaçao desejada : ");
    scanf("%d", &codigo);

    switch(codigo){
        case 1:
            
            med = (n1 + n2) / 2;
            printf("A media dos dois numeros é %.1f", med);
            break;

        case 2:
           
            if (n1 > n2){
                
                int diferenca;
                diferenca = n1 - n2;
                printf("A diferença do maior %d pelo menor %d é %d", n1, n2, diferenca);

            } else if (n1 < n2){
                
                int diferenca;
                diferenca = n2 - n1;
                printf("A diferença do maior %d pelo menor %d é %d", n2, n1, diferenca);

            } else {
                printf("Eles sao iguais, portanto a diferença é 0 ");

            } break;

        case 3:
            
            produto = n1 * n2;
            printf("O produto de %d e %d é %d", n1, n2, produto);
            break;

        case 4:
        
        divisao = n1 / n2;
        printf("A divisao do primeiro %d pelo segundo %d é %.1f", n1, n2, divisao);
        break;

    }   

    return 0;

}