#include <stdio.h>
#include <stdlib.h>

//Indica que existem duas funções depois do escopo principal
void soma (int primeiroValor, int segundoValor);
int retornaSoma (int a, int b);


int main (){


int x,y;

printf("Digite dois valores para a primeira soma: ");
scanf("%d %d", &x, &y);
soma(x,y); //chama a função soma, indicando que os dois parâmetros serão as variáveis x e y

printf("\nDigite dois valores para a segunda soma: ");
scanf("%d %d", &x, &y);
soma(x,y);

// Na terceira soma observe que chamamos outra função, dessa vez retornando o resultado da soma dentro da mensagem
printf("\nDigite dois valores para a terceira soma: ");
scanf("%d %d", &x, &y);
printf("\nA soma de %d e %d = %d", x, y, retornaSoma(x,y));

return 0;
}

// A função soma já imprime uma mensagem com o resultado
void soma (int primeiroValor, int segundoValor){
    printf("\nA soma de %d e %d = %d\n", primeiroValor, segundoValor, primeiroValor + segundoValor);
}

// Esta função retorna o resultado da soma com os dois parâmetros
int retornaSoma (int a, int b){
    return a + b;
}
