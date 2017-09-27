#include <stdio.h>

main() {
	int limite;
	int i;
	int soma = 0;
	printf("Entre com o limite do somatório: ");
	scanf("%d", &limite);
	for (i = 0; i <= limite; i++) {
		soma += i;
	}
	printf("soma de 1 a %d = %d\n", limite, soma);
	return 0;
}