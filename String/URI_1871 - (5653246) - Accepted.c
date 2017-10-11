#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_TAM 10

int main(){		
	int a, b, topo, pilha[MAX_TAM];
	
	while(scanf("%d %d", &a, &b) && a && b){
		for(topo=-1, a += b;a;){
			pilha[++topo] = a % 10;
			a /= 10;
		}
		while(topo != -1){
			if(pilha[topo] != 0)
				printf("%d", pilha[topo]);
			topo--;
		}
		printf("\n");
	}
	
	return 0;
}


