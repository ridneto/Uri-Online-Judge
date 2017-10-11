#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main (void){
	
	char frase[50];
	int M, t ,c;
	while(gets(frase) != NULL ){
		t = strlen(frase);
		for(c=0,M=1;c<t;c++)
			if(frase[c]!=' ')
				if(M==0){
					if(frase[c] >= 65 && frase[c] <= 90)
						frase[c] = tolower(frase[c]);
					M=1;
				}else{
					if(frase[c] >= 97 && frase[c] <= 122)
						frase[c] = toupper(frase[c]);
					M=0;
				}				
		printf("%s\n", frase);
	}
	return 0;
}