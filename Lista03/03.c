#include <stdio.h>
#include <stdlib.h>

int* get_vetor_int(int tamanho) 
{
  int i;
  int* v;
  
  v = malloc(tamanho*sizeof(int));
  for (i = 0; i < tamanho; i++) {
    scanf("%d", (v+i));
  }
  
  return v;
}


int* soma_vetores(int* v1, int* v2, int tamanho)
{

  int i;
  int* soma;
  
  soma = malloc(tamanho*sizeof(int));

  for(i = 0; i < tamanho; i++) {
    *(soma+i) = *(v1+i) + *(v2+i);
  }
     
  return soma;
 
} 

void imprime_vetor (int* v, int tamanho)
{
  int i;
  
  for (i = 0; i < tamanho; i++) {
    printf("%d ", *(v+i));
  }
  printf("\n");
  
}

int main ()
{
  
  int* v1, v2, v3;
  int n=5;
  
  v1 = get_vetor_int(n);
  v2 = get_vetor_int(n);
  v3 = soma_vetores(v1, v2, n);
  imprime_vetor(v3, n);
  
  free(v1);
  free(v2);
  free(v3);
  
  return 0;
  
}