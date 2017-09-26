#include <stdio.h>

main() {
	int base;
	int potencia;
	int resultado = 1;
	int i;
	printf("Entre com a base: ");
	scanf("%d", &base);
	printf("Entre com a potencia: ");
	scanf("%d", &potencia);
	for (i = 1; i <= potencia; i++) {
	resultado *= base;
	}
	printf("%d\n", resultado);
	return 0;
}
