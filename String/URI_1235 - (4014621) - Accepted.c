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
	
	int n, t, c, co;
	char in[101], out[101];
	
	scanf("%d", &n);
	LimpaBuffer();
	while(n>0){
		gets(in);
		t = strlen(in);
		for(c=t/2-1, co=0;c>=0;c--, co++)
			out[co] = in[c];
		for(c=t-1;c>=t/2;c--,co++)
			out[co] = in[c];
		out[co] = '\0';
		printf("%s\n", out);
		n--;
	}
	return 0;
}