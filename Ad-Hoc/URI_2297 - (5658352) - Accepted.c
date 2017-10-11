#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){	
	int r, v=0, ib, ia;
	long int a, b;
	while(scanf("%d", &r) && r){
		a = b = 0;
		while(r--){
			scanf("%d %d", &ia, &ib);
			b+=ib;
			a+=ia;
		}
		printf("Teste %d\n", ++v);
		if(a > b)
			printf("Aldo\n\n");
		else
			printf("Beto\n\n");
	}
	
	return 0;
}
