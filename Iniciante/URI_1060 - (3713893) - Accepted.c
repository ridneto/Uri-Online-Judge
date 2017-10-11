#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int i=0, t = 0;
	float n;
	while(i<=5){
		scanf("%f", &n);
		if(n>0){
			t++;
		}
		i++;
	}
	printf("%d valores positivos\n", t);
	
	return 0;
}