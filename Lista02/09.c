#include <stdio.h>

int potenciacao(int x, int y) 
{

	if (y == 0) return 1;
	return x*potenciacao(x, y-1);

}

int main() {

	int x, y;

	printf("Insira a base e expoente inteiros: ");
	scanf("%d %d", &x, &y);
	printf("%d\n", potenciacao(x, y));
	return 0;

}