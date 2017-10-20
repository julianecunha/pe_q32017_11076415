#include <stdio.h>

int inverte(int n)
{

	int num = 0;
	int i;

	for (i = n; i > 0; i/=10) {
		num = num*10 + i%10;
	}
	return num;

}

void palindromo(int n, int inverso) 
{

	if (n < 10) {
		printf("sim\n");
	} else if (n%10 == inverso%10) {
		palindromo(n/10, inverso/10);
	} else printf("nao\n");

}

int main() {

	int n;
	int inverso;

	printf("Digite um numero inteiro: ");
	scanf("%d", &n);
	inverso = inverte(n);
	palindromo(n, inverso);
	return 0;

}