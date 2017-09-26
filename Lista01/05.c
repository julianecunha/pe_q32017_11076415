#include <stdio.h>

main() {
	int dividendo;
	int divisor;
	int divisao;
	printf("Entre com o dividendo: ");
	scanf("%d", &dividendo);
	printf("Entre com o divisor: ");
	scanf("%d", &divisor);
	divisao = dividendo / divisor;
	printf("%d\n", divisao);
	return 0;
}
