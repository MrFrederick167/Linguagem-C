#include <stdio.h>

int main(){
    int numeros[10];
    int soma = 0;

    for (int i = 0; i < 10; i++) {
        int numero;
        printf("Digite um número: ");
        scanf("%d", &numero);

        numeros[i] = numero;
    }
    // [0] = 
    // [1] = 
    for (int i = 0; i < 10; i++) {
       // printf("[%d] = %d\n", i, numeros[i]);
       soma = soma + numeros[i];
    }

    printf("A soma e %d\n", soma);


}