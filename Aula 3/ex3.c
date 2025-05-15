#include <stdio.h>

int main(){
    
    float peso, altura, imc;

    printf("Bem vindo(a) a calculadora de IMC!\n");

    printf("digite seu peso: ");
    scanf("%f", &peso);

    printf("Otimo, agora digite sua altura: ");
    scanf("%f", &altura);

    imc = peso / (altura*altura);

    if (imc <= 18.5){
        printf(" seu imc e: %.2f e voce esta abaixo do peso", imc);
    }
    
    else if (imc >= 18.5 && imc <= 24.9){
        printf("Seu IMC e: %.2f e voce est com seu peso normal", imc);
    }
    
    else if (imc >= 25 && imc <=29.9){
        printf("Seu IMC e: %.2f e voces esta com sobrepeso!", imc);
    }
    
    else if (imc >= 30 && imc <=34.9){
        printf("Seu IMC e: %.2f e voce esta no nivel de Obesidade grau 1", imc);
    }

    else if (imc >= 35 && imc <= 39.9){
        printf("Seu IMC e: %.2f e voce esta no nivel de Obesidade grau 2", imc);
    }

    else if (imc >= 40){
        printf("Seu imc e: %.2f e voce esta no grau de obesidade 3", imc);
    }

    
    

}