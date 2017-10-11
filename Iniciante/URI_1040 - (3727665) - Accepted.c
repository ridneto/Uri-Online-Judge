#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
	double n2, n3, n4, n, media;
	scanf("%lf%lf%lf%lf", &n2, &n3, &n4, &n);
	media = (n2 * 2 + n3 * 3 + n4 * 4 + n)/ 10;
	printf("Media: %.1lf\n", media);
	if(media >= 7){
		printf("Aluno aprovado.\n");
	}else{
		if(media < 5){
			printf("Aluno reprovado.\n");
		}else{
			printf("Aluno em exame.\n");
			scanf("%lf", &n);
			printf("Nota do exame: %.1lf\n", n);
			media = (media + n)/2;
			if(media >= 5){
				printf("Aluno aprovado.\n");
			}else{
				printf("Aluno reprovado.\n");
			}
			printf("Media final: %.1lf\n", media);
		}
	}
	
	return 0;
}