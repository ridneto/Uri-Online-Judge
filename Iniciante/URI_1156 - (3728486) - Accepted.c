#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	double s=1;
	int pd=3, sd=2;
	do{
		s = s + (double)pd/sd;
		pd = pd + 2;
		sd = sd * 2;		
	}while(pd<=39);
	printf("%.2lf\n", s);
}