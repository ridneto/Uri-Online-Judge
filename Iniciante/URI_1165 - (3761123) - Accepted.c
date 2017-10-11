#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int vezes, numero, eh, c; //sendo eh = 0, não é primo; 1 = primo;
	scanf("%d", &vezes);
	do{
		scanf("%d", &numero);
		if(numero == 2)
			printf("2 eh primo\n");
		else{
				eh=1;
				c=2;
				do{
					if(numero%c == 0)
						eh = 0;
					c++;
				}while(c<numero && eh == 1);
				if(eh == 1)
					printf("%d eh primo\n", numero);
				else
					printf("%d nao eh primo\n", numero);
		}
		vezes--;
	}while(vezes>=1);
	
	return 0;
}