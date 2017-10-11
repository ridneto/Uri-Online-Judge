#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int i, n=0;
	float t=0;
	do{
		scanf("%d", &i);
		if(i>0){
			t = t + i;
			n++;
		}
	}while(i>0);
	
	t = t/n;
	printf("%.2f\n", t);
	
	return 0;
}