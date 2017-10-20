#include <stdio.h>

int par(int n) {
  
  return n%2;
  
}

int main() {

  int n;

	printf("Digite um numero inteiro: ");
  scanf("%d", &n);
  printf("%d\n", par(n));
  return 0;

}