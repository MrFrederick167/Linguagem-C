#include <stdio.h>

int main(){

    char nome[15];
    float peso, altura, resultado;

    printf(" Qual sue nome?");
    scanf("%s", nome);

    printf("Qual o seu peso?");
    scanf("%f", &peso);

    printf("E qual a sua altura ?");
    scanf("%f", &altura);

    resultado = peso / (altura * altura);

    printf("%s Seu IMC e: %.2f\n", nome, resultado);
}
