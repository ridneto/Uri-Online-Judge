#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int n, sat, menor, e;
	
	scanf("%d %d", &n, &sat);
	menor = sat;
	
	while(n--){
		scanf("%d", &e);
		sat += e;
		if(sat < menor)
			menor = sat;
	}
	
	printf("%d\n", menor);
	
	return 0;
}
