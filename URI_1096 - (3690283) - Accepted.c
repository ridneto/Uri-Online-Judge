#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int soma2=1;
	
	while(soma2 <= 9){
		printf("I=%d J=7\n", soma2);
		printf("I=%d J=6\n", soma2);
		printf("I=%d J=5\n", soma2);
		soma2 = soma2 + 2;		
	}	
	return 0;
}