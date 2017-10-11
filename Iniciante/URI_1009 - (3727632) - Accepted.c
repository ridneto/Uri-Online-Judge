#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h> 

int main() {
	char nome[10];
	double sal, vendas;
	scanf("%s", nome);
	scanf("%lf%lf", &sal, &vendas);
	vendas = vendas * 0.15;
	sal =  vendas + sal;
	printf("TOTAL = R$ %.2lf\n", sal);
}