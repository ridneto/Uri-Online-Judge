#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 50

typedef struct{char str[MAX + 1]; int p; int t;}TString;
int compara(const void *, const void *);

int main()
{	
	TString vetor[MAX];	
	int n, ind, i;
	char c;
	
	scanf("%d", &n);
	while(n--){
		ind=0;
		do{			
			scanf("%s", vetor[ind].str); 			
			scanf("%c", &c);	
			vetor[ind].t = strlen(vetor[ind].str);
			vetor[ind].p = ind;
			ind++;
		}while(c == 32);
		qsort(vetor, ind, sizeof(TString), compara);
		for(i=0, ind--; i<ind; i++)
			printf("%s ", vetor[i].str);		
		printf("%s\n", vetor[i].str);
	}
	
	return 0;
}

int compara(const void *p1, const void *p2){
	TString *i = (TString *)p1, *j = (TString *)p2;
	if(i->t > j->t)
		return -1;
	else
		if(i->t < j->t)
			return 1;
		else
			if(i->p > j->p)
				return 1;
			else
				return -1;
}