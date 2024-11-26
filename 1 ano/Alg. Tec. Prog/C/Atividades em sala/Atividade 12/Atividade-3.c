#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um programa que salvará dados de alunos em arquivos. Um aluno será composto pelos seguintes campos: 
//numero, nome, curso, nota1, nota2. Cada campo será informado pelo usuário. O seu programa deverá criar 
//um arquivo chamado NomeDoAluno.txt (haverá um arquivo por aluno) e salvar as informações do aluno neste 
//arquivo. Teste seu programa com 3 alunos.

int main(){
    FILE* ponteiro_arquivo;
    char nome[20];
    char curso[20];
    float nota1;
    float nota2;
    int numero;

    ponteiro_arquivo = fopen("NomeDoAluno.txt", "w");
    if(ponteiro_arquivo == NULL){
        printf("Erro na abertura do arquivo!");
        return 1;
    }

    for (int i = 0; i < 3; i++){
        printf("Digite o numero do aluno: ");
        scanf("%d", &numero);
        printf("Digite o nome do aluno: ");
        scanf("%s", nome);
        printf("Digite o curso do aluno: ");
        scanf("%s", curso);
        printf("Digite a nota 1 do aluno: ");
        scanf("%f", &nota1);
        printf("Digite a nota 2 do aluno: ");
        scanf("%f", &nota2);

        fprintf(ponteiro_arquivo, "Numero: %d\n", numero);
        fprintf(ponteiro_arquivo, "Nome: %s\n", nome);
        fprintf(ponteiro_arquivo, "Curso: %s\n", curso);
        fprintf(ponteiro_arquivo, "Nota 1: %.2f\n", nota1);
        fprintf(ponteiro_arquivo, "Nota 2: %.2f\n", nota2);
    }

    fclose(ponteiro_arquivo);
    ponteiro_arquivo = fopen("NomeDoAluno.txt", "r");
    if (ponteiro_arquivo == NULL) {
        printf("Erro na abertura do arquivo para leitura!");
        return 1;
    }
    int caractere;
    while ((caractere = fgetc(ponteiro_arquivo)) != EOF) { 
        printf("%c", caractere); 
    }

    fclose(ponteiro_arquivo);

    return 0;


}