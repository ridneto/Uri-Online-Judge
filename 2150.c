#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_TAM 1000

int main(){		
	char vogais[MAX_TAM], frase[MAX_TAM];
	int i, j, t;
	
	while(fgets(vogais, MAX_TAM, stdin) != NULL){
		if(vogais[0] < ' ')
			break;
		fgets(frase, MAX_TAM, stdin);
		for(i=0; frase[i] >= 32; i++);
		frase[i] = '\0';
		for(i=0; vogais[i] >= 32; i++);
		vogais[i] = '\0';
		for(i=0, t=0; frase[i] != '\0'; i++)
			for(j=0; vogais[j] != '\0'; j++)
				if(frase[i] == vogais[j])
					t++;
		printf("%d\n", t);		
	}
	return 0;
}


