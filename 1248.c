#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX 26

void contabiliza(int *, char *);
void saida(int *, int *);
void imprimiVetor(int *);

int main(){ 	
	int dieta[MAX], comeu[MAX];
	char in[MAX+5];
	int n, i;
	
	scanf("%d ", &n);
	
	while(n--){
		for(i=0; i<MAX; i++){
			dieta[i] = 0;
			comeu[i] = 0;
		}	
		
		fgets(in, MAX + 5, stdin);			
		contabiliza(dieta, in);
		for(i=0; i<2; i++){
			fgets(in, MAX + 5, stdin);
			contabiliza(comeu, in);
		}
		
		saida(dieta, comeu);
	}
	
	return 0;
}

void imprimiVetor(int *str){
	int i;
	for(i=0; i<MAX; i++)
		printf("%c %d\n", i+'A', str[i]);
}

void contabiliza(int *str, char *in){
	int i;
	for(i=0; in[i] >= 65; i++)
		str[in[i] - 'A']++;	
}

void saida(int *dieta, int *comeu){
	int i;
	for(i=0; i<MAX; i++)
		if(dieta[i] < comeu[i])
			break;
		
	if(i < MAX)
		printf("CHEATER");
	else
		for(i=0; i<MAX; i++)
			if(dieta[i] != comeu[i])
				printf("%c", i + 'A');
	printf("\n");		
}
