#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

typedef struct{char nome[200]; char f[200]; int v; int p;}TAlgo;

int main()
{	
	TAlgo lista[100];
	int n, i, j, flag, q;
	scanf("%d", &q);
	while(q--){
		scanf("%d", &n);
		for(i=0;i<n;i++)
			scanf("%s", lista[i].nome);
		for(i=0;i<n;i++){
			scanf("%s", lista[i].f);
			lista[i].v = 0;
			lista[i].p = 0;
		}		
		for(i=0;i < n;i++)
			for(j=0;lista[i].f[j] != '\0';j++)
				if(lista[i].f[j] != 'M'){
					lista[i].v++;
					if(lista[i].f[j] == 'P')
						lista[i].p++;
				}
		for(i=0, flag=0;i<n;i++){					
			if(((lista[i].p * 100) / lista[i].v) < 75){
				if(!flag){
					printf("%s", lista[i].nome);
					flag++;
				}else
					printf(" %s", lista[i].nome);
			}			
		}
		printf("\n");
	}
	return 0;
}