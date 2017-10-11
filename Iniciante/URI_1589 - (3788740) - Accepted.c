#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	long long int r1, r2;
	int vezes;
	scanf("%d", &vezes);
	while(vezes>0){
		scanf("%lld%lld", &r1,&r2);
		printf("%lld\n", r1+r2);
		vezes--;
	}
	
	return 0;
}