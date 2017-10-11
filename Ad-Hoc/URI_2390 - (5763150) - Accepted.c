#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define FIRST -1

int main(){
	int tempo=0, n, k, ant=FIRST;
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%d", &k);		
		if(ant != FIRST && k - ant < 10)
			tempo -= 10 - (k - ant);
		ant = k;			
		tempo += 10;	
	}
	
	printf("%d\n", tempo);
	
	return 0;
}
