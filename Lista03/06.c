#include <stdio.h>
#include <stdlib.h>

int* get_vetor(int n)
{
	int i;
	int *v;
	
	v = malloc(n*sizeof(int));
	
	for (i=0; i<n; i++) {
		scanf("%d", &v[i]);
	}
	
	return v;
}

int cmpfunc(const void *a, const void *b) 
{
	return (*(int*)a-*(int*)b);
}

float mediana(int *v, int n)
{
	int i = n/2;
	
	if (n%2) return v[i];
	else return (v[i-1]+v[i])/2.0;
}


int main()
{
	int n;
	int *v;
	
	scanf("%d", &n);
	v = get_vetor(n);
	
	qsort(v, n, sizeof(int), cmpfunc);
	printf("%.2f\n", mediana(v, n));
	
	return 0;
}