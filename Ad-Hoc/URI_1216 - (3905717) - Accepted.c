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
	double d, m=0;
	int c=0;
	char nome[100];
	while(scanf("%[^\n]", nome) != EOF){		
		scanf("%*c%lf%*c",&d);
		c++;
		m += d;		
	}
	printf("%.1lf\n", m/(float)c);
}