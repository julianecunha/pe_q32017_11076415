#include <stdio.h>

int Decimal_Binario(int n) 
{
	
	if ( n < 2 ) return n;
	return ( 10 * Decimal_Binario( n / 2 ) ) + n % 2;

}

int Binario_Decimal(int n)
{

	if (n < 1) return n;
	else return (n%10) + 2*Binario_Decimal(n/10);

}

void conversao_base(int valor, int y) 
{

	if (y == 1) {
	  printf("%d\n", Decimal_Binario(valor));
	}	else  {
	  printf("%d\n", Binario_Decimal(valor));
	}

}

int main() {

	int y;
	int valor;
	printf("Digite a opcao de conversao e valor a ser convertivo: ");
	scanf("%d %d", &valor, &y);
	conversao_base(valor, y);
	return 0;

}