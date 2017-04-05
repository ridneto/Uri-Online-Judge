#include <stdio.h>
#include <math.h>

int main() {
    
	double Valor;
	int moedas, copiaV, notas;
	scanf("%lf", &Valor);
	copiaV = Valor * 100;
	copiaV = copiaV / 100;
	printf("NOTAS:\n");
	notas = copiaV / 100;
	copiaV = copiaV - notas * 100;
	printf("%d nota(s) de R$ 100.00\n", notas);	
	notas = copiaV / 50;
	copiaV = copiaV - notas * 50;
	printf("%d nota(s) de R$ 50.00\n", notas);
	notas = copiaV / 20;
	copiaV = copiaV - notas * 20;
	printf("%d nota(s) de R$ 20.00\n", notas);
	notas = copiaV / 10;
	copiaV = copiaV - notas * 10;
	printf("%d nota(s) de R$ 10.00\n", notas);
	notas = copiaV / 5;
	copiaV = copiaV - notas * 5;
	printf("%d nota(s) de R$ 5.00\n", notas);
	notas = copiaV / 2;
	copiaV = copiaV - notas * 2;
	printf("%d nota(s) de R$ 2.00\n", notas);
	notas = copiaV / 1;
	
	copiaV = Valor * 100;
	copiaV = copiaV % 100;
	//printf("%d", copiaV);
	
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", notas);
	moedas = copiaV / 50;
	copiaV = copiaV - moedas * 50;
	printf("%d moeda(s) de R$ 0.50\n", moedas);
	moedas = copiaV / 25;
	copiaV = copiaV - moedas * 25;
	printf("%d moeda(s) de R$ 0.25\n", moedas);
	moedas = copiaV / 10;
	copiaV = copiaV - moedas * 10;
	printf("%d moeda(s) de R$ 0.10\n", moedas);
	moedas = copiaV / 5;
	copiaV = copiaV - moedas * 5;
	printf("%d moeda(s) de R$ 0.05\n", moedas);
	moedas = copiaV / 1;
	printf("%d moeda(s) de R$ 0.01\n", moedas);
		
	
	return 0;
}