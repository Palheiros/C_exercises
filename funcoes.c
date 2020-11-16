// Básico de funções. Usamos funções quando queremos repetir algo no código sem ter que digitar as mesmas coisas repetidas vezes
// Tem a vantagem de que, se quiser alterar esse trecho, ele irá refletir em todo o código sem ter que reescrever tudo.

#include <stdio.h>
#include <stdlib.h>

// criando uma função que desenha uma borda: 'void' (a função não retorna nada) 'borda' (nome da função) '()' (sem parâmetros) {
void borda (){
    printf("\n|----------------------------------|\n");
}

int main (){

    //chamando a função:
    borda();

    printf("            Hello");
    borda();
    printf("            World!");
    borda();

return 0;
}
