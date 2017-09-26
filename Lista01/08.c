#include <stdio.h>

main() {
	int fib_0 = 0;
	int fib_1 = 1;
	int next;
	int termo;
	int n;
	printf("Entre com a posição desejada: ");
	scanf("%d", &termo);
	for ( n = 0 ; n <= termo ; n++ ) {
	if ( n <= 1 ) {
		next = n;
	} else {
		next = fib_0 + fib_1;
		fib_0 = fib_1;
		fib_1 = next;
	}
	printf("%d\n", next);
	}
	return 0;
}