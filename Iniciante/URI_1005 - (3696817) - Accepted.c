#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	double p35, p75;
	scanf("%lf%lf", &p35, &p75);
	
	p35 = (p35 * 3.5 + p75 * 7.5) / 11.0;
	printf("MEDIA = %.5lf\n", p35);	
	
	return 0;
}