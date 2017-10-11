#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int tipo, sup, res = 0;
	scanf("%d%d", &tipo, &sup);
	if(tipo == sup){
		res++;
	}
	scanf("%d", &sup);
	if(tipo == sup){
		res++;
	}
	scanf("%d", &sup);
	if(tipo == sup){
		res++;
	}
	scanf("%d", &sup);
	if(tipo == sup){
		res++;
	}
	scanf("%d", &sup);
	if(tipo == sup){
		res++;
	}
	printf("%d\n", res);
	
	return 0;
}