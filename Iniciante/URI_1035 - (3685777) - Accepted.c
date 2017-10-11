#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	int a, b, c, d, somaC, somaA;
	scanf("%d%d%d%d", &a,&b,&c,&d);
	somaC = c + d;
	somaA = a + b;
	if(a%2==0 && b > c && c>=0 && d>=0 && somaC > somaA){
		printf("Valores aceitos\n");
	}else{
		printf("Valores nao aceitos\n");
	}
}