#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
void LimpaBuffer()
/* Limpa buffer de entrada para fgets */
{ while(getchar()!='\n');
return;
}

#define MAX 1003

int main (void){
	
	char in[MAX], cpy[MAX];
	int n, p, c, t;
	
	scanf("%d", &n);
	LimpaBuffer();
	while(n>0){
		fgets(in,MAX,stdin);
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		t = strlen(in);
		for(c=0;c<t;c++)
			if((in[c] >= 97 && in[c] <= 122) || (in[c] >= 65 && in[c] <= 90)){
				p = in[c];
				in[c] = p+3;
			}		
		for(c=0;c<t;c++)
			cpy[c] = in[t-1-c];				
		cpy[t] = '\0';	
		for(c=t/2;c<t;c++){
			p = cpy[c];
			cpy[c] = p-1;
		}		
		printf("%s\n", cpy);
			
		n--;
	}
	
	return 0;
}