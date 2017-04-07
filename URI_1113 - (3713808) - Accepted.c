#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	int e1, e2;
	do{
		scanf("%d%d", &e1, &e2);
		if(e1 > e2){
			printf("Decrescente\n");
		}else{
			if(e1 < e2){
				printf("Crescente\n");
			}
		}
	}while(e1 != e2);
	
	
	return 0;
}
