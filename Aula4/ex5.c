#include <stdio.h>

int main(){

    int entrada, senha = 1305;

    do
    {
        printf("para acessar o sistema digite a senha: ");
        scanf("%d", &entrada);
        if (entrada != senha)
        {
            printf("senha INCORRETA, tente outra vez!\n");
        }
        

    } while (entrada != senha);
    
    if (entrada == senha)
    {
        printf("Acesso LIBERADO!");
    }
    
    
    
}