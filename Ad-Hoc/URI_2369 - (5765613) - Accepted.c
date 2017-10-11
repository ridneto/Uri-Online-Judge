#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
		
	int out=7, valor, aux;

	scanf("%d", &valor);
	
	aux = valor - 100;
		
	if(aux > 0){
		valor -= aux;
		out += aux * 5;
	}
	
	aux = valor - 30;
	
	if(aux > 0){		
		valor -= aux;
		out += aux * 2;
	}
	
	aux = valor - 10;
	
	if(aux > 0)
		out += aux;
	
	printf("%d\n", out);
	
	return 0;
}
