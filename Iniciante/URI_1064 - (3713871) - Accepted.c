#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float cont, n, npos=0, soma = 0;
	for(cont = 1; cont <=6;cont++){
		scanf("%f", &n);
		if(n>0){
			npos++;		
			soma = soma + n;			
		}					
	}
	printf("%.0f valores positivos\n", npos);
	soma = soma/npos;
	printf("%.1f\n", soma);
	
	return 0;
}