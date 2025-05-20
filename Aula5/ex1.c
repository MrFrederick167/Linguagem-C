#include <stdio.h>

float calcularAreaRetangulo (float base, float altura);

int main(){

    float base;
    float altura;
    float calculo;

    printf(" digite a base do retangulo: ");
    scanf("%f", &base);
    printf("digite a altura do retangulo: ");
    scanf("%f", &altura);

    calculo = calcularAreaRetangulo( base, altura);

    printf("area do retangulo: %.2f ", calculo);



}

float calcularAreaRetangulo (float base, float altura) {
    return base * altura;
}