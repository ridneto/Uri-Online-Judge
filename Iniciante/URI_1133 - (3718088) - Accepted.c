#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int maior, menor, aux;
	scanf("%d%d", &maior, &menor);
	if(menor>maior){
		aux = menor;
		menor = maior;
		maior = aux;
	}
	if((menor+1)<maior){
		do{
			menor++;
			if(menor%5 == 2 || menor%5 == 3)
				printf("%d\n", menor);
			if((menor+1)==maior)
				menor++;
		}while(menor<maior);
	}	
	return 0;
}