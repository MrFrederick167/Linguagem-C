#include <stdio.h>

int main(){
    char nome[15];
    int idade;
    float altura;
    char genero;
    
    

    printf("Qual seu nome? ");
    scanf("%s", nome);

    printf("perfeito %s\n", nome);
    printf("qual sua idade? ");
    scanf("%d", &idade);

    printf("qual a sua altura? ");
    scanf("%f", &altura);

    printf("qual o seu genero? ");
    scanf(" %c", &genero);

    printf("Bem-vindo(a),%s\n", nome);
    printf("Seu Perfil\n");
    printf("nome %s\n", nome);
    printf("idade %d\n", idade );
    printf("altura %.2f\n", altura);
    printf("genero %c\n", genero);


}