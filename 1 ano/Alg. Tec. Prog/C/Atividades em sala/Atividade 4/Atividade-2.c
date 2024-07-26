#include <stdio.h>

int main(){
    
    float meses[12];
    int mmaior = 0, mmenor = 0;
    float maior = -1000, menor = 1000;

    printf("Vamos armazenar as temperaturas médias de cada mes e no final, mostrar a maior e menor\n");

    for(int i = 0; i < 12; i++){
        printf("Digite a temperatura média do %dº mês: ", i + 1);
        scanf("%f", &meses[i]);
        if(meses[i] > maior){
            maior = meses[i];
            mmaior = i + 1;
        }
        if(meses[i] < menor){
            menor = meses[i];
            mmenor = i + 1;
        }
    }

    printf("A maior temperatura média foi no mes %d com %.2f graus.\n", mmaior, maior);
    printf("A menor temperatura média foi no mes %d com %.2f graus.\n", mmenor, menor);

    return 0;
}
