#include <stdio.h>
#include <stdlib.h>

void escreverMatriz(int **p, int l, int c)
{
  int i, j;

  for (i = 0; i < l; i++)
  	for (j = 0; j < c; j++) {
      printf("%d", p[i][j]);
      if (j == (c-1))
        printf("\n");
      else
        printf("\t");
    }
}

int **transpostaMatriz(int **p, int l, int c)
{
  int **aux;
  int i, j;

  aux = (int**)(malloc(c*sizeof(int*)));

  for (i = 0; i < c; i++) {
    aux[i] = (int*)(malloc(l*sizeof(int)));
    if(!aux[i]) {
      printf("\nNão foi possível alocar memória para aux[%d]", i);
      exit(1);
    }
  }

  for (i = 0; i < c; i++)
      for (j = 0; j < l; j++) {
        aux[i][j] = p[j][i];
      }

  for (j = 0; j < l; j++)
      free(p[j]);

  free(p);

  return  aux;
}

int main()
{
  int c, l, i, j, n;
  int **p;

  l=3;
  c=3;

  p = (int**)(malloc(l*sizeof(int*)));

  for (i = 0; i < l; i++)
      p[i] = (int*) (malloc(c*sizeof(int)));

  n = 0;
  
  for (i = 0; i < l; i++)
    for (j = 0; j < c; j++) {
      scanf("%d", &p[i][j]);
    }

  p = transpostaMatriz(p, l, c);
  escreverMatriz(p, c, l);
    
  return 0;
}
