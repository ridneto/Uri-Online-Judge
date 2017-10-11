#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	double matriz[12][12], media=0;
	char op[2];
	int c, c1, l;
	
	scanf("%d", &l);
	scanf("%s", op);
	for(c=0;c<12;c++)
		for(c1=0;c1<12;c1++)
			scanf("%lf", &matriz[c][c1]);
	for(c=0;c<12;c++)
		media += matriz[c][l];
	if(op[0] == 'M')		
		media /= 12.0;	
	printf("%.1lf\n", media);
	
	return 0;
}