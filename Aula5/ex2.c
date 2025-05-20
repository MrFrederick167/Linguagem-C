#include <stdio.h>

//funcao com parametro e sem retorno
void mensagem( char nome[], int idade) {
    printf("ola %s, voce tem %d anos. Seja bem vindo(a)! ", nome, idade);
}


int main(){

    char nome[15];
    int idade;

    printf("nome: ");
    scanf("%s", nome);

    printf("idade: ");
    scanf("%d", &idade);

    mensagem(nome, idade);



}