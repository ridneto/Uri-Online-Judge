#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 4

int main(){	
	
	int i, e, p, c, d;
	
	scanf("%d", &p);
	for(i=0, c=0, d=0, c; i<MAX; i++){
		scanf("%d", &e);
		if(p > e)
			d=1;
		if(p < e)
			c=1;
		p = e;
	}
		
	if(d + c == 2)
		printf("N\n");
	else
		if(d)
			printf("D\n");
		else
			printf("C\n");
		
	return 0;
}