#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	double vetor[100], numero;
	int c;
	scanf("%lf", &numero);
	vetor[0] = numero;
	for(c=1;c<=99;c++){
		numero = numero / 2.0;
		vetor[c] = numero;
	}
	for(c=0;c<=99;c++)
		printf("N[%d] = %.4lf\n", c,vetor[c]);
	return 0;
}