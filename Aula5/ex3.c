#include <stdio.h>
#include <string.h>/* usei a biblioteca */

char situacao_aluno(float m_final, int faltas)
{
    static char resultado[15]; 

    
   if (m_final >= 9.5 && faltas <= 10 )
   {
    printf("PARABES, VOCE FOI APROVADO COM LOUVOR!");
   }
   
   else if (m_final >= 7 && faltas <= 10)
   {
    printf("PARABENS, VOCE FOI APROVADO!");
   }

   else{
    printf("REPROVADO!");
   }
   
   return resultado;

}

int main(){

    float media;
    int faltas;
    int resultado;

    printf("digite sua media: ");
    scanf("%f", &media);

    printf("quantas faltas voce teve? ");
    scanf("%d", &faltas);

    printf("SITUACAO: %s", situacao_aluno(media, faltas));





}