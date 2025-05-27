#include <stdio.h>

int main(){
    int numeros[10], maior = 0, menor;
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        numeros[i] = numero;
    }
   for (int i = 0; i < 10; i++) {
        if (numeros[i] > maior)
        {
            maior = numeros[i];
        }
    }

    menor = maior;

    for (int i = 0; i < 10; i++)
    {
        if (numeros[i] < menor)
        {
            menor = numeros[i];
        }
        
    }
    printf("o maior e %d", maior);
    printf("o menor e %d", menor);
        
       
    }