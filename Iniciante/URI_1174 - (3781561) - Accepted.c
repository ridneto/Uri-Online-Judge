#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	float A[100], a;
	int c;
	for(c=0;c<=99;c++){
		scanf("%f", &a);
		A[c] = a;
	}
	for(c=0;c<=99;c++)
		if(A[c]<=10)
			printf("A[%d] = %.1f\n", c,A[c]);
	return 0;
}