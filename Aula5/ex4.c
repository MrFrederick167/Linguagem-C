#include <stdio.h>
#include <string.h>

int ehBissexto(ano, ano1)
{
    static char resultado[30];

    if (ano % 4 == 0 && ano % 100 != 0 || ano % 400 == 0)
    {
        printf("%d E UM ANO E BISSEXTO!\n", ano);
    }

    else{
        printf("%d NAO E UM ANO BISSEXTO!\n", ano);
    }

    if (ano1 % 4 == 0 && ano1 % 100 != 0 || ano1 % 400 == 0)
    {
        printf("%d E UM ANO E BISSEXTO!\n", ano1);
    }

    else{
        printf("%d NAO E UM ANO BISSEXTO!\n", ano1);
    }
    
    return resultado;
}

int main(){

    int ano;
    int ano1;

    printf("digite um ano: ");
    scanf("%d", &ano);
    printf("digite um ano: ");
    scanf("%d", &ano1);
    
    printf(ehBissexto(ano, ano1));


}