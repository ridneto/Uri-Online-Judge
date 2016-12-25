#include <stdio.h>
#include <math.h>

int main() {
    
	int Valor, notas;
	scanf("%d", &Valor);
	
	printf("%d\n", Valor);		
	notas = Valor / 100;
	Valor = Valor - notas * 100;
	printf("%d nota(s) de R$ 100,00\n", notas);	
	notas = Valor / 50;
	Valor = Valor - notas * 50;
	printf("%d nota(s) de R$ 50,00\n", notas);
	notas = Valor / 20;
	Valor = Valor - notas * 20;
	printf("%d nota(s) de R$ 20,00\n", notas);
	notas = Valor / 10;
	Valor = Valor - notas * 10;
	printf("%d nota(s) de R$ 10,00\n", notas);
	notas = Valor / 5;
	Valor = Valor - notas * 5;
	printf("%d nota(s) de R$ 5,00\n", notas);
	notas = Valor / 2;
	Valor = Valor - notas * 2;
	printf("%d nota(s) de R$ 2,00\n", notas);
	notas = Valor / 1;
	Valor = Valor - notas * 1;
	printf("%d nota(s) de R$ 1,00\n", notas);
	
	return 0;
}