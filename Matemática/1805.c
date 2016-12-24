#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	long long int a, b;
	
	scanf("%lld %lld", &a, &b);
	
	
	a = (a + b) * (b-a+1)/2;	
	printf("%lld\n", a);
	
	return 0;
}