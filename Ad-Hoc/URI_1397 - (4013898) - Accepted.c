#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){

	int jogadas, p1, p2, f1, f2, i;
	
	while(scanf("%d", &jogadas) && jogadas != 0){
		p1=0;
		p2=0;
		
		for(i=1;i<=jogadas;i++){
			scanf("%d%d", &f1,&f2);
			if(f1>f2)
				p1++;
			else
				if(f2>f1)
					p2++;
		}			
		printf("%d %d\n", p1,p2);
	}
	
	return 0;
}
