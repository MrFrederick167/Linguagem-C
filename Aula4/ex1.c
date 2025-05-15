#include <stdio.h>

int main(){

    int valor_inicial, valor_final;

    printf(" qual o valor inicial ? ");
    scanf("%d", &valor_inicial);

    printf("qual o valor final? ");
    scanf("%d", &valor_final);

    for (int contador  = valor_inicial; contador <= valor_final; contador++)
    {
        printf("%d ", contador); /*para ter espaco entre os numeros de resultado do contador é nescessario da um espaco apos o %d .*/
    }
    
    return 0;

}