#include <stdio.h>
#include <stdlib.h>

// Programa onde o usuário faz o input dos valores de uma matriz 2x2 e depois a matriz é invertida


void main (){

int matriz [2][2], i, j;

// Criando a matriz
for (i = 0; i < 2; i++){                     // o 'for' percorrerá as linhas da matriz com 'i'
    for (j = 0; j < 2; j++){                 // e as colunas com 'j'
        printf("Elemento [%d][%d]: ",i,j);    // input dos elementos pelo usuário
        scanf("%d", &matriz[i][j]);
    }
 }

// Imprimindo a matriz
printf("\nMatriz digitada:\n");
for (i = 0; i < 2; i++){
    for (j = 0; j < 2; j++){
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}

// invertendo as linhas da matriz

printf("\nMatriz invertida!\n");

int aux1, aux2; // cria-se duas variáveis para copiar os dados da primeira linha, para não perder os elementos.

aux1 = matriz[0][0]; // Cópia dos
aux2 = matriz[0][1]; // elementos

matriz[0][0] = matriz [1][0]; // pega o elemento da primeira linha, primeira coluna e o transfere para a segunda linha, primeira coluna.
matriz[0][1] = matriz [1][1]; // mesmo caso de cima, mas com o outro elemento.
matriz[1][0] = aux1; // agora atribuímos ao índice 'vazio' o elemento copiado anteriormente.
matriz[1][1] = aux2; // mesmo caso acima. Caso não seja feita a cópia perdemos os elementos. Lembrar que as variáveis são sobreescritas.

for (i = 0; i < 2; i++){
    for (j = 0; j < 2; j++){
        printf("%d ", matriz[i][j]);
    }
    printf("\n");
}
}
