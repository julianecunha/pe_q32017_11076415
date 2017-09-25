#include <stdio.h>

main() {
	int valor1;
	int fatorial = 1;
	int i;
	printf("Entre com um número: ");
	scanf("%d", &valor1);
	for (i = valor1; i > 0; i--) {
	fatorial = fatorial * i;
	}
	printf("%d\n", fatorial);
	return 0;
}
