#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int t, vezes, n, qnt,c;
	scanf("%d", &vezes);
	do{
		scanf("%d%d", &n, &qnt);
		t=0;
		for(c=1;c<=qnt;c++){
			if(n%2!=0)
				t = t+n;				
			else
				c--;			
			n++;
		}
		printf("%d\n", t);
		vezes--;
	}while(vezes>0);
	
	return 0;
}