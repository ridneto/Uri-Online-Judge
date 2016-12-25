#include <stdio.h>
#include <math.h>
 
int main() {
  
    float B, R;
	int A;
	scanf("%i", &A);
	scanf("%f",&B);
	
	R = A / B;
	printf("%.3f km/l\n", R);
    return 0;
}