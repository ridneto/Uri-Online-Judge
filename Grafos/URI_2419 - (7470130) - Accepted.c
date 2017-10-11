#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 1000

#define AGUA  '.'
#define TERRA '#'

int main(){
	
	int i, j, n, m, qt;
	char mapa[MAX][MAX + 1];
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++)
		scanf("%s", mapa[i]);
		
	for(i=0, qt=0; i<n; i++)
		for(j=0; j<m; j++)
			if((i == 0 || i+1 == n || j == 0 || j+1 == m || 
				mapa[i+1][j] == AGUA || mapa[i-1][j] == AGUA || mapa[i][j+1] == AGUA || mapa[i][j-1] == AGUA) && mapa[i][j] == TERRA)
					qt++;
	
	printf("%d\n", qt);
	
	return 0;
}
