#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 10

typedef struct{int id; double oleo;}TTecla;

int compara(const void *, const void *);

int main(){
	int n, i, v=0;
	TTecla tecla[MAX];
		
	while(scanf("%d", &n) != EOF){
		for(i=0; i<MAX; i++){
			scanf("%lf", &tecla[i].oleo);
			tecla[i].id = i;	
		}			
		qsort(tecla, MAX, sizeof(TTecla), compara);
		printf("Caso %d: ", ++v);
		for(i=0; i<n; i++)
			printf("%d", tecla[i].id);
		printf("\n");
	}
	
	return 0;
}

int compara(const void *p1, const void *p2){
	TTecla *i = (TTecla *)p1, *j = (TTecla *)p2;
	if(i->oleo > j->oleo)
		return -1;
	else
		if(i->oleo < j->oleo)
			return 1;
		else
			if(i->id > j->id)
				return 1;
			else
				if(i->id < j->id)
					return -1;
				else
					return 0;
}