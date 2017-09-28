#include <stdio.h>

main() {
	char cargos[5][10] = {"Diretor", "Gerente", "Engenheiro", "Tecnico", "Operador"};
  int salario_base [5] = {10000, 8000, 5000, 3000, 2000};
	double salario_dia[5];
	double hora_extra[5];
	int cargo;
	int faltas;
	int num_hora_extra;
	int descontos;
	double acrescimos;
	int salario;
	int i;
	for (i = 0; i < 5; i++) {
		salario_dia[i] = salario_base[i] / 20;
	}
	for (i = 0; i < 5; i++) {
		hora_extra[i] = (salario_dia[i] / 8) + 40;
	}
	printf("Digite o id do cargo, numero de faltas e numero de horas extras: ");
	scanf("%d %d %d", &cargo, &faltas, &num_hora_extra);
	descontos = faltas * salario_dia[cargo - 1];
	acrescimos = num_hora_extra * hora_extra[cargo - 1];
	salario = salario_base[cargo - 1] - descontos + acrescimos;
	printf("cargo: %s\n", cargos[cargo - 1]);
	printf("# de faltas: %d\n", faltas);
	printf("# horas-extra: %d\n", num_hora_extra);
	printf("descontos: %d\n", descontos);
	printf("acrescimos: %lf\n", acrescimos);
	printf("salario: %d\n", salario);
	return 0;
}