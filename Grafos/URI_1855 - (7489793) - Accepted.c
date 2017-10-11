#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define TRUE  1
#define FALSE 0
#define MAX  110

#define BAU  '*'

typedef struct{char sentido[4], c;}TCelula;
TCelula mapa[MAX][MAX];

char achaBau(int, int);

int main(){
	
	int n, m, i, j;
		
	scanf("%d %d ", &m, &n);
	
	memset(mapa, FALSE, sizeof(mapa));
	
	for(i=0; i<n; i++)
		for(j=0; j<m; j++)
			scanf(" %c", &mapa[i][j].c);
	
	if(achaBau(n, m))
		printf("*\n");
	else
		printf("!\n");
	
	return 0;
}

char achaBau(int n, int m){
	int i, j, sentido = 4, x=0, y=0;
	
	char direcao[4];
	// 0 baixo; 1 cima; 2 esq; 3 dir;	
	
	direcao[0] = 'v';
	direcao[1] = '^';
	direcao[2] = '<';
	direcao[3] = '>';
	//strcpy(direcao, "v^<>");
				
	while(TRUE){
		for(i=0, j=0; i<4 && !j; i++)
			if(mapa[x][y].c == direcao[i]){
				sentido = i;
				j = TRUE;
			}
		
		if(mapa[x][y].c == BAU)
			return TRUE;
			
		if((!j && mapa[x][y].sentido[sentido]) || sentido == 4)
			return FALSE;
		else
			mapa[x][y].sentido[sentido] = TRUE;
		
		
		if(sentido == 0)
			x+=1;
		if(sentido == 1)
			x-=1;
		if(sentido == 2)
			y-=1;
		if(sentido == 3)
			y+=1;
			
		if(x < 0 || x == n || y < 0 || y == m)
			return FALSE;		
	}
}
