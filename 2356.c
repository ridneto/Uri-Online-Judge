#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 101

char resistente(char *, char *);

int main(){

	char a[MAX], b[MAX];
	
	while(scanf("%s", a) != EOF){
		scanf("%s", b);
		if(resistente(a, b))
			printf("Resistente\n");
		else
			printf("Nao resistente\n");
	}
	
	return 0;
}

char resistente(char *a, char *b){
	int i, j, q, tb= strlen(b);
	
	for(i=0, j=0; a[i] != '\0' && !j; i++){
		if(a[i] == b[j]){
			for(q=i; a[q] != '\0' && j<tb; q++, j++)
				if(a[q] != b[j]){
					break;
				}
			if(j == tb)
				break;
			else
				j=0;	
		}
	}
	if(j)
		return 1;
	else
		return 0;
}