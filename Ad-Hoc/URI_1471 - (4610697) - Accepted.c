#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int id[10000], r, f, c, n;
	
	while(scanf("%d %d", &f, &r) != EOF){
		if(r==f){
			printf("*\n");
			for(c=0;c<r;c++){
				scanf("%d", &n);	
				id[n-1]++;
			}
		}else{
			for(c=0;c<f;c++)
				id[c] = 0;
			for(c=0;c<r;c++){
				scanf("%d", &n);	
				id[n-1]++;
			}
			for(c=0;c<f;c++)
				if(id[c] == 0)
					printf("%d ", c+1);
			printf("\n");
		}		
	}
	
	return 0;
}