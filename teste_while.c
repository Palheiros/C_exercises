#include <stdio.h>
#include <locale.h>

int main()

{

    setlocale(LC_ALL,"");

    int x, soma;
    soma = 0;

    printf("Digite o primeiro n�mero: ");
    scanf("%d", &x);

    while (x != 0)
    {
        soma = soma + x;
        printf("Digite outro n�mero (0 interrompe): ");
        scanf("%d", &x);
    }

    printf("SOMA = %d\n", soma);
    return 0;
}
