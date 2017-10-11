#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	double n1, n2;
	int res;
	do{
		do{
			scanf("%lf", &n1);
			if(n1<0 || n1>10)
				printf("nota invalida\n");
		}while(n1<0 || n1>10);
		
		do{
			scanf("%lf", &n2);
			if(n2<0 || n2>10)
				printf("nota invalida\n");
		}while(n2<0 || n2>10);
		
		printf("media = %.2lf\n", (n1+n2)/2);
		do{
			printf("novo calculo (1-sim 2-nao)\n");
			scanf("%d", &res);
		}while(res!=1&&res!=2);
	}while(res!=2);
	
	return 0;
}