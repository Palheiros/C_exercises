#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void main()
{
    // responsável por alimentar o rand de forma diferente
    srand((unsigned)time(NULL));

    // variável que recebe o resto da divisão de um número por 3 (número aleatório entre 0 e 2)
    int aleatorio = rand() %3;

    // variável que recebe o resto da divisão de um número por 5 (número aleatório entre 1 e 5)
    int aleatorio2 = (rand()%5) + 1;

    // variável que recebe o resto da divisão de um número por 10 (número aleatório entre 1 e 10)
    int aleatorio3 = (rand()%10) + 1;

    // imprime o valor
    printf("%d", aleatorio);
    printf("\n%d", aleatorio2);
    printf("\n%d", aleatorio3);
}
