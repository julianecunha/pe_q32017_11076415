#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto {
	
	float x;
	float y;
	float z;
	
} ponto;

float dist_pontos(struct ponto p1, struct ponto p2)
{
	float dist;
	
	dist = sqrt(((p1.x-p2.x)*(p1.x-p2.x))+((p1.y-p2.y)*(p1.y-p2.y))+((p1.z-p2.z)*(p1.z-p2.z)));
	
	return dist;
}


int main() {
	
	struct ponto p1;
	struct ponto p2;
	float dist;
	
	scanf("%f, %f, %f", &(p1.x), &(p1.y), &(p1.z));
	scanf("%f, %f, %f", &(p2.x), &(p2.y), &(p2.z));
	
	dist = dist_pontos(p1, p2);
	
	printf("%.2f\n", dist);
	
	return 0; 
}
