#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	int n;
	while(scanf("%d",&n) && n != 0)		
		printf("%d\n",(n*(n+1) * (2*n+1))/6);
	return 0;
}

