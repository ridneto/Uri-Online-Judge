#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int Euclides(int);

int main(){
	
	int id[10000], i, n, t=1, g;
	while(1){
		scanf("%d", &n);
		if(!n)
			break;
		for(i=0;i<n;i++)
			scanf("%d", &id[i]);
		
		for(i=0, g=0;!g;i++)
			if(id[i] == i+1)
				g = i+1;
		printf("Teste %d\n%d\n\n", t++, g);	
	}
	return 0;
}
