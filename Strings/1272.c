#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void LimpaBuffer()
{ 
	while(getchar()!='\n');
	return;
}

int main (void){

	char frase[53], palavra[26];
	int casos, cont, cp=0, te, c;
	scanf("%d", &casos);
	LimpaBuffer();
	while(casos>=1){	
		fgets(frase,53,stdin);
		for( c=0; frase[c] >= ' '; c++ );
		frase[c]= '\0';
		cp = 0;		
		te = strlen(frase);		
		if(frase[0] > 32){
			palavra[cp] = frase[0];
			cp++;
		}
		for(cont=1;cont < te;cont++)
			if(frase[cont-1] == ' ' && frase[cont] != ' '){
				palavra[cp] = frase[cont];				
				cp++;
			}				
		palavra[cp] = '\0';
		
		printf("%s\n", palavra);
		casos--;
	}
	
	return 0;
}