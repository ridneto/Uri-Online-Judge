#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}

int main (void){
	
	char in[1003];
	int c, t, estacerto, ab, fe, pas1;
	
	while(fgets(in,1003,stdin) != NULL){
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		t = strlen(in);
		for(c=0,estacerto=1, ab=0, fe=0, pas1=0; c<t && estacerto==1;c++)
			if(in[c] == '(' || in[c] == ')')
				if(pas1==0)
					if(in[c] == ')' && ab==0)
						estacerto=0;
					else{
							pas1++;
							ab++;
						}
				else
					if(in[c] == ')'){
						fe++;
						if(fe>ab)
							estacerto=0;						
					}else
						ab++;
		
		if(estacerto==1 && ab != fe)
			estacerto=0;
		
		
		if(estacerto==1)
				printf("correct\n");
		else
			printf("incorrect\n");
	}
	return 0;
}

