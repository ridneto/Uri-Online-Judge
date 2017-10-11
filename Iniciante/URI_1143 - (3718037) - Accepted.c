#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, cont;
	scanf("%d", &n);
	for(cont=1;cont <= n;cont++){
		printf("%d %d %d\n", cont, cont * cont, cont * cont * cont);
	}
	
	return 0;
}