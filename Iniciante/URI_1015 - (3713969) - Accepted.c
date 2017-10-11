#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float x1, y1, y2, x2;
	scanf("%f%f%f%f", &x1, &y1, &x2, &y2);
	x1 = sqrt(pow((x2-x1),2) + pow((y2 - y1), 2));
	printf("%.4f\n", x1);
	
	return 0;
}
