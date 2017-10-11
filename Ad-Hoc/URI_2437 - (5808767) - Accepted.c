#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int xi, yi, xf, yf, a;
	
	scanf("%d %d %d %d", &xi, &yi, &xf, &yf);
	
	if(xi > xf)
		a = xi - xf;
	else
		a = xf - xi;
	
	if(yi > yf)
		a += yi - yf;
	else
		a += yf - yi;
	
	printf("%d\n", a);
	
	return 0;
}
