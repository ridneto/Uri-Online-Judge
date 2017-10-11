#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 101

void imprimiLinha(char *, int, int);

int main(){ 	
	
	char string[MAX];
	
	while(scanf("%s", string) == 1){
		imprimiLinha(string, strlen(string), 0);
		printf("\n");
	}
	
	return 0;
}

void imprimiLinha(char *string, int tam, int desloc){
	int i;
	
	if(tam){
		for(i=0; i<desloc; i++)
			printf(" ");
		for(i=0; i<tam-1; i++)
			printf("%c ", string[i]);
		printf("%c\n", string[i]);
		imprimiLinha(string, tam-1, desloc+1);
	}
}