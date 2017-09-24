#include <stdio.h>

main() {
	int valor1;
	int valor2;
	int divisao;
	printf("Entre com um número: ");
	scanf("%d", &valor1);
	printf("Entre com outro número: ");
	scanf("%d", &valor2);
	divisao = valor1 / valor2;
	printf("A divisao é: %d\n", divisao);
	return 0;
}
