#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>

int main() {
	
	int vezes;
	char cursos[100];
	scanf("%d", &vezes);
	while(vezes>=1)
	{
		scanf("%s", cursos);
		vezes--;
	}
	printf("Ciencia da Computacao\n");
	return 0;
}