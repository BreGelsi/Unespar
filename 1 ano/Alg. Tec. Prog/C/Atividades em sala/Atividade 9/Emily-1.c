#include <stdio.h>
#include <stdlib.h>
void abertura (){

    printf("ola ! seja bem vindo");
}
void notasAlunos(){
    char A;
    float nota1;
    float nota2;
    float nota3;
    float mediaAritmetica, mediaPonderada;
    printf("digite sua  primeira nota: ");
    scanf("%f",&nota1);
    printf("digite sua  segunda nota: ");
    scanf("%f",&nota2);
    printf("digite sua  terceira nota: ");
    scanf("%f",&nota3);

    while (getchar() != '\n');
    
    printf("digite sua letra (P ou A)");
    scanf("%c",&A);

    switch (A){
        case 'A':
        mediaAritmetica = (nota1+ nota2+ nota3)/3;
        printf("a  media aritmetica é :  %.2f", mediaAritmetica);
        break;
        case 'P':
            mediaPonderada = ((nota1* 5)+(nota2*3)+(nota3*2))/10;
            printf ("sua media ponderada é: %.2f", mediaPonderada);
            break;

    }
     
}
int main (){
    abertura ();
    notasAlunos();
    printf ("volte sempre");
    
    return 0;
}