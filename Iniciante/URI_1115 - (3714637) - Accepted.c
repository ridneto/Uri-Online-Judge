#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int x, y;
	scanf("%d%d", &x, &y);
	while(x != 0 && y != 0){
		if(x>0){
			if(y>0)
				printf("primeiro\n");
			else
				printf("quarto\n");
		}else{
			if(y>0)
				printf("segundo\n");
			else
				printf("terceiro\n");
		}
		scanf("%d%d", &x, &y);
	}	
	return 0;
}