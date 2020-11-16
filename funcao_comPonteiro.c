#include <stdio.h>
#include <stdlib.h>

int retornaMaisDez (int numero);
void aumentaDez (int *ponteiro);

int main (){

// Aqui simplesmente declaramos uma variável e imprimimos na tela
int a = 5;
printf("%d\n", a);

// Função para retornar a variável mais 10. Temos que levar o valor da variável até a função e retornar com o resultado
a = retornaMaisDez(a);
printf("%d\n", a);

// Já na função com ponteiro apontamos para o endereço da variável na memória. Isso economiza tempo e faz o algoritmo mais eficaz
aumentaDez(&a);
printf("%d\n", a);


return 0;
}


// Funções. Int (função com retorno). void (função sem retorno).
int retornaMaisDez (int numero){
    return numero + 10;
}

void aumentaDez (int *numero){
    *numero = *numero + 10;
}
