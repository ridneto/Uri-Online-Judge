#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}

int main (void){
	
	int n1, n2, n;
	char a[1];
	
	scanf("%d", &n);
	while(n>0){
		scanf("%d%c%d", &n1, &a[0], &n2);
		if(n1==n2)
			printf("%d\n", n1 * n2);
		else
			if(a[0] >= 'A' && a[0] <= 'Z')
				printf("%d\n", n2 - n1);
			else
				printf("%d\n", n2 + n1);
		n--;
	}
	
	
	return 0;
}

