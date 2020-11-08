#include<stdlib.h>
#include<stdio.h>
#include<locale.h>

int main (void){

setlocale(LC_ALL,"");

int i, n;

printf("Escolha o tamanho do vetor: ");
scanf("%d", &n);

float vetor[n], soma;

for (i = 0; i < n; i++){
    printf("Digite um valor: ");
    scanf("%f", &vetor[i]);
    soma = soma + vetor[i];
    }

printf("\n");

for(i = 0; i < n; i++){
    printf("Vetor [%d] = %.2f\n", i, vetor[i]);
}

printf("\nA média dos elementos do vetor é = %.2f", soma/n);

}
