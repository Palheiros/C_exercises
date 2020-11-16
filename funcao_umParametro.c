#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// � uma boa pr�tica colocar o indicativo da fun��o antes da fun��o principal (main) e a fun��o em si depois dela.
// Em C � preciso que a fun��o seja indicada para que o algoritmo saiba que ela existe e o procure depois da principal
void retornaAntecessor (int numero);
void retornaSucessor (int numero);

int main () {

setlocale (LC_ALL,""); //Para usar acentos

int n; //vari�vel

printf("Digite um n�mero para saber seu antecessor e sucessor: ");
scanf("%d", &n);
retornaAntecessor (n); //Chama a fun��o
retornaSucessor (n);

return 0;
}

//Fun��es
void retornaAntecessor (numero){
    printf("\nO antecessor de %d � %d.\n", numero, numero - 1);
}

void retornaSucessor (numero){
    printf("O sucessor de %d � %d.\n", numero, numero + 1);
}
