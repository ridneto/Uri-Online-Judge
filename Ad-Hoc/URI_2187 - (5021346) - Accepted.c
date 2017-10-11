#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Euclides(int);

int main(){
	
	int notas[3], valor, i, t=0;
	while(1){
		scanf("%d", &valor);
		if(!valor)
			break;
		for(i=0;i<3;i++)
			notas[i] = 0;
		notas[0] = valor/50;
		valor -= notas[0] * 50;
		notas[1] = valor/10;
		valor -= notas[1] * 10;
		notas[2] = valor/5;
		valor -= notas[2] * 5;
		printf("Teste %d\n", ++t);
		printf("%d %d %d %d\n\n",notas[0], notas[1], notas[2], valor);
	}
	return 0;
}
