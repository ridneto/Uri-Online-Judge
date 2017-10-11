#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int vezes, ano;
	scanf("%d", &vezes);
	if(vezes>0)
		do{
			scanf("%d", &ano);
			
			if(ano<=2014)
				printf("%d D.C.\n", 2015-ano);
			else
				printf("%d A.C.\n", ano-2014);
			vezes--;
		}while(vezes>=1);
	
	return 0;
}