#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX_IN 100000
#define MAX_BUSCA 101

int main(){

	int n, q, i, j;
	char in[MAX_IN], busca[MAX_BUSCA];	
	
	scanf("%d", &n);
	
	while(n--){
		scanf("%s", in);		
		scanf("%d", &q);
		while(q--){
			scanf("%s", busca);
			for(i=0, j=0; in[i] >= 65 && busca[j] >= 65;i++)
				if(in[i] == busca[j])
					j++;		
			if(busca[j] < 65)
				printf("Yes\n");
			else
				printf("No\n");
		}
	}
	
	return 0;
}
