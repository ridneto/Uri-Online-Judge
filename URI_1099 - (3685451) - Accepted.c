#include <stdio.h>
#include <math.h>

int main() {
    
	int menor, maior, somaImpar, vezes, cont; 
	scanf("%d", &vezes);
	for(cont=1;cont<=vezes;cont++){
		
		scanf("%d%d",&menor,&maior);	
		somaImpar = 0;
		if(maior == menor){
			printf("%d\n", somaImpar);
		}else{
			if(maior < menor){
				somaImpar = maior;
				maior = menor;
				menor = somaImpar;
			}
			somaImpar = 0;
			if(menor%2!=0){
				menor++;
			}
			for(menor;menor<maior;menor++){
				if(menor%2!=0){
					somaImpar = somaImpar + menor;
				}
			}
		printf("%d\n", somaImpar);
		}
	}	
}