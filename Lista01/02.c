#include <stdio.h>

main() {
	int parcela1;
	int parcela2;
	int soma;
	printf("Entre com uma parcela: ");
	scanf("%d", &parcela1);
	printf("Entre com a outra parcela: ");
	scanf("%d", &parcela2);
	soma = parcela1 + parcela2;
	printf("%d\n", soma);
	return 0;
}
