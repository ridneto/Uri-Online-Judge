#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int soma3=1, tira5=60;
	
	while(tira5 >= 0){
		printf("I=%d J=%d\n", soma3, tira5);
		soma3 = soma3 + 3;
		tira5 = tira5 - 5;
	}	
	return 0;
}