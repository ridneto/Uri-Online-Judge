#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#define MAX 96
#define SUBT 32

typedef struct{char ascii; short int v;}TFrequencia;
int Compara(const void *, const void *);

int main (void){
	
	TFrequencia f[MAX];
	char in[1001];	 
	int i, j=0;
	
	while(gets(in)){	
		for(i=0;i<MAX;i++){
			f[i].ascii = i+SUBT;
			f[i].v = 0; 
		}
		for(i=0;in[i] != '\0';i++)
			f[in[i]-SUBT].v++;
		qsort(f,MAX,sizeof(TFrequencia),Compara);
		if(j)
			printf("\n");
		else
			j++;
		for(i=0;i<MAX;i++)
			if(f[i].v)
				printf("%d %hd\n", f[i].ascii, f[i].v);
	}
	return 0;
}

int Compara(const void *p1, const void *p2){
	TFrequencia *i = (TFrequencia *)p1, *j = (TFrequencia *)p2;
	if(i->v > j->v)
		return 1;
	else
		if(i->v < j->v)
			return -1;
		else
			if(i->ascii > j->ascii)
				return -1;
			else
				if(i->ascii == j->ascii)
					return 0;
				else
					return 1;
}