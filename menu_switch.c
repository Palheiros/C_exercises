#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main (){

setlocale(LC_ALL, "");

int opcao;

while (opcao <1 || opcao >3){

printf("Escolha uma op��o: \n");
printf("1 - Op��o 1\n");
printf("2 - Op��o 2\n");
printf("3 - Op��o 3\n\n");
scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("\nOp��o 1 escolhida\n");
        break;
    case 2:
        printf("\nOp��o 2 escolhida\n");
        break;
    case 3:
        printf("\nOp��o 3 escolhida\n");
        break;
    default:
        printf("\nOp��o inv�lida!\n\n");
        break;
    }
}

return(0);
}
