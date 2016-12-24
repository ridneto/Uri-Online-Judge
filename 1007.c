#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b, c, d;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	a = (a * b - c * d);
	printf("DIFERENCA = %d\n", a);
	return 0;
}