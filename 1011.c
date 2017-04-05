#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int raio;
	double v;
	scanf("%d", &raio);
	v = (4 / 3.0) * 3.14159 * pow(raio,3);
	printf("VOLUME = %.3lf\n", v);
	return 0;
}