#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct {long int num; long int mod; int impar;}Infr;
int comp(const void *, const void*);

int main (){	
	Infr Valores[10001];
	int n, m, c;	
	while(scanf("%d %d", &n, &m) && (m != 0 || n != 0)){
		for(c=0;c<n;c++){
			scanf("%ld", &Valores[c].num);
			Valores[c].mod = Valores[c].num % m;
			if(Valores[c].num % 2 == 0)
				Valores[c].impar = 0;
			else
				Valores[c].impar = 1;
		}	
		qsort(Valores,n,sizeof(Infr),comp);
		printf("%d %d\n", n, m);
		for(c=0;c<n;c++)
			printf("%ld\n", Valores[c].num);
	}
	printf("0 0\n");
	return 0;
}
int comp(const void *p1, const void *p2){
	Infr *i = (Infr *)p1, *j = (Infr *)p2; 
	if(i->mod > j->mod)
		return 1;
	else
		if(i->mod < j->mod)
			return -1;
		else
			if((i->impar == 1 && j->impar == 0) || (i->impar == 0 && j->impar == 1))
				if(i->impar > j->impar)
					return -1;
				else
						return 1;
			else
				if(i->impar == 1 && j->impar == 1)
					if(i->num > j->num)
						return -1;
					else
						return 1;
				else
					if(i->num > j->num)
						return 1;
					else
						return -1;						
}