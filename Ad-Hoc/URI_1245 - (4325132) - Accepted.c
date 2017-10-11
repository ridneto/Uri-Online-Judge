#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}

int main (void){
	
	int c, n, esq[35], dir[35], t, pares;
	char lad[1];
	
	while(scanf("%d", &n) != EOF){
		for(c=0;c<=30;c++){
			esq[c] = 0;
			dir[c] = 0;
		}
		while(n > 0){
			scanf("%d %c", &t, &lad[0]);
			if(lad[0] == 'D')
				dir[t-30]++;
			else
				esq[t-30]++;
			n--;
		}
		
		for(c=0,pares=0;c<=30;c++)
			if(esq[c] > 0 && dir[c] > 0){
				while(esq[c] != 0 && dir[c] != 0){
					pares++;
					esq[c]--;
					dir[c]--;
				}
			}
		printf("%d\n", pares);	
		
	}
	
	
	return 0;
}

