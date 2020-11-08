// Algoritmo que pede dois valores e depois através de um switch case realiza uma operação matemática

#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

void main()
{
    setlocale(LC_ALL, ""); // para usar acentos

    double valor1, valor2;
    int opcao;

    printf("Digite o primeiro valor: ");
    scanf("%lf", &valor2);

    printf("\nDigite o segundo valor: ");
    scanf("%lf", &valor1);

    printf("\nEscolha uma opera��o: ");
    printf("\n1 - Soma");
    printf("\n2 - Subtra��o");
    printf("\n3 - Divis�o");
    printf("\n4 - Multiplica��o\n");
    scanf("%d", &opcao);

    switch (opcao)
    {
    case 1:
        printf("Resultado da soma: %.2lf", valor1 + valor2);
        break;
    case 2:
        printf("Resultado da subtra��o: %.2lf", valor1 - valor2);
        break;
    case 3:
        printf("Resultado da divis�o: %.2lf", valor1 / valor2);
        break;
    case 4:
        printf("Resultado da multiplica��o: %.2lf", valor1 * valor2);
        break;
    default:
        printf("\nOp��o incorreta, digite de 1 a 4.");
        break;
    }
}
