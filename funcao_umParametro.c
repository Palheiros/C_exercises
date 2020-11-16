#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

// É uma boa prática colocar o indicativo da função antes da função principal (main) e a função em si depois dela.
// Em C é preciso que a função seja indicada para que o algoritmo saiba que ela existe e o procure depois da principal
void retornaAntecessor (int numero);
void retornaSucessor (int numero);

int main () {

setlocale (LC_ALL,""); //Para usar acentos

int n; //variável

printf("Digite um número para saber seu antecessor e sucessor: ");
scanf("%d", &n);
retornaAntecessor (n); //Chama a função
retornaSucessor (n);

return 0;
}

//Funções
void retornaAntecessor (numero){
    printf("\nO antecessor de %d é %d.\n", numero, numero - 1);
}

void retornaSucessor (numero){
    printf("O sucessor de %d é %d.\n", numero, numero + 1);
}
