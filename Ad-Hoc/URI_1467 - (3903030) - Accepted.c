#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){

	int a, b, c;
	
	while(scanf("%d %d %d", &a, &b, &c) != EOF)
		if(a == b && b == c)
			printf("*\n");
		else
			if(a == b)
				printf("C\n");
			else
				if(a == c)
					printf("B\n");
				else
					printf("A\n");
	
	return 0;
}