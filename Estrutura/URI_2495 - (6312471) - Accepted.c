#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 100001
#define TRUE 1
#define FALSE 0

int main(){
	char pen[MAX];
	int i, j, n;
	
	while(scanf("%d", &n) == 1){
		memset(pen, FALSE, n+1);
		for(i=1; i<n; i++){
			scanf("%d", &j);
			pen[j] = TRUE;
		}
		for(i=1; i<=n; i++)
			if(!pen[i])
				break;
		printf("%d\n", i);
	}

	return 0;
}

