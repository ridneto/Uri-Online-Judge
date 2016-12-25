#include <stdio.h>
#include <math.h>
 
int main() {
 
    double A, B, C, R;
	scanf("%lf%lf%lf",&A,&B,&C);
	
	R = (A * C)/2;
	printf("TRIANGULO: %.3lf\n", R);
	R = 3.14159 * pow(C, 2); 
	printf("CIRCULO: %.3lf\n", R);
	R = (C * (A + B)) / 2; 
	printf("TRAPEZIO: %.3lf\n", R);
	R = pow(B,2); 
	printf("QUADRADO: %.3lf\n", R);
	R = A * B; 
	printf("RETANGULO: %.3lf\n", R);
    return 0;
}