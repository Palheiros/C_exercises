//Algoritmo que informa se um valor lido � primo ou n�o

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main ()
{
    //Para usar acentos
    setlocale(LC_ALL, "");

    int valor, i, aux = 0;
    printf("Digite um n�mero para saber se � n�mero primo: ");
    scanf("%d", &valor);
    for (i= 1; i <= valor; i++){
        //Conferindo quantas vezes ocorreu a divisibilidade com resto 0
        if (valor % i == 0){
            aux++;
        }
        //Exibe o resultado da divis�o
        printf("%d / %d tem o resto = %d \n", valor, i, valor%i);
    }
    if (aux == 2){
        printf("\nO n�mero � primo!");
    } else {
        printf("\nO n�mero n�o � primo!");
    }
}
