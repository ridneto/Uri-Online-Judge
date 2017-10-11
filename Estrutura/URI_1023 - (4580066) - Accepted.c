#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

typedef struct{int pessoas; int cons; double cmedio;}infr;
infr Lugares[10000000];
int comp(const void *, const void *);

int main() {
	
	int n, c, num=0, tp, tc, out, deu; 
	double aux;
	
	while(scanf("%d", &n) && n != 0){		
		for(c=0, tp=0, tc=0;c<n;c++){
			scanf("%d %d", &Lugares[c].pessoas, &Lugares[c].cons);
			tp += Lugares[c].pessoas;
			tc += Lugares[c].cons;
			Lugares[c].cmedio = (double)Lugares[c].cons / Lugares[c].pessoas;
		}
		qsort(Lugares,n,sizeof(infr),comp);
		num++;
		if(num > 1)
			printf("\n");
		printf("Cidade# %d:\n", num);
		for(c=0;c<n;c++){
			out = Lugares[c].pessoas;
			deu = 0;
			while(c+1 < n && deu == 0){
				if(floor(Lugares[c].cmedio) == floor(Lugares[c+1].cmedio)){
					out += Lugares[c+1].pessoas;
					c++;
				}else
					deu = 1;
			}
			printf("%d-%.0lf", out, floor(Lugares[c].cmedio));
			if(c+1 < n)
				printf(" ");
		}
		printf("\n");
		aux = ((double)tc / tp)*100;
		out = aux;
		aux = out / 100.0;
		printf("Consumo medio: %.2lf m3.\n", aux);
	}
	
	return 0;
}

int comp(const void *p1, const void *p2){
	infr *i = (infr *)p1, *j = (infr *)p2;
	if(i->cmedio > j->cmedio)
		return 1;
	else
		if(i->cmedio < j->cmedio)
			return -1;
		else
			return 0;
}

