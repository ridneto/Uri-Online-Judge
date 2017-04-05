#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define MAX 10000

struct RegNo{int num; struct RegNo *next; struct RegNo *before;};
typedef struct RegNo TpNo;

int josephus(int, int);

int main()
{
	int n, jump, i=0, nc;
	scanf("%d", &nc);
	while(nc--){
		scanf("%d %d", &n, &jump);
		printf("Case %d: %d\n", ++i, josephus(n,jump));
	}
	return 0;
}

int josephus(int n, int jump){
	int i, j;
	TpNo *aux, *first, *last;
	first = NULL;
	for(i=0;i<n;i++){
		aux = (TpNo *)malloc(sizeof(TpNo));
		aux->num = i;
		aux->next = NULL;
		if(first == NULL)
			first = aux;
		else{
			last->next = aux;
			aux->before = last;
		}last = aux;
	}
	last->next = first;
	first->before = last;
	for(i=0, n--, j=0, aux=first;i<n;){
		if(j+1<jump){
			j++;
			aux=aux->next;
		}else{
			i++;
			j=0;
			aux->next->before = aux->before;
			aux->before->next = aux->next;
			aux = aux->next;
		}
	}
	return aux->num+1;
}
