#include <stdio.h>

main() {
	int fator1;
	int fator2;
	int multiplicacao;
	printf("Entre com um fator: ");
	scanf("%d", &fator1);
	printf("Entre com outro fator: ");
	scanf("%d", &fator2);
	multiplicacao = fator1 * fator2;
	printf("A multiplicacao é: %d\n", multiplicacao);
	return 0;
}
