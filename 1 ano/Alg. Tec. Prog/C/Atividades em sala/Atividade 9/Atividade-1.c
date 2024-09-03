#include <stdio.h>
#include <stdlib.h>

struct Dados{
    float nota1;
    float nota2;
    float nota3;
    char codigo;
    float media;
    int qnt_alunos;
};

void abertura(){
    printf("|Ola bem vindo ao sistema de notas|\n");
    printf("|Vamos calcular a media de notas|\n");
}

void dadosAlunos(struct Dados* dados){
    printf("Digite a quantidade de alunos : ");
    scanf("%d", &dados->qnt_alunos);

}

void alunos(struct Dados* dados, float* nota1, float* nota2, float* nota3){
    for (int i = 0; i < dados->qnt_alunos; i++){
        printf("Digite a primeira nota do aluno %d : ", i+1);
        scanf("%f", &nota1[i]);
        printf("Digite a segunda nota do aluno %d : ", i+1);
        scanf("%f", &nota2[i]);
        printf("Digite a terceira nota do aluno %d : ", i+1);
        scanf("%f", &nota3[i]);
    }
}

void calculo(struct Dados* dados, float* nota1, float* nota2, float* nota3, float* media){
    printf("\n| Em nosso programa podemos calcular a media aritimetica e a ponderada |\n");
    printf("\n| Caso queria media aritimetica digite : A | Ponderada digite : P |\n");
    printf("Codigo : ");
    getchar();
    scanf("%c", &dados->codigo);
    switch (dados->codigo){
        case 'A':
            for (int i = 0; i < dados->qnt_alunos; i++){
                media[i] = ((nota1[i] + nota2[i] + nota3[i])/3);
                printf("| A nota do %d aluno é : %.2f| \n", i+1, media[i]);
            }
            break;
        case 'P':
            for (int i = 0; i < dados->qnt_alunos; i++){
                media[i] = ((nota1[i] * 5) + (nota2[i] * 3) + (nota3[i] * 2))/10;
                printf("| A nota do %d aluno é : %.2f| \n", i+1, media[i]);
            }
            break;
        
    }
}

int main(){
    struct Dados dados;
    abertura();
    dadosAlunos(&dados);
    float* nota1 = (float*)malloc(dados.qnt_alunos * sizeof(float));
    if (nota1 == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    float* nota2 = (float*)malloc(dados.qnt_alunos * sizeof(float));
    if (nota2 == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    float* nota3 = (float*)malloc(dados.qnt_alunos * sizeof(float));
    if (nota3 == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    float* media = (float*)malloc(dados.qnt_alunos * sizeof(float));
    if (nota3 == NULL) {
        printf("Erro ao alocar memória!\n");
        return 1;
    }
    alunos(&dados, nota1, nota2, nota3);
    calculo(&dados, nota1, nota2, nota3, media);

    free (nota1);
    free (nota2);
    free (nota3);
    free (media);
    return 0;

}