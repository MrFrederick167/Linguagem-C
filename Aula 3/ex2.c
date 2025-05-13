#include <stdio.h>

int main(){

int idade1;

printf("qual a sua idade? ");
scanf("%d", &idade1);

if(idade1 >= 65){
    printf("voce e um idoso\n");
}

else if (idade1 >= 18 && idade1 <= 65){
    printf("voce e um adulto\n");
}

else if (idade1 >= 13 && idade1 <=18){
    printf("voce e um adolecente\n");
}

else {
    printf("voce e uma crianca\n");
}

return 0;

}