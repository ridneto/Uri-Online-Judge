#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 50

int main(){
	
	int n, i, custo, lucro, max, tmax, dia[MAX];
	
	while(scanf("%d", &n) != EOF){
		scanf("%d", &custo);
		for(i=0; i<n; i++){
			scanf("%d", &lucro);
			dia[i] = lucro - custo;
		}
		for(i=0, tmax=0, max=0; i<n; i++){
			tmax += dia[i];
			if(tmax < 0)
				tmax = 0;
			if(max < tmax)
				max = tmax;
		}
		printf("%d\n", max);
	}
	
	return 0;
}
