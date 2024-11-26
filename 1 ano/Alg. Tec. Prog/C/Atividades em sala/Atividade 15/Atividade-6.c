#include <stdio.h>

void calc_esfera(float R, float *area, float *volume) {
    float pi = 3.14159;
    
    *area = 4 * pi * R * R;
    *volume = (4.0/3.0) * pi * R * R * R;
}

int main() {
    float R, area, volume;
    
    printf("Digite o raio da esfera: ");
    scanf("%f", &R);
    
    calc_esfera(R, &area, &volume);
    
    printf("Area da superficie: %.2f\n", area);
    printf("Volume: %.2f\n", volume);
    
    return 0;
}