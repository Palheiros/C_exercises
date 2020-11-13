#include <stdio.h>
#include <locale.h>
#include <ctype.h>

int main (){

setlocale(LC_ALL,"");

int cadastrado, ativo, logado;
char opcao;
cadastrado = ativo = logado = 0;

printf("Deseja cadastrar sua conta? (S)im ou (N)ão: ");
scanf(" %c", &opcao);
opcao = tolower(opcao);

if (opcao == 's'){
   cadastrado = 1;
   printf("\nConta cadastrada.\n");
   } else if (opcao == 'n')
    {
        printf("Cadastre a sua conta e aproveite as nossas vantagens!.");
    } else {
        printf ("Opção inválida. Por favor escolher (S) ou (N)");
    }

if (cadastrado == 0){
    return 0;
}

    printf("\nDeseja ativar a sua conta? (S)im ou (N)ão: ");
    scanf(" %c", &opcao);
    opcao = tolower(opcao);

    if ((opcao == 's') && (cadastrado == 1)){
        ativo = 1;
        printf("\nConta ativada.\n");
    } else if (opcao == 'n'){
        printf("\nAtive a sua conta para aproveitar os nossos serviços!\n");
    } else {
        printf ("Opção inválida. Por favor escolher (S) ou (N)");
    }

if (ativo == 0){
    return 0;
}

    printf("\nDeseja logar na sua conta? (S)im ou (N)ão: ");
    scanf(" %c", &opcao);
    opcao = tolower(opcao);

    if ((opcao == 's') && (cadastrado == 1) && (ativo == 1))
    {
        logado = 1;
        printf("\nConta ativada.\n");
    } else if (opcao == 'n'){
        printf("\nVolte sempre!\n");
    }

if (logado == 0){
    return 0;
}

    if ((cadastrado == 1) && (ativo == 1) && (logado == 1))
    {
        printf("\nSeja bem vindo(a)!");
    }


return 0;
}
