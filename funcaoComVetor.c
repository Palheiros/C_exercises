#include <stdio.h>
#include <stdlib.h>

// indica quais fun��es existem no programa
void imprimeVetor (int *vetor, int tamanho);
void modificaVetor (int *vetor, int tamanho);


int main (){

int n,i;

    printf("Tamanho do vetor?: "); //pergunta ao usu�rio o tamanho do vetor
    scanf("%d", &n); // e armazena na vari�vel 'n'

    int vetor[n]; // cria o vetor com o tamanho armazenado em 'n'

// usa a estrutura de repeti��o 'for' para percorrer o vetor a atribuir os elementos nos �ndices
    for (i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

// chama a fun��o
imprimeVetor(vetor, n);

modificaVetor(vetor, n);

return 0;
}


// fun��es
void imprimeVetor (int *vetor, int tamanho){
    int i;
    printf("\n-------- Vetor Digitado ---------\n");
    printf("{");
    for (i = 0; i < tamanho; i++){
        printf("%d", vetor[i]);
    }
    printf("}");
}

void modificaVetor (int *vetor, int tamanho){
    int i;
    printf("\n-------- Vetor + 1 ---------\n");
    printf("{");
    for (i = 0; i < tamanho; i++){
        vetor[i] = vetor[i] + 1;
        printf("%d", vetor[i]);
    }
    printf("}");
}
