#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int menor, maior, cont, soma;
	scanf("%d%d", &menor,&maior);
	while(maior>0&&menor>0){		
		if(menor>maior){
			soma=maior;
			maior=menor;
			menor=soma;
		}
		soma=0;
		for(cont=menor;cont<=maior;cont++){
			soma = soma+cont;
			if(cont==maior)			
				printf("%d Sum=%d\n",cont,soma);
	    	else
				printf("%d ", cont);	
		}
		scanf("%d%d", &maior,&menor);
	}
	
	return 0;
}