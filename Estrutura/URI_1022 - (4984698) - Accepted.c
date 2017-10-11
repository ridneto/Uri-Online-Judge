#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

typedef struct{int numerador; int denominador;}TReal;
TReal Adicao(TReal, TReal);
TReal Subtracao(TReal, TReal);
TReal Divisao(TReal, TReal);
TReal Multiplicao(TReal, TReal);
TReal Simplificacao(TReal);
int mdc(int, int);

int main(){
	
	TReal f1, f2;
	char sinal;
	int n;
	
	scanf("%d", &n);
	while(n--){
		scanf("%d / %d %c %d / %d", &f1.numerador, &f1.denominador, &sinal, &f2.numerador, &f2.denominador);
		if(sinal == '+')
			f1 = Adicao(f1, f2);
		else
			if(sinal == '-')
				f1 = Subtracao(f1, f2);
			else
				if(sinal == '/')
					f1 = Divisao(f1, f2);
				else
					f1 = Multiplicao(f1, f2);
		f2 = Simplificacao(f1);
		printf("%d/%d = %d/%d\n", f1.numerador, f1.denominador, f2.numerador, f2.denominador);			
	}		
	return 0;
}

TReal Adicao(TReal i, TReal j){
	TReal r;
	/* Soma: (N1*D2 + N2*D1) / (D1*D2) */
	r.numerador = i.numerador * j.denominador + j.numerador * i.denominador;
	r.denominador = i.denominador * j.denominador;
	
	return r;	
}

TReal Subtracao(TReal i, TReal j){
	TReal r;
	/* Subtração: (N1*D2 - N2*D1) / (D1*D2) */
	r.numerador = i.numerador * j.denominador - j.numerador * i.denominador;
	r.denominador = i.denominador * j.denominador;
	
	return r;
}

TReal Multiplicao(TReal i, TReal j){
	TReal r;
	/* Multiplicação: (N1*N2) / (D1*D2) */
	r.numerador = i.numerador * j.numerador;
	r.denominador = i.denominador * j.denominador;
	
	return r; 
}

TReal Divisao(TReal i, TReal j){
	TReal r;
	/* Divisão: (N1/D1) / (N2/D2), ou seja (N1*D2)/(N2*D1) */
	r.numerador = i.numerador * j.denominador;
	r.denominador = j.numerador * i.denominador;
	
	return r;
}

TReal Simplificacao(TReal i){
	int d;
	
	d = mdc(i.numerador, i.denominador);
	i.numerador = i.numerador / d;
	i.denominador = i.denominador / d;
	
	return i;
}

int mdc(int i, int j){
	if(i < 0)	
		i = -i;
	if(j < 0)	
		j = -j;
	if(i % j == 0)
        return j;
    else
        return mdc(j, i % j);
}


