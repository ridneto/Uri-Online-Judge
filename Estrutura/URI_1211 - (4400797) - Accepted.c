#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

typedef struct {char numero[201];}Fone;
Fone in[1000001];

int comp(const void *p1, const void *p2){
	Fone *i = (Fone *)p1, *j = (Fone *)p2; 
		
	return strcmp(i->numero,j->numero);
}

int main (){

	int n, c, d, p, c1;
	
	while(scanf("%d", &n) != EOF){
		for(c=0;c<n;c++)
			scanf("%s",in[c].numero);
		qsort(in,n,sizeof(Fone),comp);
		for(c=0, p=0, c1=0, d=0;c<n-1;c++){
			while(d==0 && in[c].numero[c1]!='\0')
				if(in[c].numero[c1]==in[c+1].numero[c1]){
					p++;
					c1++;
				}else{
					c1=0;
					d=1;
				}
			d=0;					
		}
		printf("%d\n",p);
	}
	
	
	return 0;
}