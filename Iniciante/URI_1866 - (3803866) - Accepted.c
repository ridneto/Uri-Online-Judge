#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int vezes, c, cc;
	scanf("%d", &c);
	for(cc =1;cc<=c;cc++){
		scanf("%d", &vezes);
		if(vezes%2==0)
			printf("0\n");
		else
			printf("1\n");
	}
	return 0;
}