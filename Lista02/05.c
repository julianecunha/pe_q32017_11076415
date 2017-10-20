#include <stdio.h>

unsigned int fatorial(unsigned int x)
{
  
  if (x == 0) return 1;
  return x*fatorial(x-1);
  
}

float binomial(int n, int k) 
{
  
  if (k == 0) return 1;
  return fatorial(n)/(fatorial(k)*fatorial(n-k));
  
}

int main() {
  
  unsigned int n, k;

  printf("Digite os coeficientes: ");
  scanf("%d %d", &n, &k);
  printf("%.2f\n", binomial(n, k));
  return 0;

}