#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	double p3, p5, p2;
	scanf("%lf%lf%lf", &p2,&p3, &p5);
	
	p3 = (p3 * 3 + p5 * 5 + p2 * 2) / 10;
	printf("MEDIA = %.1lf\n", p3);	
	
	return 0;
}