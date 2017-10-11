#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int a, b;
	while(scanf("%d %d", &a, &b) != EOF)
		printf("%d\n", a * b * 2);
	return 0;
}