#include <stdio.h>

main() {
	int valor1;
	int valor2;
	int subtracao;
	printf("Entre com um número: ");
	scanf("%d", &valor1);
	printf("Entre com outro número: ");
	scanf("%d", &valor2);
	subtracao = valor1 - valor2;
	printf("A subtracao é: %d\n", subtracao);
	return 0;
}
