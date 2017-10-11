#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){ 	
	
	int v, vi, n;
	
	scanf("%d %d", &v, &n);
	
	while(n--){
		scanf("%d", &vi);
		v += vi;
		if(v > 100)
			v = 100;
		if(v < 0)
			v = 0;
	}
	
	printf("%d\n", v);
	
	return 0;
}