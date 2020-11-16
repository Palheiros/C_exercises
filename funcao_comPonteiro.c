#include <stdio.h>
#include <stdlib.h>

int retornaMaisDez (int numero);
void aumentaDez (int *ponteiro);

int main (){

// Aqui simplesmente declaramos uma vari�vel e imprimimos na tela
int a = 5;
printf("%d\n", a);

// Fun��o para retornar a vari�vel mais 10. Temos que levar o valor da vari�vel at� a fun��o e retornar com o resultado
a = retornaMaisDez(a);
printf("%d\n", a);

// J� na fun��o com ponteiro apontamos para o endere�o da vari�vel na mem�ria. Isso economiza tempo e faz o algoritmo mais eficaz
aumentaDez(&a);
printf("%d\n", a);


return 0;
}


// Fun��es. Int (fun��o com retorno). void (fun��o sem retorno).
int retornaMaisDez (int numero){
    return numero + 10;
}

void aumentaDez (int *numero){
    *numero = *numero + 10;
}
