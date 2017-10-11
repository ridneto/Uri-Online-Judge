#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){	
	int lim, x, y;
	char p;
	
	scanf("%d", &lim);
	scanf("%d %c %d", &x, &p, &y);
	
	if(p == '+')
		if(x + y <= lim)
			printf("OK\n");
		else
			printf("OVERFLOW\n");
	else
		if(x * y <= lim)
			printf("OK\n");
		else
			printf("OVERFLOW\n");
	
	return 0;
}
