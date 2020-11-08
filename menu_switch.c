#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main (){

setlocale(LC_ALL, "");

int opcao;

while (opcao <1 || opcao >3){

printf("Escolha uma opção: \n");
printf("1 - Opção 1\n");
printf("2 - Opção 2\n");
printf("3 - Opção 3\n\n");
scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf("\nOpção 1 escolhida\n");
        break;
    case 2:
        printf("\nOpção 2 escolhida\n");
        break;
    case 3:
        printf("\nOpção 3 escolhida\n");
        break;
    default:
        printf("\nOpção inválida!\n\n");
        break;
    }
}

return(0);
}
