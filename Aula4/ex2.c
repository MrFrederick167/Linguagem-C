#include <stdio.h>

int main(){

    int n, soma, soma_par = 0;

    printf("digite um numero: ");
    scanf("%d", &n);

    for (int contador = 1; contador <= n; contador++)
    {

        if (contador % 2 == 0)
        {
            soma_par = soma_par + contador;
        }

        

    }

    printf("a soma dos numeros pares de 1 ate %d e: %d ",n, soma_par);
    

}