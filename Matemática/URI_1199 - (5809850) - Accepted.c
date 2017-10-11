#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

#define MAX 12

long int HexToInt(char *);
long int StrToInt(char *);

int main(){

	char in[MAX];
	while(scanf("%s", in) && in[0] != 45)	
		if(in[0] == '0' && in[1] == 'x')
			printf("%ld\n", HexToInt(in));
		else
			printf("0x%X\n", StrToInt(in));		
	
	return 0;
}

long int StrToInt(char *str){
	long int t, ret, mult;
	
	for(t = strlen(str) - 1, mult=1, ret=0; t>=0; t--, mult*=10)
		ret +=  (str[t] - '0') * mult;
		
	return ret;
}

long int HexToInt(char *str){
	long int ret, i, tam;
	for(i=0, tam=strlen(str)-1, ret=0; str[tam] != 'x'; i++, tam--){
		if(str[tam] >= 'A' && str[tam] <= 'F')
			ret += (str[tam] - 'A' + 10) * pow(16, i);
		else
			if(str[tam] >= 'a' && str[tam] <= 'f')
				ret += (str[tam] - 'a' + 10) * pow(16, i);
			else
				ret += (str[tam] - '0') * pow(16, i);
	}
	
	return ret;
}

/*
	Autores: 	Ridineu de Moraes Neto 		0030481521033
				Rodrigo Ferreira Rodrigues  0030481521034
	
	Exercicio 1 da lista 1.
*/