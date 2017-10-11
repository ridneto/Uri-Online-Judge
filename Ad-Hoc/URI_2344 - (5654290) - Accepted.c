#include <stdio.h>

int main(){	
	int n;

	scanf("%d", &n);
	
	if(!n)
		printf("E\n");
	else
		if(n < 36)
			printf("D\n");
		else
			if(n < 61)
				printf("C\n");
			else
				if(n < 86)
					printf("B\n");
				else
					printf("A\n");
	return 0;
}
