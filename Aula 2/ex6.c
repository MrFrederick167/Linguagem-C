#include <stdio.h>

int main(){

    float produto, parcela, porce, comvendedor, vendaparc;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);
    //

    porce = produto - produto * 0.1;
    parcela = produto / 3;
    comvendedor = porce * 5 /100;
    vendaparc = produto * 5 / 100;




    printf("Valor com 10%% de desconto e: %.2f\n", porce);
    printf("O valor de cada parcela e: %.2f\n", parcela);
    printf("Comissao do vendedor (A vista): %.2f\n", comvendedor);
    printf("comissao do vendedor parcelado: %.2f\n", vendaparc);


}