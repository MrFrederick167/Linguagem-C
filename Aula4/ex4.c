#include <stdio.h>

int main(){

    while (1)
    {
        float substancia;
       
        printf("Digite o pH da substancia: ");
        scanf("%f", &substancia);

        if (substancia < 7)
        {
            printf("substanci acida\n");

        }
        
        if (substancia > 7)
        {
            printf("substancia basica\n");
        }

        if (substancia == 7)
        {
            printf("substancia neutra\n");
        }

        if (substancia == -1)
        {
            printf("saindo da analise\n: ");
            break;
        }
        
       
        
    }

    
    
}
