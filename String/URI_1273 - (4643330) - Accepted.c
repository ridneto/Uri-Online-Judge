#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){
	
	int n, c, t,v=0, b;	
	char matriz[50][51];
	
	while(scanf("%d", &n) && n != 0){
		v++;
		t=0;
		for(c=0;c<n;c++){
			scanf("%s", matriz[c]);
			if(strlen(matriz[c]) > t)
				t=strlen(matriz[c]);
		}
		if(v>1)
			printf("\n");
		for(c=0;c<n;c++){
			for(b=strlen(matriz[c]);b<t;b++)
				printf(" ");
			printf("%s\n",matriz[c]);
		}
			
	}
	
	return 0;
}