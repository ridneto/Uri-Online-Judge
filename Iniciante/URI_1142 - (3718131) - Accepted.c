#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int v, cont, a=1,b=2,c=3;
	scanf("%d", &v);
	for(cont=1;cont<=v;cont++){
		printf("%d %d %d PUM\n", a, b,c);
		a = a+4;
		b=b+4;
		c=c+4;
	}
	return 0;
}