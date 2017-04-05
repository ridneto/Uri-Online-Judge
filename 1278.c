#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LINHA 100
#define MAX_COLUNA 55

int tamMaior;
void arrumaString(char *);

int main(){ 	
	
	char in[MAX_LINHA][MAX_COLUNA];
	int n, i, j, v=0;
	
	while(scanf("%d ", &n) && n){
		tamMaior=0;		
		if(!v)			
			v++;
		else
			printf("\n");		
		for(i=0; i<n; i++)
			fgets(in[i], MAX_COLUNA, stdin);
		for(i=0; i<n; i++)
			arrumaString(in[i]);
		for(i=0; i<n; i++){
			for(j= strlen(in[i]); j<tamMaior; j++)
				printf(" ");
			printf("%s\n", in[i]);
		}		
	}
	
	return 0;
}

void arrumaString(char *str){
	char aux[MAX_COLUNA];
	int i, j;
	
	for(i=0, j=0; str[i] >= ' '; i++)
		if((str[i] >= 'A' && str[i] <= 'Z') || (j && aux[j-1] != ' '))
			aux[j++] = str[i];
	for(;aux[j-1] == ' ';j--);
	aux[j] = '\0';
	if(j > tamMaior)
		tamMaior = j;
	strcpy(str, aux);
}

