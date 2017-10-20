#include <stdio.h>

float soma(float x, float y)
{
  
  return x+y;
  
}

float subtracao(float x, float y)
{
  
  return x-y;
  
}

float multiplicacao(float x, float y)
{
  
  return x*y;
  
}

float divisao(float x, float y)
{
  
  return x/y;
  
}

float potenciacao(float x, float y)
{
  
  if (y == 0) return 1;
  return x*potenciacao(x, y-1);
  
}

float calc(int n, float x, float y) {
  
  if (n == 1) return soma(x, y);
  else if (n == 2) return subtracao(x, y);
  else if(n == 3) return multiplicacao(x, y);
  else if(n == 4) return divisao(x, y);
  else if (n == 5) return potenciacao(x, y);
  return 0;
  
}

int main() {
  
  int n;
  float x, y;

  printf("Digite o operacao desejada e os operandos: ");
  scanf("%d %f %f", &n, &x, &y);
  printf("%.2f\n", calc(n, x, y));
  return 0;

}