#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){	
	int p;
	scanf("%d", &p);
	if(p==1)
		printf("Top 1\n");
	else
		if(p<=3)
			printf("Top 3\n");
		else
			if(p<=5)
				printf("Top 5\n");
			else
				if(p<=10)
					printf("Top 10\n");
				else
					if(p<=25)
						printf("Top 25\n");
					else
						if(p<=50)
							printf("Top 50\n");
						else
							printf("Top 100\n");
}