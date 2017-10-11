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
	
	int n, p, m=21, i=0, vf;
	scanf("%d", &n);
	while(n>0){
		i++;
		scanf("%d", &p);
		if(p<m){
			vf = i;
			m = p;
		}
		//printf("%d\n", p);
		n--;
	}
	printf("%d\n", vf);
	return 0;
}