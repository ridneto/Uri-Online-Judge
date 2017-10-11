#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main(){
	
	long int tam, dist, custokm, custoped;
	
	scanf("%ld %ld %ld %ld", &tam, &dist, &custokm, &custoped);
	
	printf("%ld\n", (((tam / dist)* custoped)) + (tam * custokm));
	
	return 0;
}
