// programa que cria um arquivo externo e pede um input de notas para o usuário, escrevendo no arquivo
// Ao executar o programa será gerado um arquivo 'notas.txt' com as notas inseridas, a média e se foi aprovado ou reprovado

#include <stdio.h>
#include <locale.h> // para acentuar

int main(void)
{

 setlocale (LC_ALL,""); // "" utiliza o idioma do sistema. Se quiser especificar usar "portuguese"

 char url[]="notas.txt"; // indica o arquivo a ser utilizado
 float nota,        // criação das variáveis
       media=0.0;
 FILE *arq; // ponteiro que indica que o input se dará no arquivo

 arq = fopen(url, "w");
 if(arq == NULL)
   printf("Erro, nao foi possivel abrir o arquivo\n");
 else{
  printf("Nota de Matemática: ");
  scanf("%f", &nota);
  fprintf(arq, "Matemática: %.2f\n", nota); // 'fprintf' é o equivalente ao 'printf', mas a saída é no arquivo
  media+=nota; // soma o input da nota na variável média. media = media + nota.

  printf("Nota de Física: ");
  scanf("%f", &nota);
  fprintf(arq, "Física: %.2f\n", nota);
  media+=nota;

  printf("Nota de Química: ");
  scanf("%f", &nota);
  fprintf(arq, "Química: %.2f\n", nota);
  media+=nota;

  media /= 3; // pega a soma das notas e divide por 3. media = media / 3 chegando no valor da média.
  fprintf(arq, "Média final: %.2f\n", media); // escreve a média no arquivo
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
