#include <stdio.h>
#include <stdlib.h>

// Programa onde o usuário faz o input dos valores de uma matriz 2x2 e depois a matriz é invertida
// Poderia ser utilizada a estrutura de repetição 'For', porém o algoritmo ficou maior para fins didáticos

void main (){

int matriz [2][2];

printf("Digite um valor para [0][0]: ");
scanf("%d", &matriz[0][0]);
printf("Digite um valor para [0][1]: ");
scanf("%d", &matriz[0][1]);
printf("Digite um valor para [1][0]: ");
scanf("%d", &matriz[1][0]);
printf("Digite um valor para [1][1]: ");
scanf("%d", &matriz[1][1]);

printf("\n%d %d", matriz[0][0], matriz[0][1]);
printf("\n%d %d\n", matriz[1][0], matriz[1][1]);

// invertendo as linhas da matriz

printf("\nMatriz invertida!\n");

int aux1, aux2; // cria-se duas variáveis para copiar os dados da primeira linha, para não perder os elementos.

aux1 = matriz[0][0]; // Cópia dos
aux2 = matriz[0][1]; // elementos

matriz[0][0] = matriz [1][0]; // pega o elemento da primeira linha, primeira coluna e o transfere para a segunda linha, primeira coluna.
matriz[0][1] = matriz [1][1]; // mesmo caso de cima, mas com o outro elemento.
matriz[1][0] = aux1; // agora atribuímos ao índice 'vazio' o elemento copiado anteriormente.
matriz[1][1] = aux2; // mesmo caso acima. Caso não seja feita a cópia perdemos os elementos. Lembrar que as variáveis são sobreescritas.

printf("\n%d %d", matriz[0][0], matriz[0][1]);
printf("\n%d %d\n", matriz[1][0], matriz[1][1]);
}
