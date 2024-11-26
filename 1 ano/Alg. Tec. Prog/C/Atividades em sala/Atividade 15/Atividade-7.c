#include <stdio.h>

void medidas_retangulo(double* var1, double* var2) {
    double lado1 = *var1;
    double lado2 = *var2;
    double area = lado1 * lado2;
    double perimetro = 2 * (lado1 + lado2);
    *var1 = area;
    *var2 = perimetro;
}

int main() {
    double lado1, lado2, area, perimetro;

    printf("Digite as medidas dos lados do retângulo: ");
    scanf("%lf %lf", &lado1, &lado2);

    medidas_retangulo(&lado1, &lado2);

    printf("Área do retângulo: %.2lf\n", lado1);
    printf("Perímetro do retângulo: %.2lf\n", lado2);

    return 0;
}