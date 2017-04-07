#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, c =1, r;
	scanf("%d", &n);
	while(c<=10){		
		r = n * c;
		printf("%d x %d = %d\n", c,n,r);
		c++;		
	}	
	
	return 0;
}