#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int alc1 = 0, gas2 =0, die3 = 0, n=0;
	while(n!=4){
		scanf("%d", &n);
		while(n<1 || n>4){
			scanf("%d", &n);
		}
		if(n == 1){
			alc1++;
		}else{
			if(n == 2){
				gas2++;
			}else{
				if(n == 3){
					die3++;
				}
			}
		}	
	}
	printf("MUITO OBRIGADO\n");
	printf("Alcool: %d\n", alc1);
	printf("Gasolina: %d\n", gas2);
	printf("Diesel: %d\n", die3);
	return 0;
}