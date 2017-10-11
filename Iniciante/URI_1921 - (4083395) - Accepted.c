#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){

	long long int n;
	scanf("%lld", &n);
	n = (n * (n-3))/2;
	printf("%lld\n", n);
	
	return 0;
}