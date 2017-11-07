#include <stdio.h>
#include <stdlib.h>

int tamanho_char(char * s)
{
  int i = 0;
  
  while(s[i] !='\0') i++;
  
  return i;
}

char* inverte_string(char* s, int tamanho)
{
  char* inverso_s;
  int i, n;
  
  n = tamanho; 
  inverso_s = malloc(n*sizeof(char));
  
  for (i = 0; i < tamanho; i++) {
    *(inverso_s+i) = s[n-1];
    n--;
  }
  
  return inverso_s;
}

void imprime_string(char* s, int tamanho) 
{
  int i;
  
  for (i = 0; i < tamanho; i++) {
    printf("%c", *(s+i));
  }
  printf("\n");
}

int main()
{
  int n;
  char s[255];
  char* inverso_s;
  
  fgets(s, 255, stdin);
  n = tamanho_char(s);
  inverso_s = inverte_string(s, n);
  imprime_string(inverso_s, n);
  
  return 0;
}