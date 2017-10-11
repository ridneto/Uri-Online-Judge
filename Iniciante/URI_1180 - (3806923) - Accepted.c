#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int tamanho, cont, numero, posicao=0, menor, pmenor=0;
	scanf("%d", &tamanho);
	int vetor[tamanho];
	for(cont=0;cont<tamanho;cont++){
		scanf("%d", &numero);
		vetor[cont]=numero;
		if(posicao==0)
			menor = numero;
		if(numero<menor){
			pmenor = posicao;
			menor = numero;
		}
		posicao++;
	}	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", pmenor);
	return 0;
}