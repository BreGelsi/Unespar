#include <stdio.h>
#include <string.h>

int main() {
    char nome[20], nome2[20], nome3[20], nome4[20], nome5[20];

    printf("Vamos armazenar 5 nomes e mostrar-los na sequencia digitada\n");

    printf("Digite o primeiro nome : ");
    fgets(nome, sizeof(nome), stdin);
    nome[strcspn(nome, "\n")] = '\0';  

    printf("Digite o segundo nome : ");
    fgets(nome2, sizeof(nome2), stdin);
    nome2[strcspn(nome2, "\n")] = '\0';

    printf("Digite o terceiro nome : ");
    fgets(nome3, sizeof(nome3), stdin);
    nome3[strcspn(nome3, "\n")] = '\0';

    printf("Digite o quarto nome : ");
    fgets(nome4, sizeof(nome4), stdin);
    nome4[strcspn(nome4, "\n")] = '\0';

    printf("Digite o quinto nome : ");
    fgets(nome5, sizeof(nome5), stdin);
    nome5[strcspn(nome5, "\n")] = '\0';

    printf("Os nomes digitados sao %s, %s, %s, %s, %s\n", nome, nome2, nome3, nome4, nome5);

    return 0;
}
