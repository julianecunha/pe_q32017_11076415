#include <stdio.h>

main() {
	int valor1;
	int valor2;
	int multiplicacao;
	printf("Entre com um número: ");
	scanf("%d", &valor1);
	printf("Entre com outro número: ");
	scanf("%d", &valor2);
	multiplicacao = valor1 * valor2;
	printf("A multiplicacao é: %d\n", multiplicacao);
	return 0;
}
