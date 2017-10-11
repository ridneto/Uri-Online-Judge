#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){
		
	int a, b, vaium, qntFoi;
	
	while(scanf("%d %d", &a, &b) && (a || b)){
		vaium = qntFoi = 0;
		while(a || b){
			if(vaium + b % 10 + a % 10 > 9){
				qntFoi++;
				vaium=1;
			}else
				vaium = 0;
			a /= 10;
			b /= 10;
		}
		if(!qntFoi)
			printf("No carry operation.\n");
		else if(qntFoi == 1)
			printf("1 carry operation.\n");
		else
			printf("%d carry operations.\n", qntFoi);
			
	}
	
	return 0;
}
