#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int vezes, c;
	scanf("%d", &vezes);
	for(c=1;c<=vezes;c++)
		if(c==vezes)
			printf("Ho!\n");
		else
			printf("Ho ");
	return 0;
}