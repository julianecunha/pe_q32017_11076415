#include <stdio.h>

main() {
	double temperatura;
	double nova_temperatura;
	int opcao;
	printf("Entre com a temperatura que deseja converter: ");
	scanf("%lf", &temperatura);
	printf("Entre com a opcao de conversao: ");
	scanf("%d", &opcao);
	if (opcao == 1) {
		nova_temperatura = temperatura + 273.15;
	} else {
		nova_temperatura = temperatura - 273.15;
	}
	printf("%f\n", nova_temperatura);
	return 0;
}