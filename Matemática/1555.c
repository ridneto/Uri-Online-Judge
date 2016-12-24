#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int n, r, b, c, x, y;	
	
	scanf("%d", &n);
	
	while(n>0){
		scanf("%d %d", &x, &y);
		r = (3 * x) * (3 * x) + y * y;
		b = 2 * (x * x) + (5 * y) * (5 * y);
		c = -100 * x + y*y*y;
		
		if(r > b && r > c)
			printf("Rafael ganhou\n");
		else
			if(b>c)
				printf("Beto ganhou\n");
			else
				printf("Carlos ganhou\n");
		
		n--;
	}
	
	
	return 0;
}