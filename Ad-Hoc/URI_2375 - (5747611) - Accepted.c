#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 50

int main(){
	
	int n, a, b, c;
	
	scanf("%d %d %d %d", &n, &a, &b, &c);
	
	if(n <= a && n <= b && n <= c)
		printf("S\n");
	else
		printf("N\n");
	
	return 0;
}
