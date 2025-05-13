#include <stdio.h>

int main(){

    int ano1, ano2, calculo;

    printf("digite o ano de nascimento?");
    scanf("%d", &ano1);

    printf("digite o ano atual?");
    scanf("%d", &ano2);


    calculo = ano2 - ano1;

    (calculo >= 18) ? printf("Você completa %d anos em %d e poderá tirar a habilitação.\n", calculo, ano2) : printf("Você completa %d anos em %d e ainda não poderá tirar a habilitação.\n",calculo, ano2 );

    return 0;



}