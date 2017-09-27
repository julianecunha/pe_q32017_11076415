#include <stdio.h>

main() {
	int valor;
	int opcao;
	int mult = 1;
	int novo_valor = 0;
	Passo:
	printf("Digite o valor a ser convertido: ");
	scanf("%d", &valor);
	printf("Digite a opcao de conversão: ");
	scanf("%d", &opcao);
	if (opcao == 1) {
		while (valor != 0) {
			novo_valor = novo_valor + ((valor%2) * mult);
			valor = valor / 2;
			mult = mult * 10;
		}
	} else if (opcao == 2) {
		while (valor != 0) {
			novo_valor = novo_valor + ((valor % 10) * mult);
			valor = valor / 10;
			mult = mult * 2;
		}
	} else {
		goto Passo;
	}
	printf("%d\n", novo_valor);
	return 0;
}