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
	
	char in[1055];
	int p, pego, c, t, eh;
	while(fgets(in,1054,stdin) && in[0] != '*'){
		for( c=0; in[c] >= ' '; c++ );
		in[c]= '\0';
		t = strlen(in);
		for(c=0, pego=0;pego==0;c++)
			if(in[c] != 32){
				p = c;
				pego++;
			}	
		in[p] = tolower(in[p]);	
		//printf("comparador %c\n", in[p]);
		for(c=p+1,eh=1;c<t&&eh==1;c++)
			if(in[c] == 32 && in[c+1] != 32){
				//printf("letra em questao: %c\n", in[c+1]);
				if(in[c+1] <= 90){
					//printf("entrou no tolower!\n");
					if(tolower(in[c+1]) != in[p])
						eh=0;
				}else{
					//printf("nao entrou\n");
					if(in[c+1] != in[p])
						eh=0;
				}
			}		
		if(eh==1)
			printf("Y\n");
		else
			printf("N\n");
		//printf("\n");
	}
	return 0;
}