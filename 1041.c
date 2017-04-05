#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	double n1, n2;;
	scanf("%lf%lf", &n1, &n2);
	if(n1 == 0 && n2 == 0){
		printf("Origem\n");
	}else{
		if(n1 == 0){
			printf("Eixo Y\n");
		}else{
			if(n2 == 0){
				printf("Eixo X\n");
			}else{
				if(n1 > 0){
					if(n2 > 0){
						printf("Q1\n");
					}else{
						printf("Q4\n");
					}
				}else{
					if(n2 > 0){
						printf("Q2\n");
					}else{
						printf("Q3\n");
					}
				}
			}
		}
	}	
	return 0;
}