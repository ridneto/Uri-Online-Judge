#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 500

typedef struct { char name[100]; int gold; int silver; int bronze;} TPais;

int compara(const void *, const void *);

int main(){	
	int i, n;
	TPais vetor[MAX];
	
	scanf("%d", &n);
	for(i=0;i<n;i++)
		scanf("%s %d %d %d", vetor[i].name, &vetor[i].gold, &vetor[i].silver, &vetor[i].bronze);
	qsort(vetor, n, sizeof(TPais), compara);
	for(i=0;i<n;i++)
		printf("%s %d %d %d\n", vetor[i].name, vetor[i].gold, vetor[i].silver, vetor[i].bronze);
	return 0;
}

int compara(const void *p1, const void *p2){
	TPais *i = (TPais *)p1, *j = (TPais *)p2;
	if(i->gold > j->gold)
		return -1;
	else
		if(i->gold < j->gold)
			return 1;
		else
			if(i->silver > j->silver)
				return -1;
			else
				if(i->silver < j->silver)
					return 1;
				else
					if(i->bronze > j->bronze)
						return -1;
					else
						if(i->bronze < j->bronze)
							return 1;
						else
							return strcmp(i->name, j->name);			
}