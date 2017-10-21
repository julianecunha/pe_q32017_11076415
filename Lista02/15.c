#include <stdio.h>

void movetorre (int n, char orig, char dest, char aux){
  
  if (n==1) {
    printf("%c-%c   ", orig, dest);
    return;
   }
  movetorre(n-1,orig,aux,dest);
  printf("%c-%c   ", orig, dest);
  movetorre(n-1,aux,dest,orig);

}

int main()
{
  
  int discos;
  
  printf("Digite a quantidade de discos: ");
  scanf("%d",&discos);
  movetorre(discos,'A','C','B');
  return 0;
  
}