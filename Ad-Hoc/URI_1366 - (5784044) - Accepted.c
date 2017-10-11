#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main(){

	int n, i, tam, qt, t;
	
	while(scanf("%d", &n) && n){
		for(i=0, t=0; i<n; i++){
			scanf("%d %d", &tam, &qt);
			t += qt / 2;
		}
		printf("%d\n", t/2);
	}
	return 0;
}