#include <stdio.h>
#include <math.h>

int somar(int n1, int n2){
    int soma = n1 + n2;
    return soma;
}
int subtra(int n1, int n2){
    int sub = n1 - n2;
    return sub;
}

int multiplicar(int n1, int n2){
    int mutiplica = n1 * n2;
    return mutiplica;
}

int dividir(int n1, int n2){

    if (n2 == 0)
    {
        printf("nao e possivel divir\n");
    }
    else{ 
       printf("resultado da divisao e: %d", n1 / n2);
    }

}

int main(){
    int n1, n2, opcao;

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
        printf("resultado da soma e: %d", somar(n1, n2));
        break;
    case 2:
        printf("resultado da subtracao e: %d", subtra(n1, n2));
        break;
    case 3:
        printf("resultado da multiplicacao e: %d", multiplicar(n1,n2));
        break;
    case 4: 
        printf(dividir(n1, n2));
        break;
    
    default:
        printf("opcao invalida!");
        break;
    }

}
