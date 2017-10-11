#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int menor, maior, c;
	scanf("%d%d", &menor, &maior);
	if(maior < menor){
		c = maior;
		maior = menor;
		menor = c;		
	}
	if(maior%menor==0){
		printf("Sao Multiplos\n");
	}else{
		printf("Nao sao Multiplos\n");
	}
	return;
}