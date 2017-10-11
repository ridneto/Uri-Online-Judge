#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

#define MAX 5

void imprimi(int *, int *, int);

int main(){
	
	int impar[MAX], par[MAX], ipar, iimpar, i, e;
	
	for(i=0, ipar=0, iimpar=0; i<15; i++){
		scanf("%d", &e);
		if(e % 2)
			impar[iimpar++] = e;
		else
			par[ipar++] = e;
		if(iimpar == MAX)
			imprimi(impar, &iimpar, 1);
		if(ipar == MAX)
			imprimi(par, &ipar, 0);				
	}
	
	imprimi(impar, &iimpar, 1);
	imprimi(par, &ipar, 0);
	
	return 0;
}

void imprimi(int *vetor, int *ivetor, int impar){
	int i;
	if(impar)
		for(i=0; i<*ivetor; i++)
			printf("impar[%d] = %d\n", i, vetor[i]);
	else
		for(i=0; i<*ivetor; i++)
			printf("par[%d] = %d\n", i, vetor[i]);
	*ivetor=0;
}
