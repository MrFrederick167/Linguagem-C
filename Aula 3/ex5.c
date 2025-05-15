#include <stdio.h>

int main(){

    float n1, n2, n3, media;
    int acima_media = 0;

    printf("nota 1: ");
    scanf("%f", &n1);

    printf("nota 2: ");
    scanf("%f", &n2);

    printf("nota 3: ");
    scanf("%f", &n3);

    media = (n1 + n2 + n3) / (float)3;
    
    if (n1 > media){
        acima_media++;
    }

    if (n2 > media){
        acima_media++;
    }
    
    if (n3 > media){
        acima_media++;
    }
    
    printf("A media das notas e: %.2f .\n", media);
   acima_media == 0 ? printf("Voce nao teve notas maior que a media") : printf("E %d notas estao acima da media", acima_media);


}