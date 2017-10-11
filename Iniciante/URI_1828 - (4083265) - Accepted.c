#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

int main (void){

	int n, i;
	char raj[8], sheldon[8];
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		scanf("%s %s", sheldon,raj);
		
		if(strcmp(sheldon,raj)==0)
			printf("Caso #%d: De novo!\n", i);
		else
			if(strcmp(sheldon,"tesoura")==0)//tesoura
				if(strcmp(raj,"papel")==0 || strcmp(raj,"lagarto")==0)
					printf("Caso #%d: Bazinga!\n", i);
				else
					printf("Caso #%d: Raj trapaceou!\n", i);
			else
				if(strcmp(sheldon,"papel")==0)//papel
					if(strcmp(raj,"pedra")==0 || strcmp(raj,"Spock")==0)
						printf("Caso #%d: Bazinga!\n", i);
					else
						printf("Caso #%d: Raj trapaceou!\n", i);
				else
					if(strcmp(sheldon,"pedra")==0)//pedra
						if(strcmp(raj,"lagarto")==0 || strcmp(raj,"tesoura")==0)
							printf("Caso #%d: Bazinga!\n", i);
						else
							printf("Caso #%d: Raj trapaceou!\n", i);
					else
						if(strcmp(sheldon,"lagarto")==0)//lagarto
							if(strcmp(raj,"Spock")==0 || strcmp(raj,"papel")==0)
								printf("Caso #%d: Bazinga!\n", i);
							else
								printf("Caso #%d: Raj trapaceou!\n", i);
						else
							if(strcmp(sheldon,"Spock")==0)//Spock
								if(strcmp(raj,"tesoura")==0 || strcmp(raj,"pedra")==0)
									printf("Caso #%d: Bazinga!\n", i);
								else
									printf("Caso #%d: Raj trapaceou!\n", i);
	}
	return 0;
}