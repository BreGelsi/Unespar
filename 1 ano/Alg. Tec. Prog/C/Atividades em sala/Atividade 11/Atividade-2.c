#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//Faça um programa que armazene, em um registro, os dados de um funcionário de uma empresa, compostos de: Nome, Idade, Sexo (M/F)
//, CPF, Data de Nascimento, Codigo do Setor onde trabalha (0-99), Cargo que ocupa (string de até 30 caracteres) e Salário. 
//Em uma subrotina que recebe o registro como parâmetro passado por referência, receba os dados digitados pelo usuário e 
//armazene-os na estrutura. Na função principal, exiba esses dados na tela.

struct Funcionario{
    char nome[50];
    int idade;
    char sexo;
    char cpf[11];
    char dataNascimento[10];
    int codigoSetor;
    char cargo[50];
    float salario;
};

void abertura(){
    printf("| Bem vindo ao programa! |\n");
    printf("| Vamos armazenar os dados de um funcionário de uma empresa. |\n");
}

void preencheFuncionario(struct Funcionario* funcionario){
    
    printf("Digite o nome do funcionário: ");
    fgets(funcionario->nome, 50, stdin);  
    funcionario->nome[strcspn(funcionario->nome, "\n")] = 0;

    printf("Digite a idade do funcionário: ");
    scanf("%d", &funcionario->idade);

    printf("Digite o sexo do funcionário: ");
    scanf(" %c", &funcionario->sexo);

    printf("Digite o CPF do funcionário: ");
    scanf("%s", funcionario->cpf);

    getchar(); 

    printf("Digite a data de nascimento do funcionário: ");
    scanf("%s", funcionario->dataNascimento);

    printf("Digite o código do setor do funcionário: ");
    scanf("%d", &funcionario->codigoSetor);

    printf("Digite o cargo do funcionário: ");
    fgets(funcionario->cargo, 50, stdin);  
    funcionario->cargo[strcspn(funcionario->cargo, "\n")] = 0;

    printf("Digite o salário do funcionário: ");
    scanf("%f", &funcionario->salario);
}

void mostrarDados (struct Funcionario* funcionarios){
    printf("Nome: %s\n", funcionarios->nome);
    printf("Idade: %d\n", funcionarios->idade);
    printf("Sexo: %c\n", funcionarios->sexo);
    printf("CPF: %s\n", funcionarios->cpf);
    printf("Data de Nascimento: %s\n", funcionarios->dataNascimento);
    printf("Código do Setor: %d\n", funcionarios->codigoSetor);
    printf("Cargo: %s\n", funcionarios->cargo);
    printf("Salário: %.2f\n", funcionarios->salario);

}

void fechamento(){
    printf("| Obrigado por usar o programa! |\n");
}

int main(){
    abertura();
    struct Funcionario funcionario;
    preencheFuncionario(&funcionario);
    mostrarDados(&funcionario);
    fechamento();
    return 0;
}

