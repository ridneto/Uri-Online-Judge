#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, par = 0, impar = 0, pos = 0, neg= 0, cont;

	for(cont = 1;cont <= 5;cont ++){
		scanf("%d", &n);
		if(n == 0){
			par++;
		}else{
			if(n < 0){
				neg++;
				if(n%2==0){
					par = par + 1;
				}else{
					impar = impar + 1;
				}
			}else{
				pos++;
				if(n%2==0){
					par = par + 1;
				}else{
					impar = impar + 1;
				}
			}			
		}
	}	
	printf("%d valor(es) par(es)\n", par);
	printf("%d valor(es) impar(es)\n", impar);
	printf("%d valor(es) positivo(s)\n", pos);
	printf("%d valor(es) negativo(s)\n", neg);	
	return 0;
}