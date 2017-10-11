#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){ 	
	
	int maior=0, in;
	
	while(scanf("%d", &in) && in)
		if(maior < in)
			maior = in;
	
	printf("%d\n", maior);
	
	return 0;
}