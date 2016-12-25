#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int v, t;
	double g;
	
	scanf("%d%d",&t,&v);
	v = t * v;
	g = v / 12.0;
	printf("%.3lf\n", g);
	
	return 0;
}