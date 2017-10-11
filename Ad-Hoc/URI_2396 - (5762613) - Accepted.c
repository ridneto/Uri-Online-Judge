#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 100

typedef struct{int id, tempo;}TCarro;

int compara(const void *, const void *);

int main(){
	
	int i, j, n, m, valor;
	TCarro carro[MAX];
	
	scanf("%d %d", &n, &m);
	
	for(i=0; i<n; i++)
		for(j=0, carro[i].id = i, carro[i].tempo = 0; j<m; j++){
			scanf("%d", &valor);
			carro[i].tempo += valor;
		}
		
	qsort(carro, n, sizeof(TCarro), compara);

	for(i=0; i<3; i++)
		printf("%d\n", carro[i].id + 1);
		
	return 0;
}

int compara(const void *p1, const void *p2){
	TCarro *i = (TCarro *)p1, *j = (TCarro *)p2;
	
	if(i->tempo > j->tempo)
		return 1;
	else
		if(i->tempo < j->tempo)
			return -1;
		else
			return 0;
}