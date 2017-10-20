#include <stdio.h>

int mdc(int x, int y)
{

	if (x == 0) return y;
	else if (y == 0) return x;
	return mdc(y, x%y);

}

int main() {

	int x, y;

	printf("Digite dois numeros inteiros: ");
	scanf("%d %d", &x, &y);
	printf("%d\n", mdc(x, y));
	return 0;

}