#include <stdio.h>

int main(){

    char nome[15];
    float nota1, nota2, media1;
    

    printf("qual seu nome? ");
    scanf("%s", nome);

    printf("qual sua primeira nota? ");
    scanf(" %f", &nota1);

    printf("qual sua segunda nota? ");
    scanf(" %f", &nota2);

    media1 = (nota1 + nota2) / 2;

    printf("%s Sua media foi: %.2f\n", nome, media1);

    return (0);


}