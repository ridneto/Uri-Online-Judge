#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#define MAX_LETRAS 26
#define MAX_INPUT 103

void inicializa(int *);
int somaValores(int);

int main(){		
	int valorLetra[MAX_LETRAS], i, soma;
	char input[MAX_INPUT];
	
	inicializa(valorLetra);
	
	while(fgets(input, MAX_INPUT, stdin) != NULL){
		for(i=0, soma=0; input[i] >= 32; i++)
			if(input[i] != 32){
				if(input[i] < 'a')
					soma+= valorLetra[input[i] - 65];
				else
					soma+= valorLetra[input[i] - 97];
			}			
		printf("%d\n", somaValores(soma));
	}
	
    return 0;
}

int somaValores(int valor){
	int soma=0;
	if(valor < 10)
		return valor;
	else{
		do{
			soma += valor % 10;
			valor /= 10;
		}while(valor > 9);
		soma += valor;
		return somaValores(soma);
	}
		
}

void inicializa(int *vetor){
	int i, j;
	
	for(i=0, j=1; i<9; i++)
		vetor[i] = i+1;
	for(j=1;i<18;i++, j++)
		vetor[i] = j;
	for(j=1;i<28;i++, j++)
		vetor[i] = j;
}


