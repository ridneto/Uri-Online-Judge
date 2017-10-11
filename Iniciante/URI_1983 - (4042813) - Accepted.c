#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n, ra, mra;
	float in, mn=0;
	scanf("%d", &n);
	while(n>0){
		scanf("%d %f", &ra, &in);
		if(in >= 8 && in > mn){
			mra = ra;
			mn = in;
		}
		n--;
	}
	if(mn == 0)
		printf("Minimum note not reached\n");
	else
		printf("%d\n", mra);
	return 0;
}