#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	int n;
	char in[21];
	
	scanf("%d", &n);
	
	while(n>0){
		scanf("%s", in);
		if(strlen(in) > 3)
			printf("%s", in);
		else
			if(in[0] == 'O' && in[1] == 'B')
				printf("OBI");
			else
				if(in[0] == 'U' && in[1] == 'R')
					printf("URI");
				else
					printf("%s", in);
		if(n>1)
			printf(" ");
		else
			printf("\n");
		n--;
	}
	
	return 0;
}
