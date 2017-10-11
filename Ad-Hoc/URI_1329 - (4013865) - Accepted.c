#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){

	int jogadas, m, j, r, i; // m = 0, j =  1
	
	while(scanf("%d", &jogadas) && jogadas != 0){
		m=0;
		j=0;
		
		for(i=1;i<=jogadas;i++){
			scanf("%d ", &r);
			if(r==0)
				m++;
			else
				j++;
		}			
		printf("Mary won %d times and John won %d times\n", m,j);
	}
	
	return 0;
}