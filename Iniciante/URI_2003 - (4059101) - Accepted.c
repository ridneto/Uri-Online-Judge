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
	
	int h, m, a;
	
	while(scanf("%d:%d", &h, &m) != EOF){
		a=0;
		if((h==7 && m==0)||h<7)
			a=0;
		else{
			h = h - 7;
			a = m + 60 * h;
		}
		printf("Atraso maximo: %d\n", a);	
	}
	
		
	return 0;
}