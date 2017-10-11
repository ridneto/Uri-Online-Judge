#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int numero, atualvalor, umantes = 1, doisantes=1, cont;
	scanf("%d",&numero);
	if(numero == 1)
		printf("0\n");
	else
		if(numero == 2)
			printf("0 1\n");
		else
			if(numero == 3)
				printf("0 1 1\n");
			else{
				printf("0 1 1 ");
				for(cont=4;cont<=numero;cont++){
					atualvalor = umantes + doisantes;
					if(cont==numero)
					    printf("%d\n", atualvalor);
					else
				    	printf("%d ", atualvalor);
					doisantes = umantes;
					umantes = atualvalor;
				
				}
			}	
	return 0;
}