#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

int main (){

	int a, b, c, d, e, f, g, h, i, j;
	
	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
	scanf("%d %d %d %d %d", &f, &g, &h, &i, &j);
	if(a != f && b != g && c != h && d != i && e != j)
		printf("Y\n");
	else
		printf("N\n");
	
	return 0;
}