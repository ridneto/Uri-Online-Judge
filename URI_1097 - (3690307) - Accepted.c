#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int soma2=1, j7=7, j6=6, j5=5;
	
	while(soma2 <= 9){
		printf("I=%d J=%d\n", soma2,j7);
		printf("I=%d J=%d\n", soma2,j6);
		printf("I=%d J=%d\n", soma2,j5);
		soma2 = soma2 + 2;
		j5 = j5 + 2;
		j6 = j6 + 2;
		j7 = j7 + 2;
		
	}	
	return 0;
}