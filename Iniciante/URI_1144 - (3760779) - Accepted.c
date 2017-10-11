#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int numero, cont, quadrada, cubo;
	scanf("%d", &numero);
	for(cont = 1; cont <= numero; cont++){
		quadrada = cont * cont;
		cubo = cont * cont * cont;
		printf("%d %d %d\n",cont, quadrada, cubo);
		printf("%d %d %d\n",cont, quadrada+1, cubo+1);
	}	
	return 0;
}