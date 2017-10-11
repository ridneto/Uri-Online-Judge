#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	float a, b, c, r;
	scanf("%f%f%f", &a,&b,&c);
	
	if(abs(b-c) < a && a < b +c && abs(a - c) < b && b < a + c && abs(a - b) < c && c < a+ b){
		r = a+b+c;
		printf("Perimetro = %.1f\n", r);
	}else{
		r = ((a+b)*c)/2;
		printf("Area = %.1f\n", r);
	}
	return 0;
}