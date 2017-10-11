#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){	
	double a, g, ra, rg;
	
	scanf("%lf %lf %lf %lf", &a, &g, &ra, &rg);
	
	if((a == g && ra == rg) || (ra / (double)a <= (double)rg / g))
		printf("G\n");
	else
		printf("A\n");
	
	return 0;
}
