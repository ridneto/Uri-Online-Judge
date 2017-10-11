#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int qnt, vezes, t=0, tr=0, ts=0, tc=0;
	float p;
	char tipo[1];
	
	scanf("%d", &vezes);
	//printf("%d", vezes);
	while(vezes>0){	
		scanf("%d %c",&qnt,tipo);
		t+= qnt;
		if(tipo[0] == 'C')
			tc+=qnt;
		else
			if(tipo[0] == 'R')
				tr+=qnt;
			else
				if(tipo[0] == 'S')
					ts+=qnt;
		vezes--;
	}
	printf("Total: %d cobaias\n", t);
	printf("Total de coelhos: %d\n", tc);
	printf("Total de ratos: %d\n", tr);
	printf("Total de sapos: %d\n", ts);
	p = (double)(tc * 100)/t;
	printf("Percentual de coelhos: %.2f %\n", p);
	p = (double)(tr * 100)/t;
	printf("Percentual de ratos: %.2f %\n", p);
	p = (double)(ts * 100)/t;
	printf("Percentual de sapos: %.2f %\n",p);
	return 0;
}