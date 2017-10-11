#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {	
	
	int n, soma, m, ml, a;
	while(scanf("%d %d", &n, &m) != EOF){
		for(ml=1,soma=0;n>0;n--){
			a = (m % (10 * ml))/(1 * ml);
			soma += a;
			ml *= 10;
		}
		if(soma%3==0)
			printf("%d sim\n", soma);
		else
			printf("%d nao\n", soma);
	}
	
	return 0;
}