#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct {char nome[21]; int pontos; int vit; int gols; int id;}Dados;
int comp(const void *, const void*);

int main (){	
	Dados Times[101];
	int t, n, m, c, ga, gb, c1, indA, indB; // n = times, m = jogos;
	char ta[21], tb[21];
	scanf("%d", &t);
	while(t>0){
		scanf("%d %d", &n, &m);
		for(c=0;c<n;c++){
			scanf("%s", Times[c].nome);
			Times[c].pontos = 0;
			Times[c].vit = 0;
			Times[c].gols = 0;
			Times[c].id = c+1;
		}
		for(c=0;c<m;c++){
			scanf("%d %s %d %s", &ga, ta, &gb, tb);
			for(c1=0;c1<n;c1++)
				if(strcmp(ta,Times[c1].nome)==0){
					indA = c1;
					c1 = n;
				}
			for(c1=0;c1<n;c1++)
				if(strcmp(tb,Times[c1].nome)==0){
					indB = c1;
					c1 = n;
				}
			if(ga > gb){
				Times[indA].vit++;
				Times[indA].pontos += 3;
			}else
				if(ga < gb){
					Times[indB].vit++;
					Times[indB].pontos += 3;
				}else{
					Times[indB].pontos++;
					Times[indA].pontos++;
				}
			Times[indA].gols += ga;
			Times[indB].gols += gb;
		}
		qsort(Times,n,sizeof(Dados),comp);
		for(c=0;c<n;c++)
			printf("%s\n", Times[c].nome);
		t--;
	}
	return 0;
}
int comp(const void *p1, const void *p2){
	Dados *i = (Dados *)p1, *j = (Dados *)p2; 
	if(i->pontos > j->pontos)	
		return -1;
	else
		if(i->pontos < j->pontos)
			return 1;
		else
			if(i->vit > j->vit)
				return -1;
			else
				if(i->vit < j->vit)
					return 1;
				else
					if(i->gols > j-> gols)
						return -1;
					else
						if(i->gols < j->gols)
							return 1;
						else
							if(i->id > j->id)
								return 1;
							else
								return -1;
}