#include <stdio.h>

main() {
	int valor1;
	int valor2;
	int soma;
	printf("Entre com um número: ");
	scanf("%d", &valor1);
	printf("Entre com outro número: ");
	scanf("%d", &valor2);
	soma = valor1 + valor2;
	printf("A soma é: %d\n", soma);
	return 0;
}
