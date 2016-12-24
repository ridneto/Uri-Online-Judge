#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

long long int fatorial(int num){
	long long int n;
	int c;
	
	for(c=num, n=1;c>0;c--)
		n *= c;
	return n;
}

int main() {
	
	long long int m, n;
	
	while(scanf("%d %d", &m, &n) != EOF){
		printf("%lld\n", fatorial(m)+ fatorial(n));
	}
	
	return 0;
}