#include <stdio.h>

int main(){

    int opcao;

    do
    {
        printf("===== SISTEMA BANCARIO =====\n");
        printf("0 - Sair\n");
        printf("1 - Criar Conta\n");
        printf("2 - Exibir Contas\n");
        printf("3 - Depositar\n");
        printf("4 - Sacar\n");
        printf("5 - Buscar Conta\n");
        printf("===========================\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
        case 0:
            printf("Opcao 0: Saindo do sistema...");
            break;
        case 1:
            printf("Opcao 1: Opcao Criar Conta selecionada.\n");
            break;
        case 2:
            printf("Opcao 2: Opcao Exibir Contas selecionada.\n");
            break;
        case 3:
            printf("Opcao 3: Opcao Depositar selecionada");
            break;
        case 4:
            printf("Opcao 4: Opcao Sacar selecionada.");
            break;
        case 5:
            printf("Opcao 5: Opcao Buscar Conta selecionada.");
            break;
        default:
            printf("opcao invalida, tente novamente!\n");
            break;
        }


    

    } while (opcao != 0);
    


    return 0;
}
