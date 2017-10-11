#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 150

int main(){
	
	int n, i, e, max, maxi, notas[MAX];
	
	for(i=0; i<=MAX; i++)
		notas[i] = 0;	
	
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		scanf("%d", &e);
		notas[e]++;
	}
	
	for(i=0, max=0; i<MAX; i++)
		if(notas[i] >= max){
			max = notas[i];
			maxi = i;
		}
	
	printf("%d\n", maxi);
	
	return 0;
}
