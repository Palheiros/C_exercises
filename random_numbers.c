#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    // respons�vel por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // vari�vel que recebe o resto da divis�o de um n�mero por 3 (n�mero aleat�rio entre 0 e 2)
    int aleatorio = rand() %3;

    // vari�vel que recebe o resto da divis�o de um n�mero por 5 (n�mero aleat�rio entre 1 e 5)
    int aleatorio2 = (rand()%5) + 1;

    // vari�vel que recebe o resto da divis�o de um n�mero por 10 (n�mero aleat�rio entre 1 e 10)
    int aleatorio3 = (rand()%10) + 1;

    // imprime o valor
    printf("%d", aleatorio);
    printf("\n%d", aleatorio2);
    printf("\n%d", aleatorio3);
}
