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

	int li, lf, ci, cf, dl, dc;
	
	while(scanf("%d %d %d %d", &li, &ci, &lf, &cf) && (li + lf + ci + cf != 0)){
		dl = abs(li-lf);
		dc = abs(ci - cf);
		if(li == lf && ci == cf)
			printf("0\n");
		else
			if(li == lf || ci == cf || dl == dc)
				printf("1\n");
			else
				printf("2\n");
	}
	return 0;
}