#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	float sal, re;
	scanf("%f", &sal);
	if(sal <= 400){
		re = sal * 0.15;
		sal = sal + re;
		printf("Novo salario: %.2f\n", sal);
		printf("Reajuste ganho: %.2f\n", re);
		printf("Em percentual: 15 %\n");
	}else{
		if(sal <= 800){
			re = sal * 0.12;
			sal = sal + re;
			printf("Novo salario: %.2f\n", sal);
			printf("Reajuste ganho: %.2f\n", re);
			printf("Em percentual: 12 %\n");
		}else{
			if(sal <= 1200){
				re = sal * 0.1;
				sal = sal + re;
				printf("Novo salario: %.2f\n", sal);
				printf("Reajuste ganho: %.2f\n", re);
				printf("Em percentual: 10 %\n");
			}else{
				if(sal <= 2000){
					re = sal * 0.07;
					sal = sal + re;
					printf("Novo salario: %.2f\n", sal);
					printf("Reajuste ganho: %.2f\n", re);
					printf("Em percentual: 7 %\n");
				}else{
					re = sal * 0.04;
					sal = sal + re;
					printf("Novo salario: %.2f\n", sal);
					printf("Reajuste ganho: %.2f\n", re);
					printf("Em percentual: 4 %\n");
				}
			}
		}
	}
	return 0;
}