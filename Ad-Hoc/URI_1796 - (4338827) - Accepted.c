#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <limits.h>
#include <time.h>

int main (){	
	
	int q, i, s=0, n=0;
	
	scanf("%d", &q);
	while(q>0){
		scanf("%d ", &i);
		if(i == 0)
			s++;
		else
			n++;
		q--;
	}
	if(s > n)
		printf("Y\n");
	else
		printf("N\n");
	return 0;
}