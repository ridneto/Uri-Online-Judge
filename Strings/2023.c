#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_NOME 85
#define MAX_CRIANCA 1000

typedef struct{char entrada[MAX_NOME]; char padrao[MAX_NOME];}TLista;

int compara(const void *, const void *);
char menor(char);

int main(){		
	TLista lista[MAX_CRIANCA];
	int n=0, i;
	
	while(fgets(lista[n].entrada, MAX_NOME, stdin) != NULL){
		for(i=0; lista[n].entrada[i] >= ' '; i++);
		lista[n].entrada[i] = '\0';
		
		for(i=0; lista[n].entrada[i] != '\0';i++)
			lista[n].padrao[i] = menor(lista[n].entrada[i]);		
		lista[n].padrao[i] = '\0';
		n++;
	}
	
	qsort(lista, n, sizeof(TLista), compara);
	
	printf("%s\n", lista[n-1].entrada);
	
	return 0;
}

int compara(const void *p1, const void *p2){
	TLista *i = (TLista *)p1, *j = (TLista *)p2;
	
	return strcmp(i->padrao, j->padrao);
}

char menor(char c){
	if(c >= 'a' && c <= 'z')
		c-=32;
	return c;
}


