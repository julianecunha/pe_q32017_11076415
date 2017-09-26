#include <stdio.h>

main() {
	int minuendo;
	int subtraendo;
	int subtracao;
	printf("Entre com o minuendo: ");
	scanf("%d", &minuendo);
	printf("Entre com o subtraendo: ");
	scanf("%d", &subtraendo);
	subtracao = minuendo - subtraendo;
	printf("%d\n", subtracao);
	return 0;
}
