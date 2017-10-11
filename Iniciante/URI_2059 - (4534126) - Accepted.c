#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (){
	
	int p, n, m, r, o, im;
	
	scanf("%d %d %d %d %d", &p, &n, &m, &r, &o);
	if((r == 1 && o == 0) || (r == 0 && o == 1 ))
		im = 1;
	else
		if(r == 1 && o == 1)
			im = 2;
		else
			if((m+n)%2 == 0)
				if(p == 1)
					im = 1;
				else
					im = 2;
			else
				if(p == 1)
					im = 2;
				else
					im = 1;	
	printf("Jogador %d ganha!\n", im);			
	
	return 0;
}
