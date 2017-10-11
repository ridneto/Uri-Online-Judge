#include <stdio.h>
#include <math.h>

int main() {
    
	int Id, Qnt;
	float Preco, Total;
	scanf("%d%d%f", &Id, &Qnt, &Preco);
	Total = Preco * Qnt;
	scanf("%d%d%f", &Id, &Qnt, &Preco);
	Total = Preco * Qnt + Total;
	printf("VALOR A PAGAR: R$ %.2f\n", Total);
	return 0;
}