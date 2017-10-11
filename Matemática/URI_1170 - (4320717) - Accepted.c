#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	double kg;
	int d=0, n, i;
	scanf("%d", &n);
	for(i=0;i<n;i++,d=0){		
		scanf("%lf", &kg);
		if(kg>1)
			while(kg > 1){
				d++;
				kg /=2.0;
			}
		printf("%d dias\n", d);	
	}
	return 0;
}