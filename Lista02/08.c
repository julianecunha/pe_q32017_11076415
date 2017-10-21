#include <stdio.h>

float valor_extra(float salario, int horas)
{

	float salario_dia = salario/20;
	float salario_hora_extra = salario_dia/8 + 40;
	float acrescimo = 0;

	if (horas <= 40) {
			acrescimo = salario_hora_extra * horas;
	}
	return acrescimo;

}

float descontos(float salario, int dias)
{

	float salario_dia = salario/20;
	float descontos = salario_dia * dias;

	return descontos;

}

int main() {

	char cargos[5][10] = {"Diretor", "Gerente", "Engenheiro", "Tecnico", "Operador"};
  float salario_base [5] = {10000, 8000, 5000, 3000, 2000};
	float acrescimos, desconto, salario;
	int faltas, horas;
	int n;
	
	printf("Digite o cargo o numero de horas extra e o numero de faltas: ");
	scanf("%d %d %d", &n, &faltas, &horas);
	acrescimos = valor_extra(salario_base[n-1], horas);
	desconto = descontos(salario_base[n-1], faltas);
	salario = salario_base[n-1] + acrescimos - desconto;
	printf("%.2f\n", salario);
	return 0;

}