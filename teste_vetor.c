#include<stdio.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL,"");

    int N,i;

    printf("Quantos n�meros ter� o vetor?: ");
    scanf("%d", &N);

    double vet[N];

    for (i = 0; i < N; i++){
        printf("Digite um valor: ");
        scanf("%lf", &vet[i]);
    }

    printf("\nN�MEROS DIGITADOS\n");

    for (i = 0; i < N; i++){
        printf("%.1lf\n", vet[i]);
    }

return 0;
}
