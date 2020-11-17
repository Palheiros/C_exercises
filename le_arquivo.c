// Programa que abre um arquivo de texto, l� cada caractere e faz o output no terminal

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale (LC_ALL,"");

    int c;

    FILE *file;

    file = fopen("notas.txt", "r"); // indica qual arquivo abrir. O 'r' significa 'read' (ler)

    if (file){
        while ((c = getc(file)) != EOF){    // vai buscar no arquivo caracter por caracter enquanto n�o chegar no final (EOF = End of File)
            printf("%c", c);    // imprime na tela cada caractere que l� e atribui na vari�vel 'c'
        }
    }

    fclose(file);



return 0;
}
