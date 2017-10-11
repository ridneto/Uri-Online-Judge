#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 100
#define FALSE 0
#define TRUE 1

int main(){
	
	int n, m, i, p, jmp, aux;
	char pedra[MAX];
	
	scanf("%d %d", &n, &m);	
	memset(pedra, FALSE, n);
	
	for(i=0; i<m; i++){
		scanf("%d %d", &p, &jmp);		
		pedra[--p] = TRUE;
		aux = p;
		while(1){
			aux -= jmp;
			if(aux < 0)
				break;
			pedra[aux] = TRUE;			
		}
		aux = p;
		while(1){
			aux += jmp;
			if(aux >= n)
				break;
			pedra[aux] = TRUE;			
		}
	}
		
	for(i=0; i<n; i++)
		printf("%d\n", pedra[i]);
		
	return 0;
}
