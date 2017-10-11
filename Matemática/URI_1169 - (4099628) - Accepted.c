#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n, x;
	unsigned long long int k;
	
	scanf("%d", &n);
	
	while(n>0){
		scanf("%d", &x);
		k = ((pow(2,x)-1)/12) / 1000;
		printf("%llu kg\n", k);
		n--;
	}
	
	return 0;
}