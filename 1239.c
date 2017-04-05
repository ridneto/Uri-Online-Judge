#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{
	while(getchar()!= '\n');
	return;
}

int main (void){

	char in[53]; 
	int c, t, nB, nI;

	while(fgets(in,53,stdin) != NULL){
		for(c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		t = strlen(in);
		for(c=0, nB = 0, nI=0;c<t;c++)
			if(in[c] == '_')
				if(nI == 0){
					printf("<i>");
					nI++;
				}else{
					printf("</i>");
					nI=0;
				}	
			else
				if(in[c] == '*')
					if(nB == 0){
						printf("<b>");
						nB++;
					}else{
						printf("</b>");
						nB = 0;
					}
				else
					printf("%c", in[c]);
		printf("\n");
				
	}
	
	return 0;
}