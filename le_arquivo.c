// Programa que abre um arquivo de texto, lê cada caractere e faz o output no terminal
// Você precisa ter um aquivos chamado notas.txt na mesma pasta do programa ou modificar a linha 16 com o nome do arquivo que deseja

#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

int main(){

    setlocale (LC_ALL,"");

    int c;

    FILE *file;

    file = fopen("notas.txt", "r"); // indica qual arquivo abrir. O 'r' significa 'read' (ler)

    if (file){
        while ((c = getc(file)) != EOF){    // vai buscar no arquivo caracter por caracter enquanto não chegar no final (EOF = End of File)
            printf("%c", c);    // imprime na tela cada caractere que lê e atribui na variável 'c'
        }
    }

    fclose(file);



return 0;
}
