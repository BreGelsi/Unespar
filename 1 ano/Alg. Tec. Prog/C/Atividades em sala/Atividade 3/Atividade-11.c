#include <stdio.h>

int main(){
    
    int codigo, cad1 = 0, cad2 = 0, cad3 = 0, cad4 = 0;
    float porcentagemN, porcentagemB, votb = 0.0, total = 0.0, votn = 0;

    printf("Vamos realizar a eleiçao e contabilizar os votos\n");
    printf("Tem as seguintes opçoes :\n");
    printf("1, 2, 3, ou 4: votos para os respectivos candidatos\n");
    printf("5: voto nulo, 6: voto em branco e 0 para finalizar a contabilizaçao\n");

//Mudar o while para do while, while(1) é errado e nao é boa pratica 
//Colocar default no case, sempre colocar 

    while(1){
        printf("Digite sua escolha : ");
        scanf("%d", &codigo);

        if (codigo == 0){
            break;
        } else if (codigo > 6){
            printf("Codigo invalido\n");
        }

        switch(codigo){
            case 1:
                cad1++;
                break;
            case 2:
                cad2++;
                break;
            case 3:
                cad3++;
                break;
            case 4:
                cad4++;
                break;
            case 5:
                votn++;
                break;
            case 6:
                votb++;
                break;
            
        }
        total++;
    }
    if (total > 0){
        porcentagemN = (votn * 100) / total;
        porcentagemB = (votb * 100) / total;
        
        printf("O total do 1 candidato %d, Candidato 2 %d, Candidato 3 %d, Candidato 4 %d\n", cad1, cad2, cad3, cad4);
        printf("O total de votos nulos foi %.f\n", votn);
        printf("O total de votos em branco foi %.f\n", votb);
        printf("A porcentagem de votos nulos sob o total de votos é %.1f\n", porcentagemN);
        printf("A porcentagem de votos brancos sob o total de votos é %.1f\n", porcentagemB);
    } else {
        printf("Nenhum voto computado");
    }
    

    return 0;


}