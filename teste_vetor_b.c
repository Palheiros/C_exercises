#include<stdio.h>
#include<locale.h>

int main()
{

    setlocale(LC_ALL,"");

    int n,i;

    printf("Quantos números terá o vetor?: ");
    scanf("%d", &n);

    int vet[N];

    for (i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &vet[i]);
    }

    printf("\n---- VETOR DIGITADO ----\n");

    printf("{ ");
    for (i = 0; i < n; i++){
        printf("%d ", vet[i]);
    }
    printf("}");
return 0;
}
