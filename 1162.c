#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define MAX 50

int main (){	

	int troca, vetor[MAX], c, n, l, aux, mud;
	
	scanf("%d", &n);
	while(n>0){
		scanf("%d", &l);
		for(c=0;c<l;c++)
			scanf("%d ", &vetor[c]);
		mud=0;
		do{	
			troca = 0;
			c = 0;
			while (c < l - 1){	
				if (vetor[c] > vetor[c + 1]){	
					aux = vetor[c];
					vetor[c] = vetor[c + 1];
					vetor[c + 1] = aux;
					mud++;
					troca = 1;
				}			
				c++;
			}
		}while (troca == 1);
		printf("Optimal train swapping takes %d swaps.\n", mud);
		n--;
	}	
	return 0;
}