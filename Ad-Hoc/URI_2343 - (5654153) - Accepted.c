#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 501

int main(){	
	char matriz[MAX][MAX];
	int x, y, n, deu=0;	
	
	memset(matriz, 0, MAX * MAX);	
	scanf("%d", &n);
	
	while(n--){
		scanf("%d %d", &x, &y);
		if(!deu){
			if(!matriz[x][y])
				matriz[x][y] = 1;
			else
				deu++;
		}			
	}
	
	printf("%d\n", deu);
	
	
	return 0;
}
