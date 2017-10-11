#include <stdio.h>
#include <math.h>

int main(){
	
	int vezes, num, soma, cont, cont1;
	
	scanf("%i", &vezes);
	for(cont = 1;cont <= vezes; cont ++){
		soma = 0;
		scanf("%d", &num);
		for(cont1 = 1;cont1 < num; cont1 ++){
			if(num%cont1==0){
				soma = soma + cont1;
			}
		}
		if(soma == num){
			printf("%d eh perfeito\n", num);
		}else{
			printf("%d nao eh perfeito\n", num);
		}		
	}	
	return 0;
}