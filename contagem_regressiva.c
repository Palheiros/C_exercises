#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para usar acentos
    setlocale(LC_ALL,"");

    //Crie um algoritmo que imprima números de 10 a 0  de forma regressiva usando while, do while ou for.

    //while
    int i = 10;
    while (i >= 0){
        printf("%d\n", i);
        i--;
    }

    //do while
    i = 10;
    do{
        printf("%d\n", i);
        i--;
    }while (i >=0);

    //for
    for(i = 10; i >= 0; i--){
        printf("%d\n", i);
    }
}
