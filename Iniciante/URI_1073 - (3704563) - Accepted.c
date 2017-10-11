#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, i=2;
	unsigned int r;
	scanf("%d", &n);
	while(i<=n){
		if(i%2==0){
			r = i * i;
			printf("%d^2 = %u\n",i, r);
		}
		i++;
	}
	return 0;
}