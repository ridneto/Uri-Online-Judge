#include <stdio.h>
#include <math.h>

int main(){
	int vezes, cont;
	float p2, p3, p5, r;
	
	scanf("%d",&vezes);
	//float vetor[vezes];
	for(cont=1;cont<=vezes;cont++)
	{
		scanf("%f%f%f",&p2,&p3,&p5);
		r = (p2 * 2 + p3 * 3 + p5 * 5)/10;
		//vetor[(cont - 1)] = r;
		printf("%.1f\n", r);
	}
}	