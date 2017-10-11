#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {

	int maior, menor, soma;
	scanf("%d%d", &maior, &menor);
	if(menor > maior){
		soma = menor;
		menor = maior;
		maior = soma;
	}
	soma = 0;
	while(menor <= maior){
		if(menor % 13 != 0){
			soma = soma + menor;
		}
		menor ++;
	}	
	printf("%d\n", soma);
	return 0;
}