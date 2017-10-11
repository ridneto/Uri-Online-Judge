#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float l, n1=0, n2=0;
	do{
		scanf("%f", &l);
		if(l<0 || l>10)
			printf("nota invalida\n");
		else{
			if(n1==0)
				n1 = l;
			else
				n2 = l;			
		}
	}while(n1 == 0 || n2 == 0);
	l = (n1 + n2)/2;
	printf("media = %.2f\n", l);
	
	return 0;
}