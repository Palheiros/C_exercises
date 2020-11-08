#include <stdio.h>
#include <locale.h>
#define TRUE 1
#define FALSE 0

//função encaixa que dados dois inteiros positivos a e b verifica se b corresponde aos últimos dígitos de a.

int encaixa(int a, int b) {

setlocale(LC_ALL,"");

  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return TRUE;
  else
    return FALSE;

}

int main() {
  int a, b, subseq, maior, menor;

  printf("Digite dois inteiros positivos: ");
  scanf("%d %d", &a, &b);

  if (a > b) {
    maior = a;
    menor = b;
  }
  else {
    maior = b;
    menor = a;
  }

  subseq = FALSE;
  while (maior >= menor) {
    if (encaixa(maior,menor) == TRUE)
      subseq = TRUE;
    maior = maior/10;
  }
  if (subseq == TRUE)
    printf("%d é segmento de %d\n",b,a);
  else
    printf("%d nao é segmento de %d\n",b,a);

  return 0;
}
