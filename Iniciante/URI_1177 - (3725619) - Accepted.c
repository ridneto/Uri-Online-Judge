#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int vetor[1000], n, c=0, i=0;
	scanf("%d", &n);	
	while(i<1000){
		if(c<n){
			vetor[i] = c;
			c++;
		}else{
			vetor[i] = 0;
			c=1;
		}
		
		i++;
	}
	for(c=0;c<1000;c++)
		printf("N[%d] = %d\n", c, vetor[c]);
	
	return 0;
}