#include <stdint.h>

int main(){

    int a1, a2, a3;

    printf("digite o primeiro Angulo: ");
    scanf(" %d", &a1);

    printf("digite o segundo Angulo: ");
    scanf(" %d", &a2);

    a3 = 180 - a1 -a2;

    printf("O terceiro angulo e: %d graus", a3);


}