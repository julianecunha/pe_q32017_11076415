#include <stdio.h>
#include <math.h>

void Kelvin_Celsius(float temperature) {
  
	printf("%.2f C\n", (temperature-273.15));
  
}

void Celsius_Kelvin(float temperature) {
  
	printf("%.2f K\n", (temperature+273.15));
  
}

void Celsius_Fahrenheit(float temperature) {
  
  printf("%.2f F\n", ((9*(temperature)/5)+32));
  
}

void Fahrenheit_Celsius(float temperature) {
  
	printf("%.2f C\n", (5*(temperature-32)/9));
  
}

void Fahrenheit_Kelvin(float temperature) {
  
	printf("%.2f K\n", (((5/9)*(temperature-32)+273.15)));
  
}

void Kelvin_Fahrenheit(float temperature) {
  
	printf("%.2f F\n", (((9/5)*temperature)+32-273.15));
  
}

void temperatura(int y, int z, float valor)
{

	if (y == 1) {
			if (z == 2) Celsius_Fahrenheit(valor);
			else Celsius_Kelvin(valor);
	} else if (y == 2) {
			if (z == 1) Fahrenheit_Celsius(valor);
			else Fahrenheit_Kelvin(valor);
	} else {
			if (z == 1) Kelvin_Celsius(valor);
			else Kelvin_Fahrenheit(valor);
	}

}

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

void conversao_base(int y, int z, float valor) 
{

	int num = floor(valor);
	if (y == 1) {
	  printf("%d\n", Decimal_Binario(num));
	}	else  {
	  printf("%d\n", Binario_Decimal(num));
	}

}

int tipo_conversao(int x, int y, int z, float valor)
{

	if (x == 1) temperatura(y, z, valor);
	else conversao_base(y, z, valor); 
	return 0;

}

int main() {

	int x, y, z;
	float valor;
	printf("Digite a opcao de conversao, unidade de saida, unidade de entrada, e valor a ser convertivo: ");
	scanf("%d %d %d %f", &x, &y, &z, &valor);
	tipo_conversao(x, y, z, valor);
	return 0;

}