#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	double matriz[12][12], media=0;
	char op[2];
	int c, c1, d=0; 
	
	scanf("%s", op);
	for(c=0;c<12;c++)
		for(c1=0;c1<12;c1++)
			scanf("%lf", &matriz[c][c1]);
		
	for(c=0;c<11;c++)
		for(c1=1+c;c1<12;c1++){
			media += matriz[c][c1];
			d++;
		}
	if(op[0] == 'M')		
		media /= (double)d;	
	printf("%.1lf\n", media);
	
	return 0;
}