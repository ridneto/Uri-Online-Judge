#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int x, y, c, foi=1;
	scanf("%d%d", &x,&y);
	
	for(c = 1; c <= y; c++){
		if(foi!=x){
			foi++;
			printf("%d ", c);			
		}else{
			printf("%d\n", c);	
			foi=1;
		}
	}
	
	return 0;
}