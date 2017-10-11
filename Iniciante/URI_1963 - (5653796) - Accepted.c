#include <stdio.h>

int main(){
	double a, b;
	scanf("%lf %lf", &a, &b);
    printf("%.2lf%%\n", (((b-a)*100.00)/a));
	return 0;
}