#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, cont;
	scanf("%d", &n);
	for(cont = 1; cont <=n;cont++){
		if(cont%2!=0){
			printf("%d\n", cont);
		}
	}
	return 0;
}