#include <stdio.h> 
#include <string.h>
#include <ctype.h>

int main(){
    char nomeM[50], letra[2];
    int letras = 0;

    printf("Vamos armazenar o nome de sua musica e a letra que desejar iremos contar quantas vezes aparece e suas posiçoes\n");

    printf("Digite o nome da musica : ");
    fgets(nomeM, sizeof(nomeM), stdin );
    nomeM[strcspn(nomeM, "\n")] = '\0';

    printf("Digite a letra que deseja analisar : ");
    fgets(letra, sizeof(letra), stdin);
    letra[strcspn(letra, "\n")] = '\0';


    int len = strlen(nomeM);

    letra[0] = toupper(letra[0]);
    
    for(int i = 0; i < len; i++){
        nomeM[i] = toupper(nomeM[i]);
    }
    
    for(int i = 0; i < len ; i++){
        if(nomeM[i] == letra[0]){
            letras++;
            printf("A letra %s é encontrada na posiçao %d\n", letra, i + 1);

        }
    }


    if(letra > 0){
        
        if (letras > 1){
            printf("E ela aparece %d vezes\n", letras);
        } else {
            printf("E ela aparece %d vez\n", letras);
        }
        
    }else if (letra < 0){
        printf("Letra nao encontrada\n");
        
    }


    return 0;



}