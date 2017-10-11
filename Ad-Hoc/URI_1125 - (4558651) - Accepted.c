#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct{int id; int pontos;}Infr;
int comp(const void *, const void *);

int main (){
	
	Infr Pilotos[100];
	int corridas[100][100], p, g, sts, c, c1, n, pt, c2, acho; 
	
	while(scanf("%d %d", &g, &p) && g != 0 && p != 0){		
		for(c=0;c<g;c++)
			for(c1=0;c1<p;c1++)
				scanf("%d", &corridas[c][c1]);
			
		scanf("%d", &sts);
		while(sts>0){
			for(c=0;c<p;c++){
				Pilotos[c].pontos = 0;
				Pilotos[c].id = c+1;
			}
			scanf("%d", &n);
			for(c=1;c<=n;c++){
				scanf("%d", &pt);
				for(c1=0;c1<g;c1++)
					for(c2=0,acho=0;acho==0;c2++)
						if(corridas[c1][c2] == c){
							acho++;
							Pilotos[c2].pontos += pt;
						}					
			}
			qsort(Pilotos,p,sizeof(Infr),comp);
			printf("%d", Pilotos[0].id);
			c = Pilotos[0].pontos;
			c1 = 1;
			while(Pilotos[c1].pontos == c){
				printf(" %d", Pilotos[c1].id);
				c1++;
			}
			printf("\n");	
			sts--;
		}
	}
	
	return 0;
}

int comp(const void *p1, const void *p2){
	Infr *i = (Infr *)p1, *j = (Infr *)p2;
	if(i->pontos > j->pontos)
		return -1;
	else
		if(i->pontos < j->pontos)
			return 1;
		else
			if(i->id > j->id)
				return 1;
			else
				return -1;
}
