#include <stdio.h>

int main(){
    int calculadora, n1, n2, opcao;

    printf("digite o primeiro numero: ");
    scanf("%d", &n1);

    printf("digite o segundo numero: ");
    scanf("%d", &n2);

    printf("===========MENU===========\n");
    printf("escolha uma opcao:\n");
    printf("1: para somar\n");
    printf("2: para subtracao\n");
    printf("3: para multiplicacao\n");
    printf("4: para divisao\n");
    printf("digite sua opcao: ");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("resultado da soma: %d ", n1+n2);
        break;
    case 2:
        printf("resultado da subtracao: %d", n1-n2);
        break;
    case 3:
        printf("resultado da multiplicacao: %d",n1*n2);
        break;
    case 4:
    printf("o resultado da devisao: %.1f",(float)n1 / n2);
    break;
    
    default:
        printf("operacao invalida!\n");
        break;
    }

    return 0;
}