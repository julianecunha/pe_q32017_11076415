#include <stdio.h>
#include <math.h>

int raizes(double a, double b, double c)
{

	double delta = (b*b)-(4*a*c);
	float x1, x2;

	if (delta == 0) {
		x1 = (-1*b)/(2*a);
		printf("%.2f\n", x1);
	} else if (delta < 0) {
		x1 = (-1*b)/(2*a);
		x2 = (sqrt(-1*delta))/(2*a);
		printf("%.2f - %.2fi %.2f + %.2f\n", x1, x2, x1, x2);
	} else {
		x1 = ((-1*b)-sqrt(delta))/(2*a);
		x2 = ((-1*b)+sqrt(delta))/(2*a);
		printf("%.2f %.2f", x1, x2);
	}
	return 0;

}

int main() {

	double a, b, c;

	printf("Digite os coeficientes: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	raizes(a, b, c);
	return 0;

}