#include <stdio.h>

 int tamanho_char(char * s)
 {

  int i = 0;

  while(s[i] != '\0') i++;
     
  return i;
 
 } 

int count_vogais(char * s)
{

  int i;
  int n = 0;

  i = tamanho_char(s);
  while (i) {
    if (s[i] == 'a' | s[i] == 'e' | s[i] == 'i' | s[i] == 'o' | s[i] == 'u') {
      n++;
    }
    i--;
  }

  return n;

}

int main ()
{

  char entrada[255];
  fgets(entrada, 255, stdin);
  printf("%d\n", count_vogais(entrada));
  
  return 0;

}