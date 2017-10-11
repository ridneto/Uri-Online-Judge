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
	
	char in[20];
	int n, c;
	scanf("%d", &n);
	LimpaBuffer();
	while(n>0){
		
		fgets(in,100,stdin);				
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		for(c=0;c<=3;c++)
			in[c] = tolower(in[c]);
		
		if(in[0] == 't' && in[1] == 'h' && in[2] == 'o' && in[3] == 'r' && in[5] >= 49 && in[5] <= 57)
			printf("Y\n");
		else
			printf("N\n");
		n--;
	}
	
	return 0;
}