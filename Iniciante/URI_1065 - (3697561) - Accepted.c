#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int n, p=0, cont=1;
	while(cont <=5){
		scanf("%d", &n);
		if(n%2==0){
			p++;
		}
		cont++;
	}
	printf("%d valores pares\n", p);
	return 0;
}