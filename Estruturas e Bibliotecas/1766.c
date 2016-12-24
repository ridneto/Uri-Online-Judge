#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct {char nome[101];int peso;int idade; double altura;}Carac;

int comp(const void *, const void *);

int main (){
	
	Carac Renas[10001];
	int t, i, n, m, c;
	
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		scanf("%d %d", &n, &m);
		
		for(c=0;c<n;c++)
			scanf("%s %d %d %lf", Renas[c].nome, &Renas[c].peso, &Renas[c].idade, &Renas[c].altura);
		
		qsort(Renas,n,sizeof(Carac),comp);
		printf("CENARIO {%d}\n", i);
		for(c=0;c<m;c++)
			printf("%d - %s\n", c+1, Renas[c].nome, Renas[c].peso, Renas[c].idade, Renas[c].altura);	
	}
	
	return 0;
}

int comp(const void *p1, const void *p2){
	Carac *i = (Carac *)p1, *j = (Carac *)p2; 
	if(i->peso > j->peso)
		return -1;
	else
		if(i->peso < j->peso)
			return 1;
		else
			if(i->idade > j->idade)
				return 1;
			else				
				if(i->idade < j->idade)
					return -1;
				else					
					if(i->altura > j->altura)
						return 1;
					else
						if(i->altura < j->altura)
							return -1;
						else
							return strcmp(i->nome,j->nome);
}