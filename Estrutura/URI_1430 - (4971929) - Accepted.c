#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

/* enum valores{W = 1, H = 0.5, Q = 0.25, E = 0.125, S = 0.0625, T = 0.03125, X = 0.015625}; */

int main(){
	
	char composicao[203];
	int t, i, j, out;
	double v;
	
	while(1){
		scanf("%s", composicao);
		if(composicao[0] == '*') break;
		
		t = strlen(composicao);
		for(i=1, out=0;i<t;i++){
			for(j=i, v=0;composicao[j] != '/'; j++)
				if(composicao[j] == 'W')
					v+= 1;
				else if(composicao[j] == 'H')
					v+= 0.5;
				else if(composicao[j] == 'Q')
					v+= 0.25;
				else if(composicao[j] == 'E')
					v+= 0.125;
				else if(composicao[j] == 'S')
					v+= 0.0625;
				else if(composicao[j] == 'T')
					v+= 0.03125;
				else
					v+= 0.015625;
			if(v==1)
				out++;
			i=j;
		}
		printf("%d\n", out);
	}	
	return 0;
}
