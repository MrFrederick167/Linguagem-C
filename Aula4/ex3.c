#include <stdio.h>

int main(){

    int negativo = 0, positivos = 0; 

    while (1)
    {
        int numero;

        printf("digite um numero: ");
        scanf("%d", &numero);

        if (numero > 0)
        {
            positivos = positivos +1;
        }
        
        if (numero < 0)
        {
            negativo = negativo +1;
        }
       

        if (numero == 0)
        {
            printf("saindo...\n");
            break;
        }
        
    }
    
    printf("Quantidade de numeros negativos: %d\n", negativo);
    printf("Quantidade de numeros positivos: %d", positivos);


}