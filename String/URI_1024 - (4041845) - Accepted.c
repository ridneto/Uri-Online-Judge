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
	
	char in[1003], cpy[1001];
	int n, p, c, t;
	scanf("%d", &n);
	LimpaBuffer();
	while(n>0){
		fgets(in,1003,stdin);
		//printf("entrada: %s\n", in);
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		t = strlen(in);
		//passada 1
		for(c=0;c<t;c++)
			if((in[c] >= 97 && in[c] <= 122) || (in[c] >= 65 && in[c] <= 90)){
				p = in[c];
				in[c] = p+3;
			}
		//printf("passa 1: %s\n", in);	
		//passada 2				
		for(c=0;c<t;c++)
			cpy[c] = in[t-1-c];				
		cpy[t] = '\0';
		//printf("passa 2: %s\n", cpy);
		//passada 3			
		for(c=t/2;c<t;c++){
			p = cpy[c];
			cpy[c] = p-1;
		}		
		printf("%s\n", cpy);
			
		n--;
	}
	
	return 0;
}