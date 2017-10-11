#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int reclamacao;

	while(scanf("%d", &reclamacao) != EOF)
		if(reclamacao == 0)
			printf("vai ter copa!\n");
		else
			printf("vai ter duas!\n");
	return 0;
}