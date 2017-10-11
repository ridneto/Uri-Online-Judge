#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int f, i;
	scanf("%d%d", &i,&f);
	
	if(f==i)
		printf("O JOGO DUROU 24 HORA(S)\n");
	else
		if(f>i)
			printf("O JOGO DUROU %d HORA(S)\n", f-i);
		else
			if((i<13 && f<13)||(i>12 && f>12))
				printf("O JOGO DUROU %d HORA(S)\n", i-f);
			else
				if(i>12)
					printf("O JOGO DUROU %d HORA(S)\n", (24-i)+f);
				else
					printf("O JOGO DUROU %d HORA(S)\n", (24-f)+i);
				
}