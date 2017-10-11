#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int x, z, s=0, n=0;
	
	scanf("%d", &x);
	do{
		scanf("%d", &z);
	}while(z<=x);
	do{
		s = s + x;
		x++;
		n++;
	}while(s<z);
	
	printf("%d\n", n);
	
}