#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n, c, s=1;
	scanf("%d", &n);
	for(c=0;c<n;c++)
		s = s * (n-c);
	printf("%d\n", s);	
}