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
	
	int n, m1, m2;
	scanf("%d", &n);
	while(n>0){
		scanf("%d %d", &m1, &m2);
		printf("%d cm2\n", (m1*m2)/2);
		n--;
	}
	return 0;
}