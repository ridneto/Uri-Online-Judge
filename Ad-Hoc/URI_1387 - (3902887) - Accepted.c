#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){

	int x, y;
	
	while(scanf("%d %d", &x, &y) && (x != 0 || y != 0))
		printf("%d\n", x + y);
	
	return 0;
}