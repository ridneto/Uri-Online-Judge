#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

struct Tcarta{char num;struct Tcarta *next;};
typedef struct Tcarta Tc;

int main()
{	
	Tc *aux, *first, *last;		
	int i, n, f;
	
	while(scanf("%d", &n) && n){
		first = NULL;
		last = NULL;
		for(i=1;i<=n;i++){
			aux = (Tc *)malloc(sizeof(Tc));
			aux->num = i;
			aux->next = NULL;
			if(first == NULL)
				first = aux;	
			else
				last->next = aux;
			last = aux;
		}
		printf("Discarded cards:");
		for(i=0, f=0, n--;i<n;i++){
			aux = first;
			if(!f){
				f++;
				printf(" %d",aux->num);
			}else
				printf(", %d", aux->num);
			aux = aux->next;
			last->next = aux;
			last = last->next;
			first = aux->next;
		}
		printf("\nRemaining card: %d\n",first->num);
	}
	return 0;
}
