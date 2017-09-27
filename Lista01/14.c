#include <stdio.h>

main() {
	int valor;
	int i;
	double soma = 0;
	double media;
	for (i = 0; i < 10; i++) {
		scanf("%d", &valor);
		soma += valor;
	}
	media = soma/10;
	printf("soma = %lf\nmedia = %lf\n", soma, media);
	return 0;
}