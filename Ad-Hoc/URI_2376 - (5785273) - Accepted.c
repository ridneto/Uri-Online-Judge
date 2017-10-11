#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 8

int main(){
	
	int i, a, b, jogos[MAX], ind=0;
	
	for(i=0; i<16; i+=2, ind++){
		scanf("%d %d", &a, &b);
		if(a > b)
			jogos[ind] = i;
		else
			jogos[ind] = i+1;			
	}
	
	for(i=0, ind=0; i<MAX; i+=2, ind++){
		scanf("%d %d", &a, &b);
		if(a > b)
			jogos[ind] = jogos[i];
		else
			jogos[ind] = jogos[i+1];
	}
	
	for(i=0, ind=0; i<4; i+=2, ind++){
		scanf("%d %d", &a, &b);
		if(a > b)
			jogos[ind] = jogos[i];
		else
			jogos[ind] = jogos[i+1];
	}		
	
	scanf("%d %d", &a, &b);
	
	if(b > a)
		jogos[0] = jogos[1];
	
	printf("%c\n", jogos[0] + 'A');
	
	return 0;
}
