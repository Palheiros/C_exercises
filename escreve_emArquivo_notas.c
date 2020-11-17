// programa que cria um arquivo externo e pede um input de notas para o usu�rio, escrevendo no arquivo
// Ao executar o programa ser� gerado um arquivo 'notas.txt' com as notas inseridas, a m�dia e se foi aprovado ou reprovado

#include <stdio.h>
#include <locale.h> // para acentuar

int main(void)
{

 setlocale (LC_ALL,""); // "" utiliza o idioma do sistema. Se quiser especificar usar "portuguese"

 char url[]="notas.txt"; // indica o arquivo a ser utilizado
 float nota,        // cria��o das vari�veis
       media=0.0;
 FILE *arq; // ponteiro que indica que o input se dar� no arquivo

 arq = fopen(url, "w");
 if(arq == NULL)
   printf("Erro, nao foi possivel abrir o arquivo\n");
 else{
  printf("Nota de Matem�tica: ");
  scanf("%f", &nota);
  fprintf(arq, "Matem�tica: %.2f\n", nota); // 'fprintf' � o equivalente ao 'printf', mas a sa�da � no arquivo
  media+=nota; // soma o input da nota na vari�vel m�dia. media = media + nota.

  printf("Nota de F�sica: ");
  scanf("%f", &nota);
  fprintf(arq, "F�sica: %.2f\n", nota);
  media+=nota;

  printf("Nota de Qu�mica: ");
  scanf("%f", &nota);
  fprintf(arq, "Qu�mica: %.2f\n", nota);
  media+=nota;

  media /= 3; // pega a soma das notas e divide por 3. media = media / 3 chegando no valor da m�dia.
  fprintf(arq, "M�dia final: %.2f\n", media); // escreve a m�dia no arquivo
 }

  // condicional com 'if' para escrever se o aluno foi aprovado ou reprovado
  if (media < 7){
    fprintf(arq, "\nReprovado");
  } else {
    fprintf(arq, "\nAprovado");
  }

 fclose(arq); // fecha o arquivo

 printf("\nNotas inseridas no arquivo 'notas.txt'."); // simples aviso no terminal

 return 0;
}
