#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	double s=0;
	int c;
	for(c=1;c<=100;c++){
		s = s + (double)1/c;
	}
	printf("%.2lf\n", s);
}