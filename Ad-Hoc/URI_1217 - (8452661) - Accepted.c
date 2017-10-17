#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_DIAS 365
#define MAX_FRUTAS 100000

int main(){

	int frutasDia[MAX_DIAS], n, i, j, totalFrutas;
	double total, v;
	char input[MAX_FRUTAS];

	scanf("%d", &n);
	
	memset(frutasDia, 0, MAX_DIAS);

	for(i=0, total=0, totalFrutas=0; i<n; i++){
		scanf("%lf ", &v);
		total += v;
		
		fgets(input, MAX_FRUTAS, stdin);
		
		for(j=0, frutasDia[i] = 1; input[j] >= 32; j++)
			if(input[j] == 32)
				frutasDia[i]++;
				
		totalFrutas += frutasDia[i];
	}
	
	for(i=0; i<n; i++)
		printf("day %d: %d kg\n", i+1, frutasDia[i]);
		
	printf("%.2lf kg by day\n", (double)totalFrutas / n);
	printf("R$ %.2lf by day\n", total / n);

	return 0;
}
