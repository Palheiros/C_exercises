#include <stdio.h>
#include <stdlib.h>

// indica quais funções existem no programa
void imprimeVetor (int *vetor, int tamanho);
void modificaVetor (int *vetor, int tamanho);


int main (){

int n,i;

    printf("Tamanho do vetor?: "); //pergunta ao usuário o tamanho do vetor
    scanf("%d", &n); // e armazena na variável 'n'

    int vetor[n]; // cria o vetor com o tamanho armazenado em 'n'

// usa a estrutura de repetição 'for' para percorrer o vetor a atribuir os elementos nos índices
    for (i = 0; i < n; i++){
        printf("Digite um valor: ");
        scanf("%d", &vetor[i]);
    }

// chama a função
imprimeVetor(vetor, n);

modificaVetor(vetor, n);

return 0;
}


// funções
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
